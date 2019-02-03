#ifndef _TORCOSTS_INCLUDE_
#define _TORCOSTS_INCLUDE_

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

struct torctab_rec {
	int m;
	int fix2, fix3;
	int N;
	int s2_flag;
	int t3_flag;
	double rating;
};

#define TORCTAB1_SIZE		139
/*
	These costs assume p=2 mod 3, 3 mod 4 and not 1 mod N
*/

static struct torctab_rec torctab1[TORCTAB1_SIZE] = {
{ 11, 1, 1, 11, 1, 1, 0.047250 },
{ 33, 1, 0, 11, 1, 2, 0.047250 },
{ 22, 1, 1, 11, 3, 1, 0.055125 },
{ 66, 1, 0, 11, 3, 2, 0.055125 },
{ 11, 1, 0, 11, 1, 0, 0.058000 },
{ 13, 1, 1, 13, 1, 1, 0.058542 },
{ 39, 1, 0, 13, 1, 2, 0.058542 },
{ 22, 0, 1, 11, 2, 1, 0.061333 },
{ 66, 0, 0, 11, 2, 2, 0.061333 },
{ 22, 1, 0, 11, 3, 0, 0.061750 },
{ 14, 1, 1, 14, 3, 1, 0.062500 },
{ 42, 1, 0, 14, 3, 2, 0.062500 },
{ 26, 1, 1, 13, 3, 1, 0.064583 },
{ 78, 1, 0, 13, 3, 2, 0.064583 },
{ 28, 0, 1, 14, 4, 1, 0.065625 },
{ 84, 0, 0, 14, 4, 2, 0.065625 },
{ 7, 1, 1, 7, 1, 1, 0.068750 },
{ 13, 1, 0, 13, 1, 0, 0.068750 },
{ 21, 1, 0, 7, 1, 2, 0.068750 },
{ 26, 1, 0, 13, 3, 0, 0.069583 },
{ 17, 1, 1, 17, 1, 1, 0.069687 },
{ 51, 1, 0, 17, 1, 2, 0.069687 },
{ 11, 0, 1, 11, 0, 1, 0.072500 },
{ 33, 0, 0, 11, 0, 2, 0.072500 },
{ 44, 1, 0, 11, 130, 0, 0.072667 },
{ 52, 0, 1, 13, 4, 1, 0.073958 },
{ 156, 0, 0, 13, 4, 2, 0.073958 },
{ 34, 1, 1, 17, 3, 1, 0.075313 },
{ 102, 1, 0, 17, 3, 2, 0.075313 },
{ 15, 1, 0, 15, 1, 0, 0.075625 },
{ 13, 0, 1, 13, 0, 1, 0.076667 },
{ 39, 0, 0, 13, 0, 2, 0.076667 },
{ 44, 0, 0, 11, 4, 0, 0.076667 },
{ 30, 1, 0, 15, 3, 0, 0.077188 },
{ 22, 0, 0, 11, 2, 0, 0.077333 },
{ 34, 1, 0, 17, 3, 0, 0.077969 },
{ 17, 1, 0, 17, 1, 0, 0.078750 },
{ 14, 0, 1, 14, 0, 1, 0.080556 },
{ 28, 0, 0, 14, 4, 0, 0.080556 },
{ 42, 0, 0, 14, 0, 2, 0.080556 },
{ 7, 1, 0, 7, 1, 0, 0.080833 },
{ 9, 1, 0, 9, 1, 0, 0.080833 },
{ 68, 0, 1, 17, 4, 1, 0.081380 },
{ 204, 0, 0, 17, 4, 2, 0.081380 },
{ 52, 0, 0, 13, 4, 0, 0.082292 },
{ 10, 1, 1, 10, 3, 1, 0.084687 },
{ 17, 0, 1, 17, 0, 1, 0.084687 },
{ 51, 0, 0, 17, 0, 2, 0.084687 },
{ 20, 0, 1, 10, 4, 1, 0.085938 },
{ 60, 0, 0, 10, 4, 2, 0.085938 },
{ 19, 1, 1, 19, 1, 1, 0.086111 },
{ 57, 1, 0, 19, 1, 2, 0.086111 },
{ 68, 0, 0, 17, 4, 0, 0.088281 },
{ 38, 1, 1, 19, 3, 1, 0.089514 },
{ 114, 1, 0, 19, 3, 2, 0.089514 },
{ 20, 0, 0, 10, 4, 0, 0.090625 },
{ 36, 0, 0, 18, 4, 0, 0.090972 },
{ 26, 0, 0, 13, 2, 0, 0.091667 },
{ 11, 0, 0, 11, 0, 0, 0.092000 },
{ 19, 1, 0, 19, 1, 0, 0.092778 },
{ 38, 1, 0, 19, 3, 0, 0.092778 },
{ 14, 1, 0, 7, 3, 0, 0.092917 },
{ 18, 1, 0, 9, 3, 0, 0.092917 },
{ 76, 0, 1, 19, 4, 1, 0.095255 },
{ 228, 0, 0, 19, 4, 2, 0.095255 },
{ 10, 0, 1, 10, 0, 1, 0.096667 },
{ 13, 0, 0, 13, 0, 0, 0.096667 },
{ 30, 0, 0, 10, 0, 2, 0.096667 },
{ 19, 0, 1, 19, 0, 1, 0.098333 },
{ 57, 0, 0, 19, 0, 2, 0.098333 },
{ 17, 0, 0, 17, 0, 0, 0.100000 },
{ 23, 1, 1, 23, 1, 1, 0.100227 },
{ 69, 1, 0, 23, 1, 2, 0.100227 },
{ 7, 0, 1, 7, 0, 1, 0.100833 },
{ 21, 0, 0, 7, 0, 2, 0.100833 },
{ 76, 0, 0, 19, 4, 0, 0.102083 },
{ 14, 0, 0, 14, 0, 0, 0.102222 },
{ 18, 0, 0, 9, 2, 0, 0.102222 },
{ 5, 1, 1, 5, 1, 1, 0.103125 },
{ 46, 1, 1, 23, 3, 1, 0.104318 },
{ 138, 1, 0, 23, 3, 2, 0.104318 },
{ 23, 1, 0, 23, 1, 0, 0.105682 },
{ 46, 1, 0, 23, 3, 0, 0.106705 },
{ 92, 0, 1, 23, 4, 1, 0.109091 },
{ 276, 0, 0, 23, 4, 2, 0.109091 },
{ 19, 0, 0, 19, 0, 0, 0.110000 },
{ 23, 0, 1, 23, 0, 1, 0.112273 },
{ 69, 0, 0, 23, 0, 2, 0.112273 },
{ 7, 0, 0, 7, 0, 0, 0.113333 },
{ 9, 0, 0, 9, 0, 0, 0.113333 },
{ 92, 0, 0, 23, 4, 0, 0.113826 },
{ 16, 0, 1, 16, 0, 1, 0.118125 },
{ 48, 0, 0, 16, 0, 2, 0.118125 },
{ 5, 1, 0, 5, 1, 0, 0.121250 },
{ 15, 0, 0, 15, 0, 0, 0.121250 },
{ 10, 0, 0, 10, 0, 0, 0.121667 },
{ 23, 0, 0, 23, 0, 0, 0.123182 },
{ 12, 0, 0, 12, 0, 0, 0.141667 },
{ 5, 0, 1, 5, 0, 1, 0.145000 },
{ 16, 0, 0, 16, 0, 0, 0.145000 },
{ 8, 0, 1, 8, 0, 1, 0.151250 },
{ 29, 1, 1, 29, 1, 1, 0.153036 },
{ 87, 1, 0, 29, 1, 2, 0.153036 },
{ 25, 0, 0, 25, 0, 0, 0.155000 },
{ 58, 1, 1, 29, 3, 1, 0.156116 },
{ 174, 1, 0, 29, 3, 2, 0.156116 },
{ 29, 1, 0, 29, 1, 0, 0.157500 },
{ 58, 1, 0, 29, 3, 0, 0.157500 },
{ 116, 0, 1, 29, 4, 1, 0.161086 },
{ 29, 0, 1, 29, 0, 1, 0.163393 },
{ 87, 0, 0, 29, 0, 2, 0.163393 },
{ 116, 0, 0, 29, 4, 0, 0.163690 },
{ 5, 0, 0, 5, 0, 0, 0.170000 },
{ 8, 0, 0, 8, 0, 0, 0.170000 },
{ 29, 0, 0, 29, 0, 0, 0.171071 },
{ 31, 1, 1, 31, 1, 1, 0.186583 },
{ 93, 1, 0, 31, 1, 2, 0.186583 },
{ 62, 1, 1, 31, 3, 1, 0.189750 },
{ 186, 1, 0, 31, 3, 2, 0.189750 },
{ 31, 1, 0, 31, 1, 0, 0.191333 },
{ 62, 1, 0, 31, 3, 0, 0.192167 },
{ 124, 0, 1, 31, 4, 1, 0.193056 },
{ 31, 0, 1, 31, 0, 1, 0.195333 },
{ 93, 0, 0, 31, 0, 2, 0.195333 },
{ 124, 0, 0, 31, 4, 0, 0.197917 },
{ 2, 1, 1, 2, 3, 1, 0.200000 },
{ 6, 1, 0, 2, 3, 2, 0.200000 },
{ 31, 0, 0, 31, 0, 0, 0.206667 },
{ 4, 1, 1, 4, 130, 1, 0.214167 },
{ 6, 0, 0, 6, 0, 0, 0.226667 },
{ 3, 1, 0, 3, 1, 0, 0.230000 },
{ 4, 0, 1, 4, 0, 1, 0.241667 },
{ 4, 1, 0, 2, 130, 0, 0.266667 },
{ 4, 0, 0, 4, 0, 0, 0.283333 },
{ 3, 0, 0, 3, 0, 0, 0.340000 },
{ 1, 1, 1, 1, 1, 1, 0.362500 },
{ 2, 0, 1, 2, 0, 1, 0.386667 },
{ 1, 1, 0, 1, 1, 0, 0.410000 },
{ 2, 0, 0, 2, 0, 0, 0.453333 },
};

