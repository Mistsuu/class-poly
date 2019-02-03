#ifndef _CLASSPOLY_INCLUDE_
#define _CLASSPOLY_INCLUDE_

#include <gmp.h>
#include "ff_poly.h"
#include "iqclass.h"
#include "evec.h"
#include "class_inv.h"
#include "cstd.h"

/*
    Copyright 2012 Andrew V. Sutherland

    This file is part of classpoly.

    classpoly is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    classpoly is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with classpoly.  If not, see <http://www.gnu.org/licenses/>.
*/

#define CLASSPOLY_VERSION_STRING	"1.0.2"

// Default directory for class polynomial files.  Default filename is printf("H_%d.txt", -D).
#define H_DIR					H_dir()		
#define H_DIR_NAME			"H_files"
extern char _H_dir_str[4096];
static inline char *H_dir (void)
{
	char *s;
	if ( _H_dir_str[0] ) return _H_dir_str;
	s = getenv("HOME");
	if ( s ) sprintf (_H_dir_str, "%s/%s", s, H_DIR_NAME);
	else strcpy (_H_dir_str, H_DIR_NAME);
	return _H_dir_str;
}

// classgroup_pcp structure holds data associated to the polycyclic presentation of cl(D).  This is computed once and is the same for all p.
typedef struct classgroup_pcp_struct {
	long D;									// negative discriminant (not nescessarly equal to the D stored in classpoly strcture, it may be u^2*D)
	long h;									// size of classgroup
	long enum_cnt;							// either h or h/2 (if ell0 is set)
	long ell0;									// if nonzero, ell0=ell[0] and n[0]=2 and classpoly is a perfect square (and we enumerate each double root just once), default is 0
	long ellfilter;								// product of primes ell that are prohibited as norms of generators or auxilliary prime forms (by default, primes that make enumeration hard)
	long ell[IQ_MAX_GENS];						// norms of implicit generators (primeforms a=(ell*x^2+b*x*y+c*y^2) with norm ell and b >=0)
	long m[IQ_MAX_GENS];						// partial products of relative orders (equivalently, m[i] is the order of the subgroup generated by generators 1,...i)
	long n[IQ_MAX_GENS];						// relative orders
	long o[IQ_MAX_GENS];						// absolute orders
	long r[IQ_MAX_RLEN];						// power relations (a[i]^n[i] = a[0]^e[0]*...*a[i-1]^e[i-1], where e is an exponent vector of length i stored at offset binom(i,2) of r)
	long aux_ell[IQ_MAX_GENS];					// norms of auxilliary primeforms a'[i] s.t. a'[i] is in <a[0],....a[i]> but not <a[0],...,a[i-1]>
	long aux_e[IQ_MAX_GENS][IQ_MAX_GENS];		// aux_e[i] is the exponent vector of a' w.r.t. to the pcp (a[0],...,a[k])
	long orient_p[IQ_MAX_GENS];					// optional list of norms of orienting primes p ...
	long orient_q[IQ_MAX_GENS];					// ... or product of primes p*q (q=1 when only p is needed)
	long orient_reps[IQ_MAX_GENS][IQ_MAX_GENS];	// representation of orienting norm p*q in terms of ells
	int orientable;								// set when orientation setup has been performed
	int k;									// number of generators
	int enum_inv;								// invariant to use for enumeration (not necessarily the same as H->inv, will default to INV_J if not specified)
} classgroup_pcp_t[1];

// torsor structure contains a pointer to a polycyclic presentation and an enumerated list of roots of the classpoly mod p, as well as auxiliary data that orients the presentation relative to the enumeration
typedef struct torsor_struct {
	struct classgroup_pcp_struct *pres;			// pointer to presentation in classpoly or suborder structure
	ff_t *roots;								// pointer to list of pres->enum_cnt enumerated roots (allocated in classpoly or suborder structure)
	long r[IQ_MAX_RLEN];						// oriented relations
	int signs[IQ_MAX_GENS];						// indicates the sign of the oriented generator (i.e. the sign of b in the primeform), all signs are relative to the (arbitrary) orientation of the first generator of order > 2
} torsor_t[1];
#define MAX_P32	9							// maximum number of distinct primes that can divide a 32-bit integer

typedef struct ifactors_struct {
	int p[MAX_P32];
	int h[MAX_P32];
	int k;
} ifactors_t[1];									// prime factorization of an integer n < 2^31

#define MAX_SUBORDERS	8	

typedef struct suborder_struct {
	long D;									// discriminant of suborder
	long index;								// index of suborder in parent order (which need not be the maximal order)
	struct ifactors_struct *u;						// prime factorization of the index
	struct classgroup_pcp_struct *pres;			// polycyclic presentation of cl(u^2D) used to enumerate roots
	ff_t *roots;								// array of size h(u^2D)+PHI_MAX_H+1 used for enumerating roots
	long roots_p;								// identifies finite field containing roots
} suborder_t[1];

