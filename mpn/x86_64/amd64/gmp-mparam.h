/* AMD 64 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 2000, 2001, 2002, 2003, 2004, 2005, 2006 Free
Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
MA 02110-1301, USA. */

#define BITS_PER_MP_LIMB 64
#define BYTES_PER_MP_LIMB 8

/* 
   Generated by tuneup.c, 2008-09-11, gcc 4.1 
   Opteron 1.8GHz (sage.math) 
	CPU freq 1804.11 MHz
*/

#define MUL_KARATSUBA_THRESHOLD          29
#define MUL_TOOM3_THRESHOLD             137

#define SQR_BASECASE_THRESHOLD            0  /* always */
#define SQR_KARATSUBA_THRESHOLD          62
#define SQR_TOOM3_THRESHOLD             186

#define MULLOW_BASECASE_THRESHOLD         0  /* always */
#define MULLOW_DC_THRESHOLD              84
#define MULLOW_MUL_N_THRESHOLD          692

#define DIV_SB_PREINV_THRESHOLD           0  /* always */
#define DIV_DC_THRESHOLD                 95
#define POWM_THRESHOLD                  150

#define GCD_ACCEL_THRESHOLD               3
#define GCDEXT_THRESHOLD                  0  /* always */
#define JACOBI_BASE_METHOD                1

#define DIVREM_1_NORM_THRESHOLD           0  /* always */
#define DIVREM_1_UNNORM_THRESHOLD         0  /* always */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1
#define USE_PREINV_MOD_1                  1
#define DIVREM_2_THRESHOLD                0  /* always */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always */

#define GET_STR_DC_THRESHOLD             21
#define GET_STR_PRECOMPUTE_THRESHOLD     25
#define SET_STR_THRESHOLD              8540

#define MUL_FFT_TABLE  { 656, 1376, 2880, 5888, 15360, 45056, 180224, 327680, 1310720, 5242880, 20971520, 0 }
#define MUL_FFT_MODF_THRESHOLD          616
#define MUL_FFT_THRESHOLD              4992

#define SQR_FFT_TABLE  { 656, 1376, 2880, 5888, 15360, 53248, 114688, 327680, 1310720, 5242880, 12582912, 0 }
#define SQR_FFT_MODF_THRESHOLD          672
#define SQR_FFT_THRESHOLD              4992

