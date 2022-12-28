/***************************** <AUTO_FILE_HEADER> *****************************/
/*                                                                            */
/* !Layer           : SWC Layer                                               */
/*                                                                            */
/* !Component       : TrbActSys                                               */
/* !Description     : TrbActSys Software Component                            */
/*                                                                            */
/* !Module          : TrbActSys                                               */
/*                                                                            */
/* !File            : TrbActSys_Def.c                                         */
/*                                                                            */
/* !Target          : All (optimized for "Generic->Custom")                   */
/*                                                                            */
/* !Vendor          : Valeo                                                   */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT 2008 VALEO                                                       */
/* all rights reserved                                                        */
/*                                                                            */
/**************************** </AUTO_FILE_HEADER> *****************************/
/* Autocoding Information                                                     */
/*   Tool             : RTW-EC 7.5  (R2010a)  25-Jan-2010                     */
/*   CodeGen toolbox  : version 003                                           */
/*   Model name       : TrbActSys_AUTOSAR.mdl                                 */
/*   Root subsystem   : /TrbActSys                                            */
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::   P:/ACT_EMS/LOG/REF/SWC_VEMS/PSA/SWC-TURBO/BA/M14-TrbActSys/5-$*/
/* $Revision::   1.10                                                        $*/
/* $Author::   adelvare                               $$Date::   15 Jan 2013 $*/
/******************************************************************************/
/* !CompReq : FLOAT                                                           */
/******************************************************************************/
#include "TrbActSys.h"
#include "TrbActSys_private.h"

/******************************************************************************/
/* Check that Conditionnal Compilation options are defined                    */
/******************************************************************************/
/******************************************************************************/
/* DEFINES                                                                    */
/******************************************************************************/

/******************************************************************************/
/* DATA DEFINITION                                                            */
/******************************************************************************/

/* !Comment: Define data in section "CALIB_32BIT" */
#define TrbActSys_START_SEC_CALIB_32BIT
#include "TrbActSys_MemMap.h"

CONST(SInt32, TRBACTSYS_CALIB) TrbAct_facAdpArTrbActErrMin_C = 0;

#define TrbActSys_STOP_SEC_CALIB_32BIT
#include "TrbActSys_MemMap.h"