/*
	See "Fast decomposition of polynomials with known Galois group" Enge-Morain LNCS 2643/2003.
	
	We decompose the ring class field via [K_O: K] = [K_O:L]*[L:K], where L may equal K_O (e.g. if h(D) is prime)
	The poly F defines [L:K] and lies in Z[X].  The poly G defines [K_O:L] and is obtained via a root r of F and
	interpolating polynomials g_0,...,g_{d- 2} of degree d_F-1 such that

		G(X) = X^d + rX^{d-1} + g_{d-2}(r)/F'(r)X^{d-2} + ... + g_1(r)/F'(r)X + g_0(r)/F'(r)
	
	where F' is the derivative of F.  The case d=d_G=1 corresponds to F(X) = H_D(X).  Note that in every case
	we need to store exactly d_F*d_G+1 coefficients, since F has degree d_F (so d_F+1 coefficients including
	the leading 1), and each interpolating polynomial has degree d_F-1 (d_F coefficients).
*/
typedef struct classpoly_struct {
	long D;							// negative discriminant
	mpz_t *C;							// coefficient array, holds d_F*d_G+1 coefficients (equal to either h+1 or h/2+1)
	ff_t *c;							// reduced coefficient array, updated each time (one assumes we get called once per _ff_p)
	ff_t redp;							// modulus used in last reduction from C to c
	ff_t p;							// current modulus
	long t, v;							// positive t and v such that 4*p = t^2 - v^2D (unique for D < -4)
	int F_d;							// degree of bottom (possibly only) poly
	int G_d;							// degree of top poly
	int inv;							// identifies invariant as defined in class_inv.h (inv=0 for the j-invariant)
	struct classgroup_pcp_struct *pres;	// polycyclic presentation for cl(D), used to enumerate roots (will only be created if needed)
	ff_t *roots;						// array of size h(D)+PHI_MAX_H+1 used for enumerating roots
	long roots_p;						// identifies finite field containing roots
	struct ifactors_struct *u;				// prime factorization of u, the conductor of D (which can be at most 32 bits)
	struct classpoly_struct *H1;			// pointer to an array of classpolys for discriminants D/ell^2, where ell|u and ell > PHI_MAX_M (used when finding roots)
	int H1_len;						// length of H1 array
	struct suborder_struct *suborders[MAX_SUBORDERS+1];		// null-terminated list of pointers to suborder structures
} classpoly_t[1];

/*
	Decompose class group in a way that is easily compatible with a given polycyclic presentation with relative orders n[0],...,n[k]
	Returns the index d of the "digit" where the split is made.  The subgroup will be generated by alpha[0],...,alpha[d-1],alpha[d]^e
	where e < n[d] divides n[d].  Then div0 = prod_{i<d} n[i], div1 = n[d]/e, div2 = e, and div3 = prod_{i>d} n[i].

	The subgroup will have order div0*div1 >= minsplit, and there will be div2*div3 cosets.
	It this is not possible, then -1 is returned.
*/
static inline int tower_split (long *hdiv0, long *hdiv1, long *hdiv2, long *hdiv3, long n[], int k, long minsplit)
{
	register long h;
	register int i, j, s, d;

	for ( i = 0, h=1 ; i < k ; i++ ) h *= n[i];
	for ( i = 0, *hdiv0=1 ; i < k && (*hdiv0)*n[i] < minsplit ; i++ ) *hdiv0 *= n[i];
	d = i;
	if ( *hdiv0 == h ) return -1;
	j = n[d];  s = sqrt(j);
	*hdiv1 = 0;
	for ( i = 2 ; i <= s ; i++ ) { if ( j%i ) continue; if ( i*(*hdiv0) >= minsplit ) { *hdiv1=i; break; } }
	if ( i > s ) for ( i = s ; i >= 1 ; i-- ) { if ( j%i ) continue; if ( (j/i)*(*hdiv0) >= minsplit ) { *hdiv1 = j/i; break; } }
	if ( ! *hdiv1 || (*hdiv0)*(*hdiv1)==h) return -1;
	*hdiv2 = j/(*hdiv1);
	*hdiv3 = h/((*hdiv0)*(*hdiv1)*(*hdiv2));
	return d;
}

int compute_classpoly (long D, int inv, mpz_t P, char *filename); // computes classpoly for specified discriminant and invariant, mod P if specified, over Z otherwise.  Output is written to filename, or to sprintf("H_%d.txt",-D) if filename is null.

int classpoly_load_mpz (mpz_t H[], int n, int *inv, long D);		// obsolete, use classpoly_load

int classgroup_pcp_setup (classgroup_pcp_t pres, long D, long ellfilter, long ell0, int enum_inv);
void classgroup_pcp_print (classgroup_pcp_t pres);
long classgroup_pcp_vfilter (classgroup_pcp_t pres);	// returns product of primes that caller may want to exclude from v(p) when picking primes p
int classgroup_pcp_orient (classgroup_pcp_t pres);		// setup to support computing oriented presentations (w.r.t. to an enumeration mod p)

int classpoly_init (classpoly_t H, long D, int inv);
int classpoly_create (classpoly_t H, long D, int inv);	// looks for class poly on disk, will call classpoly_compute to create if needed
int classpoly_load (classpoly_t H, long D, int inv);		// loads class poly from disk, returns error if it can't be found
void classpoly_clear (classpoly_t H);

