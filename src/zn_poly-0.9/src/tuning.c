/*
   NOTE: do not edit this file! It is auto-generated by the "tune" program.
   (Run "make tune" and then "./tune > tuning.c" to regenerate it.)
*/

/*
   tuning.c:  global tuning values

   Copyright (C) 2007, 2008, David Harvey

   This file is part of the zn_poly library (version 0.9).

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 2 of the License, or
   (at your option) version 3 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#include "zn_poly_internal.h"

size_t ZNP_mpn_smp_kara_thresh = 42;
size_t ZNP_mpn_mulmid_fallback_thresh = 7863;

tuning_info_t tuning_info[] = 
{
   {  // bits = 0
   },
   {  // bits = 1
   },
   {  // bits = 2
        132,   // KS1 -> KS2 multiplication threshold
       1127,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
        141,   // KS1 -> KS2 squaring threshold
       1053,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
        132,   // KS1 -> KS2 middle product threshold
       1053,   // KS2 -> KS4 middle product threshold
      21569,   // KS4 -> FFT middle product threshold
         13,   // nussbaumer multiplication threshold
         12    // nussbaumer squaring threshold
   },
   {  // bits = 3
        132,   // KS1 -> KS2 multiplication threshold
       2755,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
        132,   // KS1 -> KS2 squaring threshold
       4119,   // KS2 -> KS4 squaring threshold
      24613,   // KS4 -> FFT squaring threshold
        132,   // KS1 -> KS2 middle product threshold
        963,   // KS2 -> KS4 middle product threshold
      17119,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         12    // nussbaumer squaring threshold
   },
   {  // bits = 4
         80,   // KS1 -> KS2 multiplication threshold
       1053,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         94,   // KS1 -> KS2 squaring threshold
       1053,   // KS2 -> KS4 squaring threshold
      28087,   // KS4 -> FFT squaring threshold
         78,   // KS1 -> KS2 middle product threshold
       1053,   // KS2 -> KS4 middle product threshold
      12720,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 5
         86,   // KS1 -> KS2 multiplication threshold
       1077,   // KS2 -> KS4 multiplication threshold
      32051,   // KS4 -> FFT multiplication threshold
         94,   // KS1 -> KS2 squaring threshold
       1205,   // KS2 -> KS4 squaring threshold
      18901,   // KS4 -> FFT squaring threshold
         78,   // KS1 -> KS2 middle product threshold
        482,   // KS2 -> KS4 middle product threshold
      14044,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 6
         78,   // KS1 -> KS2 multiplication threshold
        985,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
        108,   // KS1 -> KS2 squaring threshold
        985,   // KS2 -> KS4 squaring threshold
      20868,   // KS4 -> FFT squaring threshold
         70,   // KS1 -> KS2 middle product threshold
        674,   // KS2 -> KS4 middle product threshold
      10785,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 7
         70,   // KS1 -> KS2 multiplication threshold
        412,   // KS2 -> KS4 multiplication threshold
      20868,   // KS4 -> FFT multiplication threshold
         86,   // KS1 -> KS2 squaring threshold
        493,   // KS2 -> KS4 squaring threshold
      17119,   // KS4 -> FFT squaring threshold
         66,   // KS1 -> KS2 middle product threshold
        282,   // KS2 -> KS4 middle product threshold
      10785,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 8
         56,   // KS1 -> KS2 multiplication threshold
        385,   // KS2 -> KS4 multiplication threshold
      20868,   // KS4 -> FFT multiplication threshold
         67,   // KS1 -> KS2 squaring threshold
        482,   // KS2 -> KS4 squaring threshold
      15505,   // KS4 -> FFT squaring threshold
         61,   // KS1 -> KS2 middle product threshold
        288,   // KS2 -> KS4 middle product threshold
       7753,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 9
         57,   // KS1 -> KS2 multiplication threshold
        264,   // KS2 -> KS4 multiplication threshold
      17119,   // KS4 -> FFT multiplication threshold
         70,   // KS1 -> KS2 squaring threshold
        264,   // KS2 -> KS4 squaring threshold
      14044,   // KS4 -> FFT squaring threshold
         57,   // KS1 -> KS2 middle product threshold
        247,   // KS2 -> KS4 middle product threshold
       8560,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 10
         62,   // KS1 -> KS2 multiplication threshold
        173,   // KS2 -> KS4 multiplication threshold
      15505,   // KS4 -> FFT multiplication threshold
         75,   // KS1 -> KS2 squaring threshold
        241,   // KS2 -> KS4 squaring threshold
      12307,   // KS4 -> FFT squaring threshold
         50,   // KS1 -> KS2 middle product threshold
        173,   // KS2 -> KS4 middle product threshold
       6154,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 11
         47,   // KS1 -> KS2 multiplication threshold
        158,   // KS2 -> KS4 multiplication threshold
      15505,   // KS4 -> FFT multiplication threshold
         61,   // KS1 -> KS2 squaring threshold
        216,   // KS2 -> KS4 squaring threshold
      14044,   // KS4 -> FFT squaring threshold
         50,   // KS1 -> KS2 middle product threshold
        161,   // KS2 -> KS4 middle product threshold
       7022,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 12
         43,   // KS1 -> KS2 multiplication threshold
        144,   // KS2 -> KS4 multiplication threshold
      12307,   // KS4 -> FFT multiplication threshold
         62,   // KS1 -> KS2 squaring threshold
        189,   // KS2 -> KS4 squaring threshold
       8560,   // KS4 -> FFT squaring threshold
         43,   // KS1 -> KS2 middle product threshold
        151,   // KS2 -> KS4 middle product threshold
       5393,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 13
         43,   // KS1 -> KS2 multiplication threshold
        144,   // KS2 -> KS4 multiplication threshold
      14044,   // KS4 -> FFT multiplication threshold
         51,   // KS1 -> KS2 squaring threshold
        189,   // KS2 -> KS4 squaring threshold
      14044,   // KS4 -> FFT squaring threshold
         43,   // KS1 -> KS2 middle product threshold
        141,   // KS2 -> KS4 middle product threshold
       6154,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 14
         48,   // KS1 -> KS2 multiplication threshold
        101,   // KS2 -> KS4 multiplication threshold
      10785,   // KS4 -> FFT multiplication threshold
         50,   // KS1 -> KS2 squaring threshold
        158,   // KS2 -> KS4 squaring threshold
       7753,   // KS4 -> FFT squaring threshold
         39,   // KS1 -> KS2 middle product threshold
        101,   // KS2 -> KS4 middle product threshold
       4726,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 15
         38,   // KS1 -> KS2 multiplication threshold
        173,   // KS2 -> KS4 multiplication threshold
      12720,   // KS4 -> FFT multiplication threshold
         43,   // KS1 -> KS2 squaring threshold
        189,   // KS2 -> KS4 squaring threshold
       9451,   // KS4 -> FFT squaring threshold
         38,   // KS1 -> KS2 middle product threshold
        132,   // KS2 -> KS4 middle product threshold
       4280,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 16
         35,   // KS1 -> KS2 multiplication threshold
        124,   // KS2 -> KS4 multiplication threshold
       8560,   // KS4 -> FFT multiplication threshold
         47,   // KS1 -> KS2 squaring threshold
        158,   // KS2 -> KS4 squaring threshold
       7022,   // KS4 -> FFT squaring threshold
         35,   // KS1 -> KS2 middle product threshold
        116,   // KS2 -> KS4 middle product threshold
       4726,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 17
         33,   // KS1 -> KS2 multiplication threshold
        102,   // KS2 -> KS4 multiplication threshold
       9451,   // KS4 -> FFT multiplication threshold
         43,   // KS1 -> KS2 squaring threshold
        132,   // KS2 -> KS4 squaring threshold
       8560,   // KS4 -> FFT squaring threshold
         33,   // KS1 -> KS2 middle product threshold
        116,   // KS2 -> KS4 middle product threshold
       4280,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 18
         31,   // KS1 -> KS2 multiplication threshold
         78,   // KS2 -> KS4 multiplication threshold
       7022,   // KS4 -> FFT multiplication threshold
         43,   // KS1 -> KS2 squaring threshold
        112,   // KS2 -> KS4 squaring threshold
       5393,   // KS4 -> FFT squaring threshold
         31,   // KS1 -> KS2 middle product threshold
         94,   // KS2 -> KS4 middle product threshold
       3877,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 19
         33,   // KS1 -> KS2 multiplication threshold
         78,   // KS2 -> KS4 multiplication threshold
       8560,   // KS4 -> FFT multiplication threshold
         43,   // KS1 -> KS2 squaring threshold
        108,   // KS2 -> KS4 squaring threshold
       7022,   // KS4 -> FFT squaring threshold
         33,   // KS1 -> KS2 middle product threshold
         86,   // KS2 -> KS4 middle product threshold
       3511,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 20
         29,   // KS1 -> KS2 multiplication threshold
         70,   // KS2 -> KS4 multiplication threshold
       5393,   // KS4 -> FFT multiplication threshold
         31,   // KS1 -> KS2 squaring threshold
         94,   // KS2 -> KS4 squaring threshold
       4726,   // KS4 -> FFT squaring threshold
         29,   // KS1 -> KS2 middle product threshold
         78,   // KS2 -> KS4 middle product threshold
       3511,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 21
         27,   // KS1 -> KS2 multiplication threshold
         72,   // KS2 -> KS4 multiplication threshold
       7022,   // KS4 -> FFT multiplication threshold
         35,   // KS1 -> KS2 squaring threshold
         95,   // KS2 -> KS4 squaring threshold
       6154,   // KS4 -> FFT squaring threshold
         27,   // KS1 -> KS2 middle product threshold
         86,   // KS2 -> KS4 middle product threshold
       3180,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 22
         31,   // KS1 -> KS2 multiplication threshold
         66,   // KS2 -> KS4 multiplication threshold
       5217,   // KS4 -> FFT multiplication threshold
         35,   // KS1 -> KS2 squaring threshold
         94,   // KS2 -> KS4 squaring threshold
       4726,   // KS4 -> FFT squaring threshold
         27,   // KS1 -> KS2 middle product threshold
         75,   // KS2 -> KS4 middle product threshold
       3180,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 23
         29,   // KS1 -> KS2 multiplication threshold
         80,   // KS2 -> KS4 multiplication threshold
       7022,   // KS4 -> FFT multiplication threshold
         35,   // KS1 -> KS2 squaring threshold
         94,   // KS2 -> KS4 squaring threshold
       5760,   // KS4 -> FFT squaring threshold
         25,   // KS1 -> KS2 middle product threshold
         80,   // KS2 -> KS4 middle product threshold
       3077,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 24
         29,   // KS1 -> KS2 multiplication threshold
         66,   // KS2 -> KS4 multiplication threshold
       5760,   // KS4 -> FFT multiplication threshold
         35,   // KS1 -> KS2 squaring threshold
         86,   // KS2 -> KS4 squaring threshold
       4726,   // KS4 -> FFT squaring threshold
         29,   // KS1 -> KS2 middle product threshold
         75,   // KS2 -> KS4 middle product threshold
       3077,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 25
         25,   // KS1 -> KS2 multiplication threshold
         66,   // KS2 -> KS4 multiplication threshold
       6154,   // KS4 -> FFT multiplication threshold
         33,   // KS1 -> KS2 squaring threshold
         78,   // KS2 -> KS4 squaring threshold
       4280,   // KS4 -> FFT squaring threshold
         24,   // KS1 -> KS2 middle product threshold
         66,   // KS2 -> KS4 middle product threshold
       2697,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 26
         29,   // KS1 -> KS2 multiplication threshold
         57,   // KS2 -> KS4 multiplication threshold
       4280,   // KS4 -> FFT multiplication threshold
         33,   // KS1 -> KS2 squaring threshold
         75,   // KS2 -> KS4 squaring threshold
       3877,   // KS4 -> FFT squaring threshold
         27,   // KS1 -> KS2 middle product threshold
         66,   // KS2 -> KS4 middle product threshold
       2697,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 27
         25,   // KS1 -> KS2 multiplication threshold
         54,   // KS2 -> KS4 multiplication threshold
       3511,   // KS4 -> FFT multiplication threshold
         31,   // KS1 -> KS2 squaring threshold
         75,   // KS2 -> KS4 squaring threshold
       3077,   // KS4 -> FFT squaring threshold
         21,   // KS1 -> KS2 middle product threshold
         61,   // KS2 -> KS4 middle product threshold
       2140,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 28
         27,   // KS1 -> KS2 multiplication threshold
         43,   // KS2 -> KS4 multiplication threshold
       3511,   // KS4 -> FFT multiplication threshold
         31,   // KS1 -> KS2 squaring threshold
         70,   // KS2 -> KS4 squaring threshold
       3077,   // KS4 -> FFT squaring threshold
         25,   // KS1 -> KS2 middle product threshold
         57,   // KS2 -> KS4 middle product threshold
       2140,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 29
         25,   // KS1 -> KS2 multiplication threshold
         51,   // KS2 -> KS4 multiplication threshold
       4280,   // KS4 -> FFT multiplication threshold
         29,   // KS1 -> KS2 squaring threshold
         70,   // KS2 -> KS4 squaring threshold
       3877,   // KS4 -> FFT squaring threshold
         21,   // KS1 -> KS2 middle product threshold
         61,   // KS2 -> KS4 middle product threshold
       2140,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 30
         21,   // KS1 -> KS2 multiplication threshold
         47,   // KS2 -> KS4 multiplication threshold
       3877,   // KS4 -> FFT multiplication threshold
         30,   // KS1 -> KS2 squaring threshold
         66,   // KS2 -> KS4 squaring threshold
       3511,   // KS4 -> FFT squaring threshold
         21,   // KS1 -> KS2 middle product threshold
         61,   // KS2 -> KS4 middle product threshold
       2363,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 31
         24,   // KS1 -> KS2 multiplication threshold
         39,   // KS2 -> KS4 multiplication threshold
       4280,   // KS4 -> FFT multiplication threshold
         29,   // KS1 -> KS2 squaring threshold
         61,   // KS2 -> KS4 squaring threshold
       3511,   // KS4 -> FFT squaring threshold
         23,   // KS1 -> KS2 middle product threshold
         51,   // KS2 -> KS4 middle product threshold
       2140,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 32
         24,   // KS1 -> KS2 multiplication threshold
         39,   // KS2 -> KS4 multiplication threshold
       3877,   // KS4 -> FFT multiplication threshold
         27,   // KS1 -> KS2 squaring threshold
         66,   // KS2 -> KS4 squaring threshold
       3511,   // KS4 -> FFT squaring threshold
         21,   // KS1 -> KS2 middle product threshold
         51,   // KS2 -> KS4 middle product threshold
       2140,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 33
         21,   // KS1 -> KS2 multiplication threshold
         33,   // KS2 -> KS4 multiplication threshold
       3511,   // KS4 -> FFT multiplication threshold
         27,   // KS1 -> KS2 squaring threshold
         57,   // KS2 -> KS4 squaring threshold
       3180,   // KS4 -> FFT squaring threshold
         19,   // KS1 -> KS2 middle product threshold
         50,   // KS2 -> KS4 middle product threshold
       1939,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 34
         21,   // KS1 -> KS2 multiplication threshold
         31,   // KS2 -> KS4 multiplication threshold
       3511,   // KS4 -> FFT multiplication threshold
         27,   // KS1 -> KS2 squaring threshold
         47,   // KS2 -> KS4 squaring threshold
       3180,   // KS4 -> FFT squaring threshold
         21,   // KS1 -> KS2 middle product threshold
         43,   // KS2 -> KS4 middle product threshold
       1939,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 35
         21,   // KS1 -> KS2 multiplication threshold
         31,   // KS2 -> KS4 multiplication threshold
       3511,   // KS4 -> FFT multiplication threshold
         27,   // KS1 -> KS2 squaring threshold
         39,   // KS2 -> KS4 squaring threshold
       3077,   // KS4 -> FFT squaring threshold
         19,   // KS1 -> KS2 middle product threshold
         40,   // KS2 -> KS4 middle product threshold
       1539,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 36
         21,   // KS1 -> KS2 multiplication threshold
         27,   // KS2 -> KS4 multiplication threshold
       3511,   // KS4 -> FFT multiplication threshold
         25,   // KS1 -> KS2 squaring threshold
         41,   // KS2 -> KS4 squaring threshold
       3077,   // KS4 -> FFT squaring threshold
         21,   // KS1 -> KS2 middle product threshold
         38,   // KS2 -> KS4 middle product threshold
       1756,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 37
         17,   // KS1 -> KS2 multiplication threshold
         30,   // KS2 -> KS4 multiplication threshold
       3511,   // KS4 -> FFT multiplication threshold
         24,   // KS1 -> KS2 squaring threshold
         43,   // KS2 -> KS4 squaring threshold
       3077,   // KS4 -> FFT squaring threshold
         17,   // KS1 -> KS2 middle product threshold
         40,   // KS2 -> KS4 middle product threshold
       1539,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 38
         19,   // KS1 -> KS2 multiplication threshold
         25,   // KS2 -> KS4 multiplication threshold
       3511,   // KS4 -> FFT multiplication threshold
         27,   // KS1 -> KS2 squaring threshold
         24,   // KS2 -> KS4 squaring threshold
       3077,   // KS4 -> FFT squaring threshold
         19,   // KS1 -> KS2 middle product threshold
         35,   // KS2 -> KS4 middle product threshold
       1590,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 39
         19,   // KS1 -> KS2 multiplication threshold
         27,   // KS2 -> KS4 multiplication threshold
       3511,   // KS4 -> FFT multiplication threshold
         23,   // KS1 -> KS2 squaring threshold
         28,   // KS2 -> KS4 squaring threshold
       2697,   // KS4 -> FFT squaring threshold
         17,   // KS1 -> KS2 middle product threshold
         35,   // KS2 -> KS4 middle product threshold
       1349,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 40
         19,   // KS1 -> KS2 multiplication threshold
         27,   // KS2 -> KS4 multiplication threshold
       3511,   // KS4 -> FFT multiplication threshold
         23,   // KS1 -> KS2 squaring threshold
         37,   // KS2 -> KS4 squaring threshold
       3077,   // KS4 -> FFT squaring threshold
         19,   // KS1 -> KS2 middle product threshold
         39,   // KS2 -> KS4 middle product threshold
       1539,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 41
         17,   // KS1 -> KS2 multiplication threshold
         25,   // KS2 -> KS4 multiplication threshold
       3077,   // KS4 -> FFT multiplication threshold
         21,   // KS1 -> KS2 squaring threshold
         36,   // KS2 -> KS4 squaring threshold
       2363,   // KS4 -> FFT squaring threshold
         19,   // KS1 -> KS2 middle product threshold
         33,   // KS2 -> KS4 middle product threshold
       1349,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 42
         17,   // KS1 -> KS2 multiplication threshold
         24,   // KS2 -> KS4 multiplication threshold
       3180,   // KS4 -> FFT multiplication threshold
         21,   // KS1 -> KS2 squaring threshold
         27,   // KS2 -> KS4 squaring threshold
       2363,   // KS4 -> FFT squaring threshold
         17,   // KS1 -> KS2 middle product threshold
         33,   // KS2 -> KS4 middle product threshold
       1440,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 43
         16,   // KS1 -> KS2 multiplication threshold
         19,   // KS2 -> KS4 multiplication threshold
       2697,   // KS4 -> FFT multiplication threshold
         21,   // KS1 -> KS2 squaring threshold
         21,   // KS2 -> KS4 squaring threshold
       2363,   // KS4 -> FFT squaring threshold
         14,   // KS1 -> KS2 middle product threshold
         31,   // KS2 -> KS4 middle product threshold
       1305,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 44
         17,   // KS1 -> KS2 multiplication threshold
         24,   // KS2 -> KS4 multiplication threshold
       3077,   // KS4 -> FFT multiplication threshold
         19,   // KS1 -> KS2 squaring threshold
         36,   // KS2 -> KS4 squaring threshold
       2363,   // KS4 -> FFT squaring threshold
         17,   // KS1 -> KS2 middle product threshold
         29,   // KS2 -> KS4 middle product threshold
       1349,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 45
         16,   // KS1 -> KS2 multiplication threshold
         21,   // KS2 -> KS4 multiplication threshold
       2697,   // KS4 -> FFT multiplication threshold
         19,   // KS1 -> KS2 squaring threshold
         27,   // KS2 -> KS4 squaring threshold
       2071,   // KS4 -> FFT squaring threshold
         14,   // KS1 -> KS2 middle product threshold
         29,   // KS2 -> KS4 middle product threshold
       1182,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 46
         17,   // KS1 -> KS2 multiplication threshold
         16,   // KS2 -> KS4 multiplication threshold
       3077,   // KS4 -> FFT multiplication threshold
         21,   // KS1 -> KS2 squaring threshold
         27,   // KS2 -> KS4 squaring threshold
       2363,   // KS4 -> FFT squaring threshold
         16,   // KS1 -> KS2 middle product threshold
         31,   // KS2 -> KS4 middle product threshold
       1305,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 47
         16,   // KS1 -> KS2 multiplication threshold
         19,   // KS2 -> KS4 multiplication threshold
       2697,   // KS4 -> FFT multiplication threshold
         21,   // KS1 -> KS2 squaring threshold
         25,   // KS2 -> KS4 squaring threshold
       2071,   // KS4 -> FFT squaring threshold
         16,   // KS1 -> KS2 middle product threshold
         25,   // KS2 -> KS4 middle product threshold
       1305,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 48
         17,   // KS1 -> KS2 multiplication threshold
         14,   // KS2 -> KS4 multiplication threshold
       2697,   // KS4 -> FFT multiplication threshold
         19,   // KS1 -> KS2 squaring threshold
         23,   // KS2 -> KS4 squaring threshold
       2071,   // KS4 -> FFT squaring threshold
         16,   // KS1 -> KS2 middle product threshold
         29,   // KS2 -> KS4 middle product threshold
       1349,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 49
         14,   // KS1 -> KS2 multiplication threshold
         15,   // KS2 -> KS4 multiplication threshold
       2697,   // KS4 -> FFT multiplication threshold
         19,   // KS1 -> KS2 squaring threshold
         21,   // KS2 -> KS4 squaring threshold
       2071,   // KS4 -> FFT squaring threshold
         16,   // KS1 -> KS2 middle product threshold
         27,   // KS2 -> KS4 middle product threshold
       1182,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 50
         14,   // KS1 -> KS2 multiplication threshold
         16,   // KS2 -> KS4 multiplication threshold
       2697,   // KS4 -> FFT multiplication threshold
         19,   // KS1 -> KS2 squaring threshold
         33,   // KS2 -> KS4 squaring threshold
       2071,   // KS4 -> FFT squaring threshold
         14,   // KS1 -> KS2 middle product threshold
         27,   // KS2 -> KS4 middle product threshold
       1305,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 51
         14,   // KS1 -> KS2 multiplication threshold
         17,   // KS2 -> KS4 multiplication threshold
       2363,   // KS4 -> FFT multiplication threshold
         19,   // KS1 -> KS2 squaring threshold
         27,   // KS2 -> KS4 squaring threshold
       1756,   // KS4 -> FFT squaring threshold
         14,   // KS1 -> KS2 middle product threshold
         25,   // KS2 -> KS4 middle product threshold
       1182,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 52
         14,   // KS1 -> KS2 multiplication threshold
         17,   // KS2 -> KS4 multiplication threshold
       2363,   // KS4 -> FFT multiplication threshold
         19,   // KS1 -> KS2 squaring threshold
         24,   // KS2 -> KS4 squaring threshold
       1756,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         27,   // KS2 -> KS4 middle product threshold
       1070,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 53
         13,   // KS1 -> KS2 multiplication threshold
         14,   // KS2 -> KS4 multiplication threshold
       1876,   // KS4 -> FFT multiplication threshold
         16,   // KS1 -> KS2 squaring threshold
         19,   // KS2 -> KS4 squaring threshold
       1590,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         25,   // KS2 -> KS4 middle product threshold
        970,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 54
         14,   // KS1 -> KS2 multiplication threshold
         19,   // KS2 -> KS4 multiplication threshold
       2363,   // KS4 -> FFT multiplication threshold
         17,   // KS1 -> KS2 squaring threshold
         19,   // KS2 -> KS4 squaring threshold
       1876,   // KS4 -> FFT squaring threshold
         14,   // KS1 -> KS2 middle product threshold
         23,   // KS2 -> KS4 middle product threshold
       1182,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 55
         13,   // KS1 -> KS2 multiplication threshold
         12,   // KS2 -> KS4 multiplication threshold
       2071,   // KS4 -> FFT multiplication threshold
         19,   // KS1 -> KS2 squaring threshold
         13,   // KS2 -> KS4 squaring threshold
       1756,   // KS4 -> FFT squaring threshold
         14,   // KS1 -> KS2 middle product threshold
         23,   // KS2 -> KS4 middle product threshold
       1182,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 56
         13,   // KS1 -> KS2 multiplication threshold
         10,   // KS2 -> KS4 multiplication threshold
       2363,   // KS4 -> FFT multiplication threshold
         17,   // KS1 -> KS2 squaring threshold
         13,   // KS2 -> KS4 squaring threshold
       2004,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         21,   // KS2 -> KS4 middle product threshold
       1070,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 57
         13,   // KS1 -> KS2 multiplication threshold
         15,   // KS2 -> KS4 multiplication threshold
       1876,   // KS4 -> FFT multiplication threshold
         16,   // KS1 -> KS2 squaring threshold
         19,   // KS2 -> KS4 squaring threshold
       1756,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         23,   // KS2 -> KS4 middle product threshold
        970,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 58
         13,   // KS1 -> KS2 multiplication threshold
         10,   // KS2 -> KS4 multiplication threshold
       1876,   // KS4 -> FFT multiplication threshold
         16,   // KS1 -> KS2 squaring threshold
         19,   // KS2 -> KS4 squaring threshold
       1756,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         23,   // KS2 -> KS4 middle product threshold
        970,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 59
         13,   // KS1 -> KS2 multiplication threshold
         13,   // KS2 -> KS4 multiplication threshold
       1539,   // KS4 -> FFT multiplication threshold
         17,   // KS1 -> KS2 squaring threshold
         17,   // KS2 -> KS4 squaring threshold
       1305,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         21,   // KS2 -> KS4 middle product threshold
        970,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 60
         13,   // KS1 -> KS2 multiplication threshold
         13,   // KS2 -> KS4 multiplication threshold
       1539,   // KS4 -> FFT multiplication threshold
         16,   // KS1 -> KS2 squaring threshold
         17,   // KS2 -> KS4 squaring threshold
       1440,   // KS4 -> FFT squaring threshold
         12,   // KS1 -> KS2 middle product threshold
         21,   // KS2 -> KS4 middle product threshold
        878,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 61
         13,   // KS1 -> KS2 multiplication threshold
         12,   // KS2 -> KS4 multiplication threshold
       1756,   // KS4 -> FFT multiplication threshold
         14,   // KS1 -> KS2 squaring threshold
         16,   // KS2 -> KS4 squaring threshold
       1590,   // KS4 -> FFT squaring threshold
         12,   // KS1 -> KS2 middle product threshold
         21,   // KS2 -> KS4 middle product threshold
        878,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 62
         13,   // KS1 -> KS2 multiplication threshold
         19,   // KS2 -> KS4 multiplication threshold
       2363,   // KS4 -> FFT multiplication threshold
         16,   // KS1 -> KS2 squaring threshold
         31,   // KS2 -> KS4 squaring threshold
       2363,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         24,   // KS2 -> KS4 middle product threshold
       1182,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 63
         13,   // KS1 -> KS2 multiplication threshold
         19,   // KS2 -> KS4 multiplication threshold
       2363,   // KS4 -> FFT multiplication threshold
         16,   // KS1 -> KS2 squaring threshold
         35,   // KS2 -> KS4 squaring threshold
       2140,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         25,   // KS2 -> KS4 middle product threshold
       1070,   // KS4 -> FFT middle product threshold
          8,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 64
         13,   // KS1 -> KS2 multiplication threshold
         23,   // KS2 -> KS4 multiplication threshold
       4280,   // KS4 -> FFT multiplication threshold
         16,   // KS1 -> KS2 squaring threshold
         33,   // KS2 -> KS4 squaring threshold
       3877,   // KS4 -> FFT squaring threshold
         12,   // KS1 -> KS2 middle product threshold
         23,   // KS2 -> KS4 middle product threshold
       1756,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
};

// end of file ****************************************************************