#define TORCTAB2_SIZE 138

static struct torctab_rec torctab2[TORCTAB2_SIZE] = {
{ 11, 1, 1, 11, 1, 1, 0.047250 },
{ 33, 1, 0, 11, 1, 2, 0.047250 },
{ 22, 1, 1, 11, 3, 1, 0.055125 },
{ 66, 1, 0, 11, 3, 2, 0.055125 },
{ 13, 1, 1, 13, 1, 1, 0.057500 },
{ 39, 1, 0, 13, 1, 2, 0.057500 },
{ 11, 1, 0, 11, 1, 0, 0.058000 },
{ 22, 0, 1, 11, 2, 1, 0.061333 },
{ 66, 0, 0, 11, 2, 2, 0.061333 },
{ 14, 1, 1, 14, 3, 1, 0.061458 },
{ 42, 1, 0, 14, 3, 2, 0.061458 },
{ 22, 1, 0, 11, 3, 0, 0.061750 },
{ 26, 1, 1, 13, 3, 1, 0.064062 },
{ 78, 1, 0, 13, 3, 2, 0.064062 },
{ 28, 0, 1, 14, 4, 1, 0.065625 },
{ 84, 0, 0, 14, 4, 2, 0.065625 },
{ 13, 1, 0, 13, 1, 0, 0.066667 },
{ 26, 1, 0, 13, 3, 0, 0.069583 },
{ 17, 1, 1, 17, 1, 1, 0.069687 },
{ 51, 1, 0, 17, 1, 2, 0.069687 },
{ 11, 0, 1, 11, 0, 1, 0.070000 },
{ 33, 0, 0, 11, 0, 2, 0.070000 },
{ 7, 1, 1, 7, 1, 1, 0.070417 },
{ 21, 1, 0, 7, 1, 2, 0.070417 },
{ 15, 1, 0, 15, 1, 0, 0.072500 },
{ 52, 0, 1, 13, 4, 1, 0.073090 },
{ 156, 0, 0, 13, 4, 2, 0.073090 },
{ 34, 1, 1, 17, 3, 1, 0.074219 },
{ 102, 1, 0, 17, 3, 2, 0.074219 },
{ 7, 1, 0, 7, 1, 0, 0.076667 },
{ 13, 0, 1, 13, 0, 1, 0.076667 },
{ 39, 0, 0, 13, 0, 2, 0.076667 },
{ 44, 0, 0, 11, 4, 0, 0.076667 },
{ 17, 1, 0, 17, 1, 0, 0.077188 },
{ 22, 0, 0, 11, 2, 0, 0.077333 },
{ 34, 1, 0, 17, 3, 0, 0.077969 },
{ 30, 1, 0, 15, 3, 0, 0.080312 },
{ 14, 0, 1, 14, 0, 1, 0.080556 },
{ 28, 0, 0, 14, 4, 0, 0.080556 },
{ 42, 0, 0, 14, 0, 2, 0.080556 },
{ 9, 1, 0, 9, 1, 0, 0.080833 },
{ 68, 0, 1, 17, 4, 1, 0.081380 },
{ 204, 0, 0, 17, 4, 2, 0.081380 },
{ 52, 0, 0, 13, 4, 0, 0.082292 },
{ 10, 1, 1, 10, 3, 1, 0.083125 },
{ 20, 0, 1, 10, 4, 1, 0.083333 },
{ 60, 0, 0, 10, 4, 2, 0.083333 },
{ 17, 0, 1, 17, 0, 1, 0.084687 },
{ 51, 0, 0, 17, 0, 2, 0.084687 },
{ 19, 1, 1, 19, 1, 1, 0.084722 },
{ 57, 1, 0, 19, 1, 2, 0.084722 },
{ 11, 0, 0, 11, 0, 0, 0.087000 },
{ 68, 0, 0, 17, 4, 0, 0.088281 },
{ 38, 1, 1, 19, 3, 1, 0.090139 },
{ 114, 1, 0, 19, 3, 2, 0.090139 },
{ 36, 0, 0, 18, 4, 0, 0.090972 },
{ 19, 1, 0, 19, 1, 0, 0.091389 },
{ 26, 0, 0, 13, 2, 0, 0.091667 },
{ 13, 0, 0, 13, 0, 0, 0.092500 },
{ 38, 1, 0, 19, 3, 0, 0.092778 },
{ 14, 1, 0, 7, 3, 0, 0.092917 },
{ 18, 1, 0, 9, 3, 0, 0.092917 },
{ 20, 0, 0, 10, 4, 0, 0.095833 },
{ 76, 0, 1, 19, 4, 1, 0.096412 },
{ 228, 0, 0, 19, 4, 2, 0.096412 },
{ 17, 0, 0, 17, 0, 0, 0.096875 },
{ 19, 0, 1, 19, 0, 1, 0.098056 },
{ 57, 0, 0, 19, 0, 2, 0.098056 },
{ 23, 1, 1, 23, 1, 1, 0.100682 },
{ 69, 1, 0, 23, 1, 2, 0.100682 },
{ 7, 0, 1, 7, 0, 1, 0.100833 },
{ 21, 0, 0, 7, 0, 2, 0.100833 },
{ 30, 0, 0, 15, 2, 0, 0.100833 },
{ 76, 0, 0, 19, 4, 0, 0.102083 },
{ 14, 0, 0, 14, 0, 0, 0.102222 },
{ 5, 1, 1, 5, 1, 1, 0.103125 },
{ 46, 1, 1, 23, 3, 1, 0.104034 },
{ 138, 1, 0, 23, 3, 2, 0.104034 },
{ 23, 1, 0, 23, 1, 0, 0.104545 },
{ 7, 0, 0, 7, 0, 0, 0.105000 },
{ 10, 0, 1, 10, 0, 1, 0.105000 },
{ 16, 0, 1, 16, 0, 1, 0.105417 },
{ 48, 0, 0, 16, 0, 2, 0.105417 },
{ 46, 1, 0, 23, 3, 0, 0.106705 },
{ 18, 0, 0, 9, 2, 0, 0.107778 },
{ 92, 0, 1, 23, 4, 1, 0.108239 },
{ 276, 0, 0, 23, 4, 2, 0.108239 },
{ 19, 0, 0, 19, 0, 0, 0.110000 },
{ 23, 0, 1, 23, 0, 1, 0.111136 },
{ 69, 0, 0, 23, 0, 2, 0.111136 },
{ 9, 0, 0, 9, 0, 0, 0.113333 },
{ 10, 0, 0, 10, 0, 0, 0.113333 },
{ 92, 0, 0, 23, 4, 0, 0.113826 },
{ 5, 1, 0, 5, 1, 0, 0.115000 },
{ 15, 0, 0, 15, 0, 0, 0.115000 },
{ 23, 0, 0, 23, 0, 0, 0.120909 },
{ 8, 0, 1, 8, 0, 1, 0.126042 },
{ 24, 0, 0, 8, 0, 2, 0.126042 },
{ 16, 0, 0, 16, 0, 0, 0.127188 },
{ 8, 0, 0, 8, 0, 0, 0.141667 },
{ 25, 0, 1, 25, 0, 1, 0.144000 },
{ 5, 0, 1, 5, 0, 1, 0.151250 },
{ 12, 0, 0, 12, 0, 0, 0.152083 },
{ 29, 1, 1, 29, 1, 1, 0.153929 },
{ 87, 1, 0, 29, 1, 2, 0.153929 },
{ 25, 0, 0, 25, 0, 0, 0.155000 },
{ 58, 1, 1, 29, 3, 1, 0.155045 },
{ 174, 1, 0, 29, 3, 2, 0.155045 },
{ 29, 1, 0, 29, 1, 0, 0.156429 },
{ 58, 1, 0, 29, 3, 0, 0.157857 },
{ 116, 0, 1, 29, 4, 1, 0.158631 },
{ 116, 0, 0, 29, 4, 0, 0.163542 },
{ 29, 0, 1, 29, 0, 1, 0.164286 },
{ 87, 0, 0, 29, 0, 2, 0.164286 },
{ 29, 0, 0, 29, 0, 0, 0.169286 },
{ 5, 0, 0, 5, 0, 0, 0.170000 },
{ 31, 1, 1, 31, 1, 1, 0.187000 },
{ 93, 1, 0, 31, 1, 2, 0.187000 },
{ 62, 1, 1, 31, 3, 1, 0.188500 },
{ 186, 1, 0, 31, 3, 2, 0.188500 },
{ 31, 1, 0, 31, 1, 0, 0.191333 },
{ 62, 1, 0, 31, 3, 0, 0.192083 },
{ 124, 0, 1, 31, 4, 1, 0.193472 },
{ 31, 0, 1, 31, 0, 1, 0.196167 },
{ 93, 0, 0, 31, 0, 2, 0.196167 },
{ 124, 0, 0, 31, 4, 0, 0.197083 },
{ 2, 1, 1, 2, 3, 1, 0.200000 },
{ 6, 1, 0, 2, 3, 2, 0.200000 },
{ 31, 0, 0, 31, 0, 0, 0.205000 },
{ 6, 0, 0, 6, 0, 0, 0.226667 },
{ 3, 1, 0, 3, 1, 0, 0.230000 },
{ 4, 0, 1, 4, 0, 1, 0.241667 },
{ 4, 0, 0, 4, 0, 0, 0.283333 },
{ 3, 0, 0, 3, 0, 0, 0.340000 },
{ 1, 1, 1, 1, 1, 1, 0.362500 },
{ 2, 0, 1, 2, 0, 1, 0.370000 },
{ 1, 1, 0, 1, 1, 0, 0.385000 },
{ 2, 0, 0, 2, 0, 0, 0.453333 },
};