void classpoly_setup_find_jinv (classpoly_t H);			// setup data structures to support ff_classpoly_findroot  (this function will be called automatically whenver it is needed)
int classpoly_setup_enum_roots (classpoly_t H, long ellfilter, long ell0, int enum_inv);
											// setup data structures to support ff_classpoly_roots and ff_classpoly_jinvs -- this must be called first
int classpoly_suborder_setup_enum_roots (classpoly_t H, long ellfilter, long ell0, long u, int enum_inv);
struct suborder_struct *classpoly_get_suborder (classpoly_t H, long u);

void ff_classpoly_reduce (classpoly_t H);				// reduces the class polynomial modulo _ff_p (this function will be called automatically whenver it is needed)
int ff_classpoly_root (ff_t r[1], classpoly_t H);			// obtains a root r of the class poly H mod _ff_p (which will be a j-invariant only when inv == 0), where _ff_p splits completely in the ring class field
int ff_classpoly_jinv (ff_t j[1], classpoly_t H);			// obtains a root j of the Hilbert class polynomial mod _ff_p, where _ff_p splits completely in the ring class field (returns 0 if this is not true)
											// (if inv != 0 a root of H will be converted to a root of the Hilbert class polynomial)
int ff_classpoly_suborder_jinv (ff_t j[1], classpoly_t H, long u);
											// obtains a root j of the Hilbert class polynomial of discriminant u^2D modolu _ff_p, where _ff_p must split completely in the ring class field for the suborder
int ff_classpoly_isroot (classpoly_t H, ff_t r);			// return true if r is a root of the classpoly -- only supported for G_d=1
static inline int classpoly_degree (classpoly_t H)		// returns the degree= F_d*G_d of the class polynomial (typically this is the class number h, but it may be h/2), returns 0 if no classpoly has been loaded
	{ return H->F_d * H->G_d; }
ff_t *ff_classpoly_roots (classpoly_t H);				// returns a pointer to an array of the h(D) roots of the class polynomial mod _ff_p. 
ff_t *ff_classpoly_jinvs (classpoly_t H);				// returns a pointer to an array of the h(D) j-invariants that are the roots of the Hilbert class polynomial, modulo _ff_p.
ff_t *ff_classpoly_suborder_roots (classpoly_t H, long u);
ff_t *ff_classpoly_suborder_jinvs (classpoly_t H, long u);
											// returns a pointer to an arrary of the h(u^2D) j-invariants that are roots of the Hilbert class polynomial of discriminant u^2D modulo _ff_p
	
int ff_classpoly_find_jinv (ff_t j[1], classpoly_t H);		// finds a root of the Hilbert class polynomial mod _ff_p, where _ff_p splits completely in the ring class field (returns 0 if this is not true)
											// this is done by searching for an elliptic curve with the correct endomorphism ring and does not require the classpoly to be loaded.

ff_t *ff_classpoly_enum_roots (classpoly_t H, ff_t r, int enum_inv);
static inline ff_t *ff_classpoly_enum_jinvs (classpoly_t H, ff_t j)
	{ return ff_classpoly_enum_roots (H, j, 0); }
ff_t *ff_classpoly_suborder_enum_roots (classpoly_t H, long u, ff_t r, int enum_inv);
static inline ff_t *ff_classpoly_suborder_enum_jinvs (classpoly_t H, long u, ff_t j)
	{ return ff_classpoly_suborder_enum_roots (H, u, j, 0); }
	
static inline int ff_classpoly_setup (classpoly_t H)
	{ if ( H->p != _ff_p ) {  if ( ! ff_norm_equation (&H->t,&H->v,H->D) ) return 0; H->p = _ff_p; } return 1; }

int torsor_setup (torsor_t T, classpoly_t H, long u);

// orient representation of class group element relative to the enumeration of the torsor T
static inline void torsor_orient_evec (long e2[], long e1[], torsor_t T)
{	
	register int i;
	
	for ( i = 0 ; i < T->pres->k ; i++ ) e2[i] = ( T->signs[i] < 0 ? T->pres->o[i] - e1[i] : e1[i] );
	evec_reduce (e2, T->pres->n, T->r, T->pres->k);
}

// inverse of torsor_orient_evec
static inline void torsor_unorient_evec (long e2[], long e1[], torsor_t T)
{	
	register int i;
	
	for ( i = 0 ; i < T->pres->k ; i++ ) e2[i] = ( T->signs[i] < 0 ? T->pres->o[i] - e1[i] : e1[i] );
	evec_reduce (e2, T->pres->n, T->pres->r, T->pres->k);
}

// apply the action of the classgroup element with exponent vector e (oriented w.r.t. T->r !) to the root at index pos.  returns the index of the result
static inline long torsor_action (long pos, long e[], torsor_t T)
{
	long e1[IQ_MAX_GENS];
	
	index_to_evec (e1, pos, T->pres->m, T->pres->k);
	evec_compose (e1, e1, e, T->pres->n, T->r, T->pres->k);
	return evec_to_index (e1, T->pres->m, T->pres->k);
}

#endif
