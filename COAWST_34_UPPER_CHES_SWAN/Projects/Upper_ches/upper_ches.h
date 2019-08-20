/*
** svn $Id: inlet_test.h 838 2008-11-17 04:22:18Z jcwarner $
*******************************************************************************
** Copyright (c) 2002-2008 The ROMS/TOMS Group                               **
**   Licensed under a MIT/X style license                                    **
**   See License_ROMS.txt                                                    **
*******************************************************************************
**
** Options for Vegetation Test Case, ROMS only.
**
** Application flag:   VEG_TEST
** Input script:       ocean_upper_ches.in
**                     vegetation.in
**                     sediment_upper_ches.in
*/

#define SWAN_MODEL 
/*
#define MCT_LIB 
#define ROMS_MODEL

#define UV_VIS2
#define MIX_S_UV
#define MASKING
*/
/*#undef WET_DRY*/
/*
#define UV_ADV
*/
/*#define UV_COR*/
/*
#define TS_MPDATA
#define DJ_GRADPS
#define SOLVE3D
#define SPLINES_VVISC
#define SPLINES_VDIFF

#define WEC_VF
*/
/*#undef WEC_MELLOR*/
/*
#define BOTTOM_STREAMING
#define WDISS_WAVEMOD 
*/
/*from SWAN*/
/*#undef WDISS_CHURTHOR*/
/*
#define UV_KIRBY

#undef ANA_INITIAL
#define ANA_FSOBC
#define ANA_M2OBC
*/
/* #define ANA_WWAVE*/
/*#define ANA_TOBC*/
/*#define ANA_M3OBC*/
/*#undef ANA_PSOURCE*/

/* define only one of the following */
/*
#undef UV_LOGDRAG
*/
/*#undef BBL_MODEL*/
/*#undef SG_BBL*/
/*
#define SSW_BBL
#ifdef SSW_BBL
# define SSW_CALC_ZNOT
#endif

#define VEGETATION 
# ifdef VEGETATION 
#  undef ANA_VEGETATION 
#  define VEG_DRAG
#  ifdef VEG_DRAG
#   define VEG_FLEX
#   define VEG_TURB
#  endif
#  define VEG_SWAN_COUPLING
#  ifdef VEG_SWAN_COUPLING
#   define VEG_STREAMING ! dependence to WEC_VF/BOTTOM_STREAMING
#  endif
# undef MARSH_WAVE_THRUST
# endif

#ifdef SOLVE3D
# define GLS_MIXING
# ifdef GLS_MIXING
#  define KANTHA_CLAYSON
#  define N2S2_HORAVG
# ifdef VEG_TURB
#  undef N2S2_HORAVG
# endif
#  define RI_SPLINES
# endif
# define SEDIMENT
# ifdef SEDIMENT
#  define SUSPLOAD
#  undef  BEDLOAD_SOULSBY
#  undef  BEDLOAD_MPM
#  undef SED_MORPH
# endif
# if defined SEDIMENT || defined SG_BBL || defined MB_BBL || defined SSW_BBL
#  undef ANA_SEDIMENT
# endif
*/
/*# undef BULK_FLUXES*/
/*
# if defined BULK_FLUXES
#  define ANA_PAIR
#  define ANA_TAIR
#  define ANA_QAIR
# endif
*/
/*
# define ANA_SMFLUX
# define ANA_STFLUX
# define ANA_SSFLUX
# define ANA_BPFLUX
# define ANA_BTFLUX
# define ANA_BSFLUX
# define ANA_SPFLUX
# define ANA_SRFLUX
#endif

#define DIAGNOSTICS_UV
*/