#define TORCTAB3_SIZE 103

static struct torctab_rec torctab3[TORCTAB3_SIZE] = {
{ 66, 1, 0, 11, 3, 2, 0.040406 },
{ 33, 1, 0, 11, 1, 2, 0.043688 },
{ 78, 1, 0, 13, 3, 2, 0.045391 },
{ 132, 1, 0, 11, 130, 2, 0.046938 },
{ 39, 1, 0, 13, 1, 2, 0.047656 },
{ 102, 1, 0, 17, 3, 2, 0.049922 },
{ 42, 1, 0, 14, 3, 2, 0.050000 },
{ 51, 1, 0, 17, 1, 2, 0.051680 },
{ 132, 0, 0, 11, 4, 2, 0.052188 },
{ 156, 1, 0, 13, 130, 2, 0.053958 },
{ 156, 0, 0, 13, 4, 2, 0.054818 },
{ 84, 1, 0, 14, 130, 2, 0.055000 },
{ 15, 1, 0, 15, 1, 0, 0.056719 },
{ 204, 0, 0, 17, 4, 2, 0.057227 },
{ 114, 1, 0, 19, 3, 2, 0.057500 },
{ 11, 1, 0, 11, 1, 0, 0.058000 },
{ 66, 0, 0, 11, 2, 2, 0.058000 },
{ 57, 1, 0, 19, 1, 2, 0.059062 },
{ 30, 1, 0, 15, 3, 0, 0.059063 },
{ 84, 0, 0, 14, 4, 2, 0.060677 },
{ 22, 1, 0, 11, 3, 0, 0.061750 },
{ 78, 0, 0, 13, 2, 2, 0.063542 },
{ 228, 0, 0, 19, 4, 2, 0.063889 },
{ 21, 1, 0, 7, 1, 2, 0.065000 },
{ 138, 1, 0, 23, 3, 2, 0.065028 },
{ 69, 1, 0, 23, 1, 2, 0.066903 },
{ 13, 1, 0, 13, 1, 0, 0.068750 },
{ 102, 0, 0, 17, 2, 2, 0.068906 },
{ 26, 1, 0, 13, 3, 0, 0.069583 },
{ 51, 0, 0, 17, 0, 2, 0.070312 },
{ 60, 1, 0, 15, 130, 0, 0.071094 },
{ 276, 0, 0, 23, 4, 2, 0.071236 },
{ 39, 0, 0, 13, 0, 2, 0.071250 },
{ 33, 0, 0, 11, 0, 2, 0.072750 },
{ 44, 1, 0, 11, 130, 0, 0.073500 },
{ 60, 0, 0, 15, 4, 0, 0.073828 },
{ 9, 1, 0, 9, 1, 0, 0.074097 },
{ 30, 0, 0, 15, 2, 0, 0.075625 },
{ 57, 0, 0, 19, 0, 2, 0.075625 },
{ 7, 1, 0, 7, 1, 0, 0.076667 },
{ 44, 0, 0, 11, 4, 0, 0.076667 },
{ 22, 0, 0, 11, 2, 0, 0.077333 },
{ 17, 1, 0, 17, 1, 0, 0.078750 },
{ 34, 1, 0, 17, 3, 0, 0.078750 },
{ 69, 0, 0, 23, 0, 2, 0.079943 },
{ 28, 0, 0, 14, 4, 0, 0.080556 },
{ 42, 0, 0, 14, 0, 2, 0.080833 },
{ 52, 0, 0, 13, 4, 0, 0.082292 },
{ 14, 1, 1, 14, 3, 1, 0.083333 },
{ 36, 0, 0, 18, 4, 0, 0.083391 },
{ 18, 1, 0, 9, 3, 0, 0.085174 },
{ 68, 0, 0, 17, 4, 0, 0.089583 },
{ 15, 0, 0, 15, 0, 0, 0.090938 },
{ 19, 1, 0, 19, 1, 0, 0.091389 },
{ 26, 0, 0, 13, 2, 0, 0.091667 },
{ 11, 0, 0, 11, 0, 0, 0.092000 },
{ 13, 0, 0, 13, 0, 0, 0.092500 },
{ 38, 1, 0, 19, 3, 0, 0.092778 },
{ 14, 1, 0, 7, 3, 0, 0.092917 },
{ 18, 0, 0, 9, 2, 0, 0.093704 },
{ 174, 1, 0, 29, 3, 2, 0.095826 },
{ 20, 0, 0, 10, 4, 0, 0.095833 },
{ 96, 1, 0, 16, 133, 2, 0.096562 },
{ 21, 0, 0, 21, 0, 0, 0.096875 },
{ 87, 1, 0, 29, 1, 2, 0.096964 },
{ 17, 0, 0, 17, 0, 0, 0.100000 },
{ 348, 0, 0, 29, 4, 2, 0.100558 },
{ 76, 0, 0, 19, 4, 0, 0.100926 },
{ 14, 0, 0, 14, 0, 0, 0.102222 },
{ 9, 0, 0, 9, 0, 0, 0.103889 },
{ 46, 1, 0, 23, 3, 0, 0.105114 },
{ 23, 1, 0, 23, 1, 0, 0.105682 },
{ 48, 0, 0, 16, 0, 2, 0.106406 },
{ 87, 0, 0, 29, 0, 2, 0.107545 },
{ 19, 0, 0, 19, 0, 0, 0.107778 },
{ 7, 0, 0, 7, 0, 0, 0.113333 },
{ 10, 0, 0, 10, 0, 0, 0.113333 },
{ 92, 0, 0, 23, 4, 0, 0.113636 },
{ 12, 0, 0, 12, 0, 0, 0.114062 },
{ 5, 1, 0, 5, 1, 0, 0.115000 },
{ 186, 1, 0, 31, 3, 2, 0.115344 },
{ 93, 1, 0, 31, 1, 2, 0.118125 },
{ 23, 0, 0, 23, 0, 0, 0.120909 },
{ 93, 0, 0, 31, 0, 2, 0.128250 },
{ 16, 0, 0, 16, 0, 0, 0.138750 },
{ 25, 0, 0, 25, 0, 0, 0.155000 },
{ 58, 1, 0, 29, 3, 0, 0.155714 },
{ 29, 1, 0, 29, 1, 0, 0.158214 },
{ 3, 1, 0, 3, 1, 0, 0.163125 },
{ 116, 0, 0, 29, 4, 0, 0.163690 },
{ 5, 0, 0, 5, 0, 0, 0.170000 },
{ 6, 0, 0, 6, 0, 0, 0.170000 },
{ 8, 0, 0, 8, 0, 0, 0.170000 },
{ 29, 0, 0, 29, 0, 0, 0.172857 },
{ 31, 1, 0, 31, 1, 0, 0.191333 },
{ 62, 1, 0, 31, 3, 0, 0.191750 },
{ 124, 0, 0, 31, 4, 0, 0.197917 },
{ 31, 0, 0, 31, 0, 0, 0.201667 },
{ 3, 0, 0, 3, 0, 0, 0.236250 },
{ 4, 0, 0, 4, 0, 0, 0.262500 },
{ 2, 1, 1, 2, 3, 1, 0.317187 },
{ 1, 1, 0, 1, 1, 0, 0.410000 },
{ 2, 0, 0, 2, 0, 0, 0.453333 },
};