/* !Comment: Define data in section "CARTO_16BIT" */
#define TrbActSys_START_SEC_CARTO_16BIT
#include "TrbActSys_MemMap.h"

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_arTrbActAdpDeltaCor_A[4] = { 1U, 10U,
  52U, 105U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_arTrbActReq_A[16] = { 0U, 1U, 3U, 5U, 6U,
  16U, 30U, 42U, 55U, 68U, 97U, 132U, 177U, 230U, 280U, 315U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_cppEg_T[16] = { 17135U, 17575U, 18017U,
  18459U, 18903U, 19349U, 19796U, 20245U, 20695U, 21147U, 21599U, 22054U, 22510U,
  22968U, 23426U, 23887U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_effCmpr_M[16][16] = { { 34079U, 34079U,
  34079U, 34079U, 34079U, 34079U, 34079U, 34079U, 34079U, 34079U, 34079U, 34079U,
  34079U, 34079U, 34079U, 34079U },{ 39276U, 39276U, 39276U, 39276U, 39276U, 39276U,
  39276U, 39276U, 39276U, 39276U, 39276U, 39276U, 39276U, 39276U, 39276U, 39276U },
{ 44479U, 44479U, 44479U, 44479U, 44479U, 44479U, 44479U, 44479U, 44479U, 44479U,
  44479U, 44479U, 44479U, 44479U, 44479U, 44479U },{ 45744U, 45744U, 45744U, 45744U,
  45744U, 45744U, 45744U, 45744U, 45744U, 45744U, 45744U, 45744U, 45744U, 45744U,
  45744U, 45744U },{ 46354U, 46354U, 46354U, 46354U, 46354U, 46354U, 46354U, 46354U,
  46354U, 46354U, 46354U, 46354U, 46354U, 46354U, 46354U, 46354U },{ 46747U, 46747U,
  46747U, 46747U, 46747U, 46747U, 46747U, 46747U, 46747U, 46747U, 46747U, 46747U,
  46747U, 46747U, 46747U, 46747U },{ 47055U, 47055U, 47055U, 47055U, 47055U, 47055U,
  47055U, 47055U, 47055U, 47055U, 47055U, 47055U, 47055U, 47055U, 47055U, 47055U },
{ 46662U, 46662U, 46662U, 46662U, 46662U, 46662U, 46662U, 46662U, 46662U, 46662U,
  46662U, 46662U, 46662U, 46662U, 46662U, 46662U },{ 45744U, 45744U, 45744U, 45744U,
  45744U, 45744U, 45744U, 45744U, 45744U, 45744U, 45744U, 45744U, 45744U, 45744U,
  45744U, 45744U },{ 44696U, 44696U, 44696U, 44696U, 44696U, 44696U, 44696U, 44696U,
  44696U, 44696U, 44696U, 44696U, 44696U, 44696U, 44696U, 44696U },{ 43470U, 43470U,
  43470U, 43470U, 43470U, 43470U, 43470U, 43470U, 43470U, 43470U, 43470U, 43470U,
  43470U, 43470U, 43470U, 43470U },{ 42421U, 42421U, 42421U, 42421U, 42421U, 42421U,
  42421U, 42421U, 42421U, 42421U, 42421U, 42421U, 42421U, 42421U, 42421U, 42421U },
{ 41812U, 41812U, 41812U, 41812U, 41812U, 41812U, 41812U, 41812U, 41812U, 41812U,
  41812U, 41812U, 41812U, 41812U, 41812U, 41812U },{ 41157U, 41157U, 41157U, 41157U,
  41157U, 41157U, 41157U, 41157U, 41157U, 41157U, 41157U, 41157U, 41157U, 41157U,
  41157U, 41157U },{ 40239U, 40239U, 40239U, 40239U, 40239U, 40239U, 40239U, 40239U,
  40239U, 40239U, 40239U, 40239U, 40239U, 40239U, 40239U, 40239U },{ 39322U, 39322U,
  39322U, 39322U, 39322U, 39322U, 39322U, 39322U, 39322U, 39322U, 39322U, 39322U,
  39322U, 39322U, 39322U, 39322U } } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_effTrb_M[16][16] = { { 43163U, 43163U, 43163U,
  43163U, 43163U, 43163U, 43163U, 43163U, 43163U, 43163U, 43163U, 43163U, 43163U,
  43163U, 43163U, 43163U },{ 45992U, 45992U, 45992U, 45992U, 45992U, 45992U, 45992U,
  45992U, 45992U, 45992U, 45992U, 45992U, 45992U, 45992U, 45992U, 45992U },{ 45308U,
  45308U, 45308U, 45308U, 45308U, 45308U, 45308U, 45308U, 45308U, 45308U, 45308U,
  45308U, 45308U, 45308U, 45308U, 45308U },{ 45785U, 45785U, 45785U, 45785U, 45785U,
  45785U, 45785U, 45785U, 45785U, 45785U, 45785U, 45785U, 45785U, 45785U, 45785U,
  45785U },{ 46396U, 46396U, 46396U, 46396U, 46396U, 46396U, 46396U, 46396U, 46396U,
  46396U, 46396U, 46396U, 46396U, 46396U, 46396U, 46396U },{ 46107U, 46107U, 46107U,
  46107U, 46107U, 46107U, 46107U, 46107U, 46107U, 46107U, 46107U, 46107U, 46107U,
  46107U, 46107U, 46107U },{ 44844U, 44844U, 44844U, 44844U, 44844U, 44844U, 44844U,
  44844U, 44844U, 44844U, 44844U, 44844U, 44844U, 44844U, 44844U, 44844U },{ 45875U,
  45875U, 45875U, 45875U, 45875U, 45875U, 45875U, 45875U, 45875U, 45875U, 45875U,
  45875U, 45875U, 45875U, 45875U, 45875U },{ 45215U, 45215U, 45215U, 45215U, 45215U,
  45215U, 45215U, 45215U, 45215U, 45215U, 45215U, 45215U, 45215U, 45215U, 45215U,
  45215U },{ 45416U, 45416U, 45416U, 45416U, 45416U, 45416U, 45416U, 45416U, 45416U,
  45416U, 45416U, 45416U, 45416U, 45416U, 45416U, 45416U },{ 43479U, 43479U, 43479U,
  43479U, 43479U, 43479U, 43479U, 43479U, 43479U, 43479U, 43479U, 43479U, 43479U,
  43479U, 43479U, 43479U },{ 42203U, 42203U, 42203U, 42203U, 42203U, 42203U, 42203U,
  42203U, 42203U, 42203U, 42203U, 42203U, 42203U, 42203U, 42203U, 42203U },{ 40989U,
  40989U, 40989U, 40989U, 40989U, 40989U, 40989U, 40989U, 40989U, 40989U, 40989U,
  40989U, 40989U, 40989U, 40989U, 40989U },{ 38396U, 38396U, 38396U, 38396U, 38396U,
  38396U, 38396U, 38396U, 38396U, 38396U, 38396U, 38396U, 38396U, 38396U, 38396U,
  38396U },{ 33665U, 33665U, 33665U, 33665U, 33665U, 33665U, 33665U, 33665U, 33665U,
  33665U, 33665U, 33665U, 33665U, 33665U, 33665U, 33665U },{ 33665U, 33665U, 33665U,
  33665U, 33665U, 33665U, 33665U, 33665U, 33665U, 33665U, 33665U, 33665U, 33665U,
  33665U, 33665U, 33665U } } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_facAdpTrbActDeltaCor_T[4] = { 32768U,
  32768U, 32768U, 32768U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_facAdp_A[12] = { 22938U, 29491U, 31130U,
  32768U, 33096U, 33423U, 33751U, 34079U, 34406U, 36045U, 37683U, 39322U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_facAdp_T[12] = { 5160U, 3522U, 3194U,
  2948U, 2915U, 2866U, 2825U, 2784U, 2702U, 2539U, 2293U, 2129U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_facCfeTrbAct_T[16] = { 41627U, 41627U,
  41627U, 41313U, 39111U, 34497U, 32400U, 30827U, 29149U, 26109U, 22124U, 18978U,
  14889U, 12267U, 8702U, 104U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_facCfeTrb_T[19] = { 41627U, 41627U,
  41627U, 41313U, 39111U, 34497U, 33134U, 31666U, 30093U, 28206U, 26109U, 23592U,
  20656U, 18978U, 17091U, 14889U, 12267U, 8702U, 9U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_facFilGradUsThrMes_T[9] = { 65535U,
  65535U, 65535U, 65535U, 65535U, 65535U, 65535U, 65535U, 65535U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_facFilOpTrbActAir_T[9] = { 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_facFltPred_M[16][9] = { { 0U, 0U, 0U, 0U, 0U,
  0U, 0U, 0U, 0U },{ 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },{ 0U, 0U, 0U, 0U, 0U, 0U, 0U,
  0U, 0U },{ 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },{ 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },
{ 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },{ 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },{ 0U, 0U,
  0U, 0U, 0U, 0U, 0U, 0U, 0U },{ 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },{ 0U, 0U, 0U, 0U,
  0U, 0U, 0U, 0U, 0U },{ 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },{ 0U, 0U, 0U, 0U, 0U, 0U,
  0U, 0U, 0U },{ 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },{ 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
  0U },{ 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },{ 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U } } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_facPresTrb_T[21] = { 32767U, 33750U,
  34405U, 35061U, 35716U, 36371U, 36863U, 37355U, 37682U, 38338U, 38665U, 38993U,
  39321U, 39648U, 39976U, 40304U, 40631U, 40959U, 41123U, 41287U, 41614U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_facTUsTrb_T[9] = { 21402U, 22170U,
  22886U, 23603U, 23680U, 24294U, 24622U, 24952U, 25600U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_mfAirThrCorReq_A[16] = { 655U, 1267U,
  1879U, 2490U, 3102U, 3714U, 4325U, 4937U, 5549U, 6160U, 6772U, 7384U, 7995U,
  8607U, 9219U, 9830U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_mfGrd_A[16] = { 14745U, 15072U, 15400U,
  15728U, 15891U, 16055U, 16186U, 16285U, 16383U, 16481U, 16580U, 16711U, 16875U,
  17038U, 17366U, 17694U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_mfRatPresTrbActInter_A[16] = { 0U, 306U,
  611U, 918U, 1226U, 1527U, 1835U, 2143U, 2444U, 2753U, 3061U, 3362U, 3670U,
  3978U, 4280U, 4588U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_mfTrbCorEstim_A[16] = { 0U, 472U, 944U,
  1416U, 1887U, 2359U, 2831U, 3303U, 3775U, 4247U, 4719U, 5190U, 5662U, 6134U,
  6606U, 7078U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_mfTrbCorReq_T[16] = { 0U, 1114U, 1901U,
  2444U, 2811U, 3087U, 3670U, 4129U, 4522U, 4784U, 5046U, 5243U, 5374U, 5472U,
  5767U, 6226U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_nEng2_A[9] = { 700U, 1000U, 1500U, 2000U,
  2500U, 3000U, 3500U, 4000U, 5000U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_nThdAdp_T[9] = { 2000U, 2000U, 2000U,
  2000U, 2000U, 2000U, 2000U, 2000U, 2000U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_pThdAdp_M[9][9] = { { 12663U, 12663U, 12663U,
  12663U, 12663U, 12663U, 12663U, 12663U, 12663U },{ 12663U, 12663U, 12663U, 12663U,
  12663U, 12663U, 12663U, 12663U, 12663U },{ 12663U, 12663U, 12663U, 12663U, 12663U,
  12663U, 12663U, 12663U, 12663U },{ 12663U, 12663U, 12663U, 12663U, 12663U, 12663U,
  12663U, 12663U, 12663U },{ 12663U, 12663U, 12663U, 12663U, 12663U, 12663U, 12663U,
  12663U, 12663U },{ 12663U, 12663U, 12663U, 12663U, 12663U, 12663U, 12663U, 12663U,
  12663U },{ 12663U, 12663U, 12663U, 12663U, 12663U, 12663U, 12663U, 12663U, 12663U },
{ 12663U, 12663U, 12663U, 12663U, 12663U, 12663U, 12663U, 12663U, 12663U },{ 12663U,
  12663U, 12663U, 12663U, 12663U, 12663U, 12663U, 12663U, 12663U } } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_pwrCmprInter_T[16] = { 0U, 300U, 588U,
  864U, 1129U, 1384U, 1631U, 1869U, 2100U, 2324U, 2541U, 2752U, 2957U, 3157U,
  3352U, 3542U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rAirLdAltiCorReq2_A[9] = { 2458U, 3277U,
  4915U, 6554U, 8192U, 9830U, 11469U, 13107U, 14746U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rAirLdAltiCorReq_A[16] = { 3277U, 6554U,
  8192U, 9830U, 11469U, 13107U, 14746U, 16384U, 18022U, 19661U, 21299U, 22938U,
  24576U, 26214U, 27853U, 29491U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rOpRelTrbActAirExtReq_M[9][16] = { { 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U },{ 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U },{ 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U },{ 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U },{ 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U },{ 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U },{ 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U },{ 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U },{ 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U } } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rOpRelTrbActExtReq1_M[9][9] = { { 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U },{ 65529U, 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U },{ 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U, 65529U },{ 65529U, 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U },{ 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U, 65529U },{ 65529U, 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U },{ 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U, 65529U },{ 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U },{ 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U} };

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rOpRelTrbActExtReq2_M[9][9] = { { 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U },{ 65529U, 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U },{ 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U, 65529U },{ 65529U, 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U, 65529U, 65529U },{ 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U, 65529U },{ 65529U, 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U, 65529U, 65529U },{ 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U, 65529U },{ 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U,
  65529U },{ 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U, 65529U} };

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rOpTrbActTrbMod_M[16][9] = { { 0U, 2621U,
  5243U, 7864U, 10486U, 13107U, 16384U, 19661U, 22938U },{ 26214U, 32768U, 39322U,
  45875U, 52429U, 58982U, 65529U, 0U, 2621U },{ 5243U, 7864U, 10486U, 13107U,
  16384U, 19661U, 22938U, 26214U, 32768U },{ 39322U, 45875U, 52429U, 58982U, 65529U,
  0U, 2621U, 5243U, 7864U },{ 10486U, 13107U, 16384U, 19661U, 22938U, 26214U,
  32768U, 39322U, 45875U },{ 52429U, 58982U, 65529U, 0U, 2621U, 5243U, 7864U,
  10486U, 13107U },{ 16384U, 19661U, 22938U, 26214U, 32768U, 39322U, 45875U, 52429U,
  58982U },{ 65529U, 0U, 2621U, 5243U, 7864U, 10486U, 13107U, 16384U, 19661U },
{ 22938U, 26214U, 32768U, 39322U, 45875U, 52429U, 58982U, 65529U, 0U },{ 2621U,
  5243U, 7864U, 10486U, 13107U, 16384U, 19661U, 22938U, 26214U },{ 32768U, 39322U,
  45875U, 52429U, 58982U, 65529U, 0U, 2621U, 5243U },{ 7864U, 10486U, 13107U,
  16384U, 19661U, 22938U, 26214U, 32768U, 39322U },{ 45875U, 52429U, 58982U, 65529U,
  0U, 2621U, 5243U, 7864U, 10486U },{ 13107U, 16384U, 19661U, 22938U, 26214U,
  32768U, 39322U, 45875U, 52429U },{ 58982U, 65529U, 0U, 2621U, 5243U, 7864U,
  10486U, 13107U, 16384U },{ 19661U, 22938U, 26214U, 32768U, 39322U, 45875U, 52429U,
  58982U, 65529U } } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rPresCfeTrbAct_A[19] = { 0U, 6554U,
  35409U, 39322U, 45875U, 52429U, 53740U, 55050U, 56361U, 57672U, 58982U, 60293U,
  61604U, 62259U, 62915U, 63570U, 64225U, 64881U, 65529U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rPresCmprReqRef1_A[16] = { 8192U, 9284U,
  10377U, 11469U, 12561U, 13653U, 14746U, 15838U, 16930U, 18022U, 19115U, 20207U,
  21299U, 22391U, 23484U, 24576U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rPresCmprReqRef2_A[16] = { 8192U, 8738U,
  9284U, 9830U, 10377U, 10923U, 11469U, 12015U, 12561U, 13107U, 13653U, 14199U,
  14746U, 15292U, 15838U, 16384U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rPresTrbEstimIvsRef1_A[9] = { 0U, 13107U,
  26214U, 32768U, 39322U, 45875U, 52429U, 58982U, 64881U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rPresTrbEstimIvsRef2_A[16] = { 0U, 6554U,
  36045U, 39322U, 45875U, 52429U, 54395U, 55706U, 57016U, 58982U, 60948U, 62259U,
  63570U, 64225U, 64881U, 65470U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rPresTrbEstim_A[16] = { 8192U, 9118U,
  9552U, 9986U, 10420U, 11289U, 12157U, 13025U, 13894U, 15630U, 17367U, 19104U,
  20840U, 23446U, 26051U, 26214U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rPresTrbReq_A[16] = { 8192U, 8438U,
  9011U, 9552U, 9986U, 10420U, 11289U, 12157U, 13025U, 13894U, 15630U, 17367U,
  19104U, 20840U, 28672U, 40960U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rPresTrbReq_M[16][16] = { { 8192U, 10642U,
  11972U, 13088U, 14176U, 15263U, 16297U, 17286U, 18264U, 19214U, 20151U, 21068U,
  21984U, 22879U, 27675U, 40960U },{ 8192U, 10667U, 12011U, 13141U, 14249U, 15345U,
  16393U, 17393U, 18384U, 19344U, 20292U, 21222U, 22147U, 23050U, 27874U, 40960U },
{ 8192U, 10692U, 12049U, 13194U, 14321U, 15426U, 16486U, 17499U, 18501U, 19474U,
  20430U, 21374U, 22308U, 23219U, 28070U, 40960U },{ 8192U, 10715U, 12087U, 13246U,
  14391U, 15507U, 16578U, 17604U, 18615U, 19601U, 20566U, 21523U, 22465U, 23384U,
  28263U, 40960U },{ 8192U, 10738U, 12124U, 13297U, 14459U, 15585U, 16668U, 17706U,
  18728U, 19725U, 20698U, 21668U, 22619U, 23546U, 28453U, 40960U },{ 8192U, 10761U,
  12160U, 13347U, 14525U, 15663U, 16756U, 17806U, 18837U, 19845U, 20828U, 21810U,
  22768U, 23703U, 28638U, 40960U },{ 8192U, 10783U, 12195U, 13395U, 14588U, 15737U,
  16839U, 17902U, 18941U, 19960U, 20953U, 21944U, 22911U, 23853U, 28815U, 40960U },
{ 8192U, 10804U, 12228U, 13441U, 14649U, 15808U, 16918U, 17994U, 19041U, 20070U,
  21073U, 22074U, 23047U, 23996U, 28985U, 40960U },{ 8192U, 10824U, 12260U, 13485U,
  14707U, 15875U, 16993U, 18081U, 19136U, 20174U, 21189U, 22196U, 23176U, 24132U,
  29146U, 40960U },{ 8192U, 10842U, 12290U, 13526U, 14761U, 15939U, 17064U, 18162U,
  19226U, 20272U, 21297U, 22311U, 23298U, 24260U, 29299U, 40960U },{ 8192U, 10860U,
  12317U, 13563U, 14811U, 15998U, 17131U, 18238U, 19310U, 20363U, 21398U, 22418U,
  23411U, 24379U, 29441U, 40960U },{ 8192U, 10876U, 12341U, 13596U, 14855U, 16051U,
  17190U, 18306U, 19386U, 20445U, 21488U, 22514U, 23512U, 24486U, 29569U, 40960U },
{ 8192U, 10890U, 12362U, 13626U, 14895U, 16098U, 17244U, 18367U, 19454U, 20518U,
  21569U, 22600U, 23603U, 24576U, 29684U, 40960U },{ 8192U, 10903U, 12381U, 13653U,
  14930U, 16140U, 17292U, 18421U, 19514U, 20583U, 21640U, 22676U, 23683U, 24652U,
  29785U, 40960U },{ 8192U, 10913U, 12398U, 13676U, 14961U, 16176U, 17333U, 18467U,
  19566U, 20638U, 21702U, 22741U, 23753U, 24713U, 29873U, 40960U },{ 8192U, 10922U,
  12412U, 13695U, 14986U, 16206U, 17367U, 18506U, 19609U, 20685U, 21753U, 22795U,
  23810U, 24764U, 29946U, 40960U } } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rPresTrb_A[21] = { 2458U, 2785U, 2949U,
  3031U, 3113U, 3277U, 3441U, 3523U, 3686U, 3932U, 4096U, 4342U, 4506U, 4833U,
  5120U, 5489U, 5816U, 6308U, 6799U, 7373U, 8192U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rTCmprSqrt_T[16] = { 27427U, 31097U,
  34324U, 37323U, 40108U, 42713U, 45154U, 47464U, 49676U, 51790U, 53821U, 55788U,
  57688U, 61293U, 61302U, 64710U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rTCmpr_A[16] = { 11469U, 14746U, 18022U,
  21299U, 24576U, 27853U, 31130U, 34406U, 37683U, 40960U, 44237U, 47514U, 50790U,
  54067U, 57344U, 63898U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rTTrbSqrt_T[16] = { 13713U, 15548U,
  17162U, 18661U, 20054U, 21357U, 22577U, 23732U, 24838U, 25895U, 26911U, 27894U,
  28844U, 30646U, 32768U, 34702U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_rTTrb_A[16] = { 5734U, 7373U, 9011U,
  10650U, 12288U, 13926U, 15565U, 17203U, 18842U, 20480U, 22118U, 23757U, 25395U,
  28672U, 32768U, 36864U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_tUsTrbAdp_A[9] = { 19744U, 21664U,
  23584U, 25504U, 26464U, 27424U, 28384U, 29344U, 31264U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_tUsTrbEstimSqrt_T[16] = { 17736U, 19931U,
  21930U, 23769U, 25481U, 27095U, 28586U, 30015U, 31384U, 32696U, 33966U, 35170U,
  36344U, 37482U, 38586U, 39660U } ;

CONST(UInt16, TRBACTSYS_CARTO) TrbAct_tUsTrbEstim_A[16] = { 2464U, 5024U,
  7584U, 10144U, 12704U, 15264U, 17824U, 20384U, 22944U, 25504U, 28064U, 30624U,
  33184U, 35744U, 38304U, 40864U } ;

#define TrbActSys_STOP_SEC_CARTO_16BIT
#include "TrbActSys_MemMap.h"

/* !Comment: Define data in section "CALIB_16BIT" */
#define TrbActSys_START_SEC_CALIB_16BIT
#include "TrbActSys_MemMap.h"

CONST(UInt16, TRBACTSYS_CALIB) TrbAct_arTrbActAdp_B = 0U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_arTrbActFrzSp_B = 0U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_arTrbActReqMax_C = 105U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_facAdpArTrbActErrMax_C = 6554U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_facArAdpGain_C = 33U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_facFilGainRatOpTrbAct_C = 49152U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_facFilGradUsThrReq_C = 65535U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_facFilPExMnfReq_C = 32768U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_facFltMfEg_C = 3932U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_facFltPred1_C = 45875U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_facFltPred2_C = 19661U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_pCmprRef_C = 12663U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_pDeltaUsThrHiThd_C = 2500U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_pDeltaUsThrLoThd_C = 0U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_pDeltaUsThrThd1_C = 625U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_pDeltaUsThrThd2_C = 625U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_pDeltaUsThrThd3_C = 625U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_pExMnfReq_B = 0U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_pTrbRef_C = 12500U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_rOpMaxTrbAct_C = 65529U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_rOpMinTrbAct_C = 0U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_rOpRelTrbActExtReq_B = 0U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_rOpTrbActReqDft_C = 65529U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_rOpTrbActReqTest_C = 65529U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_rOpTrbActReq_B = 0U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_tCmprRef_C = 8960U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_tTrbRef_C = 2464U;
CONST(UInt16, TRBACTSYS_CALIB) TrbAct_tiDlyArAdp_C = 13107U;

#define TrbActSys_STOP_SEC_CALIB_16BIT
#include "TrbActSys_MemMap.h"

/* !Comment: Define data in section "CALIB_BOOLEAN" */
#define TrbActSys_START_SEC_CALIB_BOOLEAN
#include "TrbActSys_MemMap.h"

CONST(Boolean, TRBACTSYS_CALIB) TRBACTSYS_ACTIVE_BYP_C = 0;
CONST(Boolean, TRBACTSYS_CALIB) TrbAct_bAcvOpRelTWCMgt_C = 1;
CONST(Boolean, TRBACTSYS_CALIB) TrbAct_bAcvOpRelTrbActExt_B = 0;
CONST(Boolean, TRBACTSYS_CALIB) TrbAct_bAcvPExMnfReq_C = 0;
CONST(Boolean, TRBACTSYS_CALIB) TrbAct_bAcvTrbActAdp_B = 0;
CONST(Boolean, TRBACTSYS_CALIB) TrbAct_bAcvTrbMod_C = 1;
CONST(Boolean, TRBACTSYS_CALIB) TrbAct_bInhAdpTrbAct_C = 0;
CONST(Boolean, TRBACTSYS_CALIB) TrbAct_bInhCtlExt_C = 0;
CONST(Boolean, TRBACTSYS_CALIB) TrbAct_bInhHiThd_C = 0;
CONST(Boolean, TRBACTSYS_CALIB) TrbAct_bInhPresThd_C = 1;
CONST(Boolean, TRBACTSYS_CALIB) TrbAct_bInhTrbActAdpPrev_C = 0;
CONST(Boolean, TRBACTSYS_CALIB) TrbAct_bPresAltiCor_C = 1;
CONST(Boolean, TRBACTSYS_CALIB) TrbAct_bSelPresExMnf_C = 1;
CONST(Boolean, TRBACTSYS_CALIB) TrbAct_bTestModRatOpReq_C = 0;

#define TrbActSys_STOP_SEC_CALIB_BOOLEAN
#include "TrbActSys_MemMap.h"

/* !Comment: Define data in section "INTERNAL_VAR_32BIT" */
#define TrbActSys_START_SEC_INTERNAL_VAR_32BIT
#include "TrbActSys_MemMap.h"

VAR(Float32, TRBACTSYS_INTERNAL_VAR) ExM_mfEgTotFlt = 0.0F;
VAR(Float32, TRBACTSYS_INTERNAL_VAR) TrbAct_facAdpArErrFilPrev = 0.0F;
VAR(SInt32, TRBACTSYS_INTERNAL_VAR) TrbAct_facAdpArTrbActErrFil = 0;
VAR(Float32, TRBACTSYS_INTERNAL_VAR) TrbAct_facAdpArTrbActErrPrev = 0.0F;
VAR(SInt32, TRBACTSYS_INTERNAL_VAR) TrbAct_facAdpArTrbActErr_IRV_MP = 0;
VAR(Float32, TRBACTSYS_INTERNAL_VAR) TrbAct_facArTrbAct1 = 0.0F;
VAR(Float32, TRBACTSYS_INTERNAL_VAR) TrbAct_facArTrbAct2 = 0.0F;
VAR(Float32, TRBACTSYS_INTERNAL_VAR) TrbAct_mfTrbActReq = 0.0F;
VAR(Float32, TRBACTSYS_INTERNAL_VAR) TrbAct_mfTrbEstim = 0.0F;
VAR(Float32, TRBACTSYS_INTERNAL_VAR) TrbAct_pGradUsThrMesCorPrev = 0.0F;
VAR(Float32, TRBACTSYS_INTERNAL_VAR) TrbAct_pGradUsThrReqPrev = 0.0F;
VAR(Float32, TRBACTSYS_INTERNAL_VAR) TrbAct_pwrCmprReq = 0.0F;
VAR(Float32, TRBACTSYS_INTERNAL_VAR) TrbAct_rOpTrbActAirExtPrev = 0.0F;
VAR(Float32, TRBACTSYS_INTERNAL_VAR) TrbAct_rOpTrbActReqPrev = 0.0F;
VAR(Float32, TRBACTSYS_INTERNAL_VAR) TrbAct_rOpTrbActTrbModReq = 0.0F;

#define TrbActSys_STOP_SEC_INTERNAL_VAR_32BIT
#include "TrbActSys_MemMap.h"

/* !Comment: Define data in section "INTERNAL_VAR_16BIT" */
#define TrbActSys_START_SEC_INTERNAL_VAR_16BIT
#include "TrbActSys_MemMap.h"

VAR(SInt16, TRBACTSYS_INTERNAL_VAR) ExM_mfEgTotGrdFlt_MP = 0;
VAR(SInt16, TRBACTSYS_INTERNAL_VAR) ExM_mfEgTotGrdPrev_MP = 0;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_arTrbActReq_IRV_MP = 0U;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_effCmpr_IRV_MP = 0U;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_effTrb_IRV_MP = 0U;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_facAdp_MP = 0U;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_facCfeTrbAct_MP = 0U;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_facFltPred_MP = 0U;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_facUsTrbMfCor_MP = 0U;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_mfAirThrCorReq_MP = 0U;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_mfRatPresTrbInter_MP = 0U;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_mfTrbCorEstim_MP = 0U;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_mfTrbCorReq_MP = 0U;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_pExMnf_MP = 0U;
VAR(SInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_pGradUsThrMesCorFil = 0;
VAR(SInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_pGradUsThrReqFil_IRV_MP = 0;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_rAirLdAltiCorReq_MP = 0U;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_rOpTrbActAirExtModReq = 0U;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_rPresCmprReq_MP = 0U;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_rPresTrbReq_MP = 0U;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_rTCmprEstim_MP = 0U;
VAR(UInt16, TRBACTSYS_INTERNAL_VAR) TrbAct_rTTrbEstim_MP = 0U;

#define TrbActSys_STOP_SEC_INTERNAL_VAR_16BIT
#include "TrbActSys_MemMap.h"

/* !Comment: Define data in section "INTERNAL_VAR_BOOLEAN" */
#define TrbActSys_START_SEC_INTERNAL_VAR_BOOLEAN
#include "TrbActSys_MemMap.h"

VAR(Boolean, TRBACTSYS_INTERNAL_VAR) TrbAct_bAcvTrbActAdpPrev = FALSE;
VAR(Boolean, TRBACTSYS_INTERNAL_VAR) TrbAct_bAdpCdn_MP = FALSE;

#define TrbActSys_STOP_SEC_INTERNAL_VAR_BOOLEAN
#include "TrbActSys_MemMap.h"

/*-------------------------------- end of file -------------------------------*/