#define TORCTAB4_SIZE 104

static struct torctab_rec torctab4[TORCTAB4_SIZE] = {
{ 66, 1, 0, 11, 3, 2, 0.041344 },
{ 33, 1, 0, 11, 1, 2, 0.042750 },
{ 78, 1, 0, 13, 3, 2, 0.045781 },
{ 39, 1, 0, 13, 1, 2, 0.046875 },
{ 264, 1, 0, 11, 131, 2, 0.049043 },
{ 42, 1, 0, 14, 3, 2, 0.050000 },
{ 102, 1, 0, 17, 3, 2, 0.050508 },
{ 51, 1, 0, 17, 1, 2, 0.051094 },
{ 528, 1, 0, 11, 132, 2, 0.052891 },
{ 132, 0, 0, 11, 4, 2, 0.052969 },
{ 168, 1, 0, 14, 131, 2, 0.053965 },
{ 156, 0, 0, 13, 4, 2, 0.054948 },
{ 336, 1, 0, 14, 132, 2, 0.056120 },
{ 15, 1, 0, 15, 1, 0, 0.056719 },
{ 66, 0, 0, 11, 2, 2, 0.057000 },
{ 114, 1, 0, 19, 3, 2, 0.057812 },
{ 11, 1, 0, 11, 1, 0, 0.058000 },
{ 204, 0, 0, 17, 4, 2, 0.058203 },
{ 57, 1, 0, 19, 1, 2, 0.058542 },
{ 84, 0, 0, 14, 4, 2, 0.059375 },
{ 30, 1, 0, 15, 3, 0, 0.061406 },
{ 22, 1, 0, 11, 3, 0, 0.063000 },
{ 78, 0, 0, 13, 2, 2, 0.063542 },
{ 138, 1, 0, 23, 3, 2, 0.064815 },
{ 21, 1, 0, 7, 1, 2, 0.065000 },
{ 228, 0, 0, 19, 4, 2, 0.065104 },
{ 69, 1, 0, 23, 1, 2, 0.066477 },
{ 13, 1, 0, 13, 1, 0, 0.068750 },
{ 102, 0, 0, 17, 2, 2, 0.068906 },
{ 51, 0, 0, 17, 0, 2, 0.069141 },
{ 26, 1, 0, 13, 3, 0, 0.070625 },
{ 276, 0, 0, 23, 4, 2, 0.071236 },
{ 39, 0, 0, 13, 0, 2, 0.071250 },
{ 33, 0, 0, 11, 0, 2, 0.072750 },
{ 60, 0, 0, 15, 4, 0, 0.073828 },
{ 9, 1, 0, 9, 1, 0, 0.074097 },
{ 57, 0, 0, 19, 0, 2, 0.074583 },
{ 30, 0, 0, 15, 2, 0, 0.075625 },
{ 44, 0, 0, 11, 4, 0, 0.076667 },
{ 17, 1, 0, 17, 1, 0, 0.077188 },
{ 22, 0, 0, 11, 2, 0, 0.077333 },
{ 69, 0, 0, 23, 0, 2, 0.080114 },
{ 36, 0, 0, 18, 4, 0, 0.080208 },
{ 34, 1, 0, 17, 3, 0, 0.080312 },
{ 28, 0, 0, 14, 4, 0, 0.080556 },
{ 7, 1, 0, 7, 1, 0, 0.080833 },
{ 52, 0, 0, 13, 4, 0, 0.082292 },
{ 42, 0, 0, 14, 0, 2, 0.082500 },
{ 14, 1, 1, 14, 3, 1, 0.083333 },
{ 15, 0, 0, 15, 0, 0, 0.086250 },
{ 18, 1, 0, 9, 3, 0, 0.087083 },
{ 26, 0, 0, 13, 2, 0, 0.088889 },
{ 68, 0, 0, 17, 4, 0, 0.089583 },
{ 48, 1, 0, 16, 132, 2, 0.089844 },
{ 19, 1, 0, 19, 1, 0, 0.091389 },
{ 11, 0, 0, 11, 0, 0, 0.092000 },
{ 38, 1, 0, 19, 3, 0, 0.092917 },
{ 18, 0, 0, 9, 2, 0, 0.093704 },
{ 14, 1, 0, 7, 3, 0, 0.095000 },
{ 96, 1, 0, 16, 133, 2, 0.095391 },
{ 20, 0, 0, 10, 4, 0, 0.095833 },
{ 174, 1, 0, 29, 3, 2, 0.095893 },
{ 13, 0, 0, 13, 0, 0, 0.096667 },
{ 17, 0, 0, 17, 0, 0, 0.096875 },
{ 21, 0, 0, 21, 0, 0, 0.096875 },
{ 87, 1, 0, 29, 1, 2, 0.097366 },
{ 48, 0, 0, 16, 0, 2, 0.097969 },
{ 24, 1, 0, 12, 131, 0, 0.098789 },
{ 76, 0, 0, 19, 4, 0, 0.100926 },
{ 348, 0, 0, 29, 4, 2, 0.101116 },
{ 14, 0, 0, 14, 0, 0, 0.102222 },
{ 9, 0, 0, 9, 0, 0, 0.103889 },
{ 23, 1, 0, 23, 1, 0, 0.104545 },
{ 46, 1, 0, 23, 3, 0, 0.105682 },
{ 12, 0, 0, 12, 0, 0, 0.106250 },
{ 87, 0, 0, 29, 0, 2, 0.108348 },
{ 19, 0, 0, 19, 0, 0, 0.110000 },
{ 7, 0, 0, 7, 0, 0, 0.113333 },
{ 10, 0, 0, 10, 0, 0, 0.113333 },
{ 92, 0, 0, 23, 4, 0, 0.113826 },
{ 186, 1, 0, 31, 3, 2, 0.116094 },
{ 93, 1, 0, 31, 1, 2, 0.116813 },
{ 23, 0, 0, 23, 0, 0, 0.120909 },
{ 5, 1, 0, 5, 1, 0, 0.121250 },
{ 93, 0, 0, 31, 0, 2, 0.127625 },
{ 16, 0, 0, 16, 0, 0, 0.132917 },
{ 8, 0, 0, 8, 0, 0, 0.141667 },
{ 25, 0, 0, 25, 0, 0, 0.152500 },
{ 58, 1, 0, 29, 3, 0, 0.157946 },
{ 29, 1, 0, 29, 1, 0, 0.158393 },
{ 116, 0, 0, 29, 4, 0, 0.162946 },
{ 3, 1, 0, 3, 1, 0, 0.163125 },
{ 29, 0, 0, 29, 0, 0, 0.169286 },
{ 5, 0, 0, 5, 0, 0, 0.170000 },
{ 6, 0, 0, 6, 0, 0, 0.170000 },
{ 31, 1, 0, 31, 1, 0, 0.191333 },
{ 62, 1, 0, 31, 3, 0, 0.192083 },
{ 124, 0, 0, 31, 4, 0, 0.196389 },
{ 31, 0, 0, 31, 0, 0, 0.205000 },
{ 3, 0, 0, 3, 0, 0, 0.255000 },
{ 4, 0, 0, 4, 0, 0, 0.262500 },
{ 2, 1, 1, 2, 3, 1, 0.325000 },
{ 1, 1, 0, 1, 1, 0, 0.385000 },
{ 2, 0, 0, 2, 0, 0, 0.420000 },
};

#endif