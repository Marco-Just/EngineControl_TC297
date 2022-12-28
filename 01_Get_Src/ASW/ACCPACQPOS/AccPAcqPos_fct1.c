/***************************** <AUTO_FILE_HEADER> *****************************/
/******************************************************************************/
/*                                                                            */
/* !Layer           : APPLI                                                   */
/*                                                                            */
/* !Component       : AccP                                                    */
/* !Description     : AccP component.                                         */
/*                                                                            */
/* !Module          : ACCPACQPOS                                              */
/* !Description     : Acquisition de la position pedale                       */
/*                                                                            */
/* !File            : ACCPACQPOS_FCT1.c                                       */
/*                                                                            */
/* !Scope           : Public                                                  */
/*                                                                            */
/* !Target          : 32Bit                                                   */
/*                                                                            */
/* !Vendor          : Valeo VEMS                                              */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT 2008 VALEO                                                       */
/* all rights reserved                                                        */
/*                                                                            */
/******************************************************************************/
/*   1 / ACCPACQPOS_vidInit                                                   */
/*   2 / ACCPACQPOS_vidRstSw                                                  */
/*   3 / ACCPACQPOS_vidPosPedalAcquisition                                    */
/*   4 / ACCPACQPOS_vidDiagElecPiste1                                         */
/*   5 / ACCPACQPOS_vidPanne1Measurement                                      */
/*   6 / ACCPACQPOS_vidDiagElecPiste2                                         */
/*   7 / ACCPACQPOS_vidPanne2Measurement                                      */
/*   8 / ACCPACQPOS_vidDoubleFaultAccP                                        */
/*   9 / ACCPACQPOS_vidLinearFilterPiste1                                     */
/*   10 / ACCPACQPOS_vidLinearFilterPiste2                                    */
/*                                                                            */
/* !Reference   : PTS_DOC_6601121 / 02                                        */
/*                                                                            */
/**************************** </AUTO_FILE_HEADER> *****************************/
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::   P:/EBx_V46/LDA/Ref/modules/ACCP/ACCPACQPOS/ACCPACQPOS_FCT1.c_$*/
/* $Revision::   1.11     $$Author::   achebino       $$Date::   23 Sep 2014 $*/
/* $Author::   achebino                               $$Date::   23 Sep 2014 $*/
/******************************************************************************/
/* !VnrOff  : Names imposed by the customer                                   */
/******************************************************************************/
/* !CompReq :                                                                 */
/******************************************************************************/

#include "STD_TYPES.h"
#include "MATHSRV.h"
#include "ACCPACQPOS.h"
#include "ACCPACQPOS_L.h"
#include "ACCPACQPOS_IM.h"
#include "ACCPACQPOS_I.h"
#include "GDGAR.h"
#include "VEMS.h"

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  ACCPACQPOS_vidInit                                         */
/* !Description :  Lors d�un Reset soft, AccP_rAccPSens1 et AccP_rAccPSens2   */
/*                 sont sauvegard�es en RAM non volatile. Lors de             */
/*                 l�initialisation du calculateur, ces 2 variables sont      */
/*                 initialis�es � 0.                                          */
/* !Number      :  FCT1.1                                                     */
/* !Author      :  F.CHEFFI                                                   */
/* !Trace_To    :  PTS_R_6601121_002.01                                       */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  extf argret void ACCPACQPOS_vidRstSw();                                   */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  input uint8 EcuSt_stTypRst;                                               */
/*  output uint16 Pos_pedale_1_result_ad_conv;                                */
/*  output uint16 Pos_pedale_2_result_ad_conv;                                */
/*  output uint16 Aps_1_raw_position;                                         */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void ACCPACQPOS_vidInit(void)
{
   uint8 u8LocalEcuSt_stTypRst;


   VEMS_vidGET(EcuSt_stTypRst, u8LocalEcuSt_stTypRst);
   if (u8LocalEcuSt_stTypRst != RSTSRV_udtSOFTWARE_RESET)
   {
      ACCPACQPOS_vidRstSw();
   }

   VEMS_vidSET(Pos_pedale_1_result_ad_conv, 0);
   VEMS_vidSET(Pos_pedale_2_result_ad_conv, 0);
   VEMS_vidSET(Aps_1_raw_position, 0);
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  ACCPACQPOS_vidRstSw                                        */
/* !Description :  Initialisation des variables AccP_rAccPSens1 et            */
/*                 AccP_rAccPSens2                                            */
/* !Number      :  FCT1.2                                                     */
/* !Author      :  F.CHEFFI                                                   */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  output uint16 AccP_rAccPSens1;                                            */
/*  output uint16 AccP_rAccPSens2;                                            */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void ACCPACQPOS_vidRstSw(void)
{
   VEMS_vidSET(AccP_rAccPSens1, 0);
   VEMS_vidSET(AccP_rAccPSens2, 0);
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  ACCPACQPOS_vidPosPedalAcquisition                          */
/* !Description :  Fonction permettant l'acquisition des positions p�dale qui */
/*                 se fait en plusieurs �tapes � savoir la lin�arisation et le*/
/*                 filtrage des tensions d�acquisitions des 2 capteurs et le  */
/*                 diagnostic �lectrique sur ces tensions.                    */
/* !Number      :  FCT1.3                                                     */
/* !Author      :  F.CHEFFI                                                   */
/* !Trace_To    :  PTS_R_6601121_003.01                                       */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  extf argret void ACCPACQPOS_vidLinearFilterPiste1();                      */
/*  extf argret void ACCPACQPOS_vidLinearFilterPiste2();                      */
/*  extf argret void ACCPACQPOS_vidDiagElecPiste1();                          */
/*  extf argret void ACCPACQPOS_vidDiagElecPiste2();                          */
/*  extf argret void GDGAR_bGetFRM(argin uint16 u16channel)boolean;           */
/*  extf argret void ACCPACQPOS_vidDoubleFaultAccP();                         */
/*  extf argret void ACCPACQPOS_vidElectCoherence();                          */
/*  input boolean UCE_bWkuMain;                                               */
/*  output boolean Ext_bMonRunDftSenr_AccP;                                   */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void ACCPACQPOS_vidPosPedalAcquisition(void)
{
   boolean bLocalBInhAccPElDiag;
   boolean bLocalUCE_bWkuMain;

   VEMS_vidGET(UCE_bWkuMain, bLocalUCE_bWkuMain);

   if (bLocalUCE_bWkuMain != 0)
   {
      ACCPACQPOS_vidLinearFilterPiste1();
      ACCPACQPOS_vidLinearFilterPiste2();
      ACCPACQPOS_vidDiagElecPiste1();
      ACCPACQPOS_vidDiagElecPiste2();

      bLocalBInhAccPElDiag = GDGAR_bGetFRM(FRM_FRM_INHACCPELDIAG);
      if (bLocalBInhAccPElDiag == 0)
      {
         Ext_bMonRunDftSenr_AccP = 1;
         ACCPACQPOS_vidDoubleFaultAccP();
      }
      else
      {
         Ext_bMonRunDftSenr_AccP = 0;
      }
      ACCPACQPOS_vidElectCoherence();
   }
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  ACCPACQPOS_vidDiagElecPiste1                               */
/* !Description :  Production des variables bMponRun des diag elec qui sont   */
/*                 conditionn�s exclusivement par le FRM FRM_bInhAccPElDiag et*/
/*                 des bDgo qui sont lev�s en cas de valeur hors plage de     */
/*                 l�acquisition p�dale.                                      */
/* !Number      :  FCT1.4                                                     */
/* !Author      :  F.CHEFFI                                                   */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf argret void GDGAR_bGetFRM(argin uint16 u16channel)boolean;           */
/*  extf argret void ACCPACQPOS_vidPanne1Measurement();                       */
/*  output boolean Ext_bMonRunScpOc_Ped1;                                     */
/*  output boolean Ext_bMonRunScg_Ped1;                                       */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void ACCPACQPOS_vidDiagElecPiste1(void)
{
   boolean bLocalBInhAccPElDiag;


   bLocalBInhAccPElDiag = GDGAR_bGetFRM(FRM_FRM_INHACCPELDIAG);

   if (bLocalBInhAccPElDiag == 0)
   {
      ACCPACQPOS_vidPanne1Measurement();
      Ext_bMonRunScpOc_Ped1 = 1;
      Ext_bMonRunScg_Ped1 = 1;
   }
   else
   {
      Ext_bMonRunScpOc_Ped1 = 0;
      Ext_bMonRunScg_Ped1 = 0;
   }
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  ACCPACQPOS_vidPanne1Measurement                            */
/* !Description :  Le capteur 1 est d�clar� en CC � la tension Batterie si la */
/*                 tension � la sortie du convertisseur A/N est sup�rieure �  */
/*                 un seuil ; en circuit ouvert ou en CC � la masse si cette  */
/*                 mesure est inf�rieure � un second seuil. Le comptage des   */
/*                 pannes en d�coule.                                         */
/* !Number      :  FCT1.5                                                     */
/* !Author      :  F.CHEFFI                                                   */
/* !Trace_To    :  PTS_R_6601121_007.001                                      */
/*                 PTS_R_6601121_008.001                                      */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  input uint16 Acqui_position_pedale_1;                                     */
/*  input uint16 AccP_uThdScpSens1_C;                                         */
/*  input uint16 AccP_uThdScgSens1_C;                                         */
/*  output boolean Ext_bDgoScpOc_Ped1;                                        */
/*  output boolean Ext_bDgoScg_Ped1;                                          */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void ACCPACQPOS_vidPanne1Measurement(void)
{
   uint16 u16LocalAcqui_position_pedale_1;
   uint32 u32LocalAccP_uThdScpSens1_C;
   uint32 u32LocalAccP_uThdScgSens1_C;


   VEMS_vidGET(Acqui_position_pedale_1, u16LocalAcqui_position_pedale_1);
   u32LocalAccP_uThdScpSens1_C = (uint32)(AccP_uThdScpSens1_C * 4);
   u32LocalAccP_uThdScgSens1_C = (uint32)(AccP_uThdScgSens1_C * 4);

   if (u16LocalAcqui_position_pedale_1 > u32LocalAccP_uThdScpSens1_C)
   {
      Ext_bDgoScpOc_Ped1 = 1;
   }
   else
   {
      Ext_bDgoScpOc_Ped1 = 0;
   }

   if (u16LocalAcqui_position_pedale_1 < u32LocalAccP_uThdScgSens1_C)
   {
      Ext_bDgoScg_Ped1 = 1;
   }
   else
   {
      Ext_bDgoScg_Ped1 = 0;
   }
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  ACCPACQPOS_vidDiagElecPiste2                               */
/* !Description :  Production des variables bMponRun des diag elec qui sont   */
/*                 conditionn�s exclusivement par le FRM FRM_bInhAccPElDiag et*/
/*                 des bDgo qui sont lev�s en cas de valeur hors plage de     */
/*                 l�acquisition p�dale.                                      */
/* !Number      :  FCT1.6                                                     */
/* !Author      :  F.CHEFFI                                                   */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf argret void GDGAR_bGetFRM(argin uint16 u16channel)boolean;           */
/*  extf argret void ACCPACQPOS_vidPanne2Measurement();                       */
/*  output boolean Ext_bMonRunScpOc_Ped2;                                     */
/*  output boolean Ext_bMonRunScg_Ped2;                                       */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void ACCPACQPOS_vidDiagElecPiste2(void)
{
   boolean bLocalBInhAccPElDiag;


   bLocalBInhAccPElDiag = GDGAR_bGetFRM(FRM_FRM_INHACCPELDIAG);

   if (bLocalBInhAccPElDiag == 0)
   {
      ACCPACQPOS_vidPanne2Measurement();
      Ext_bMonRunScpOc_Ped2 = 1;
      Ext_bMonRunScg_Ped2 = 1;
   }
   else
   {
      Ext_bMonRunScpOc_Ped2 = 0;
      Ext_bMonRunScg_Ped2 = 0;
   }
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  ACCPACQPOS_vidPanne2Measurement                            */
/* !Description :  Le test est effectu� si le bool�en d�inhibition est        */
/*                 positionn� � 0. Le capteur 2 est d�clar� en CC � la tension*/
/*                 batterie si la tension � la sortie du conv A/N est sup � un*/
/*                 seuil;en circuit ouvert ou en CC � la masse si la tension  */
/*                 est inf � un second seuil                                  */
/* !Number      :  FCT1.7                                                     */
/* !Author      :  F.CHEFFI                                                   */
/* !Trace_To    :  PTS_R_6601121_009.001                                      */
/*                 PTS_R_6601121_010.001                                      */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  input uint16 Acqui_position_pedale_2;                                     */
/*  input uint16 AccP_uThdScpSens2_C;                                         */
/*  input uint16 AccP_uThdScgSens2_C;                                         */
/*  output boolean Ext_bDgoScpOc_Ped2;                                        */
/*  output boolean Ext_bDgoScg_Ped2;                                          */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void ACCPACQPOS_vidPanne2Measurement(void)
{
   uint16 u16LocalAcqui_position_pedale_2;
   uint32 u32LocalAccP_uThdScpSens2_C;
   uint32 u32LocalAccP_uThdScgSens2_C;


   VEMS_vidGET(Acqui_position_pedale_2, u16LocalAcqui_position_pedale_2);
   u32LocalAccP_uThdScpSens2_C = (uint32)(AccP_uThdScpSens2_C * 4);
   u32LocalAccP_uThdScgSens2_C= (uint32)(AccP_uThdScgSens2_C * 4);

   if (u16LocalAcqui_position_pedale_2 > u32LocalAccP_uThdScpSens2_C)
   {
      Ext_bDgoScpOc_Ped2 = 1;
   }
   else
   {
      Ext_bDgoScpOc_Ped2 = 0;
   }

   if (u16LocalAcqui_position_pedale_2 < u32LocalAccP_uThdScgSens2_C)
   {
      Ext_bDgoScg_Ped2 = 1;
   }
   else
   {
      Ext_bDgoScg_Ped2 = 0;
   }
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  ACCPACQPOS_vidDoubleFaultAccP                              */
/* !Description :  Le comptage des pannes d�coule si le bool�en d�inhibition  */
/*                 est positionn� � 0.                                        */
/* !Number      :  FCT1.8                                                     */
/* !Author      :  F.CHEFFI                                                   */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  input boolean Ext_bDgoScpOc_Ped1;                                         */
/*  input boolean Ext_bDgoScg_Ped1;                                           */
/*  input boolean Ext_bDgoScpOc_Ped2;                                         */
/*  input boolean Ext_bDgoScg_Ped2;                                           */
/*  output boolean Ext_bDgoDftSenr_AccP;                                      */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void ACCPACQPOS_vidDoubleFaultAccP(void)
{
   if (  (  (Ext_bDgoScpOc_Ped1 != 0)
         || (Ext_bDgoScg_Ped1 != 0))
      && (  (Ext_bDgoScpOc_Ped2 != 0)
         || (Ext_bDgoScg_Ped2 != 0)))
   {
      Ext_bDgoDftSenr_AccP = 1;
   }
   else
   {
      Ext_bDgoDftSenr_AccP = 0;
   }
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  ACCPACQPOS_vidLinearFilterPiste1                           */
/* !Description :  La tension p�dale est lin�aris�e en un ratio (via la carto */
/*                 AccP1_LinPos_Map) puis filtr�e par un par un filtre du     */
/*                 premier ordre                                              */
/* !Number      :  FCT1.9                                                     */
/* !Author      :  F.CHEFFI                                                   */
/* !Trace_To    :  PTS_R_6601121_004.01                                       */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  input uint16 Acqui_position_pedale_1;                                     */
/*  input uint16 AccP1_LinPosBkpt_Map[4];                                     */
/*  input uint16 AccP1_LinPos_Map[4];                                         */
/*  input boolean ACCPACQPOS_bInitFilter1;                                    */
/*  input uint8 AccP1_filter_gain;                                            */
/*  input uint32 ACCPACQPOS_u32FiltrePositionMem1;                            */
/*  output uint16 Pos_pedale_1_result_ad_conv;                                */
/*  output uint16 Aps_1_raw_position;                                         */
/*  output uint32 ACCPACQPOS_u32FiltrePositionMem1;                           */
/*  output boolean ACCPACQPOS_bInitFilter1;                                   */
/*  output uint16 AccP_rAccPSens1;                                            */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void ACCPACQPOS_vidLinearFilterPiste1(void)
{
   uint16 u16LocalAcqui_position_pedale_1;
   uint16 u16LocalPosPedale1ResultAdConv;
   uint16 u16LocalAps_1_raw_position;
   uint16 u16LocalAccP_rAccPSens1;
   uint16 u16LocalCalcPara;

   VEMS_vidGET(Acqui_position_pedale_1, u16LocalAcqui_position_pedale_1);

   u16LocalPosPedale1ResultAdConv =
      (uint16)((uint32)(u16LocalAcqui_position_pedale_1 + 2) / 4);
   u16LocalPosPedale1ResultAdConv =
      (uint16)MATHSRV_udtMIN(u16LocalPosPedale1ResultAdConv, 1024);
   VEMS_vidSET(Pos_pedale_1_result_ad_conv, u16LocalPosPedale1ResultAdConv);

   u16LocalCalcPara =
      MATHSRV_u16CalcParaIncAryU16(AccP1_LinPosBkpt_Map,
                                   u16LocalAcqui_position_pedale_1,
                                   4);
   u16LocalAps_1_raw_position = MATHSRV_u16Interp1d(AccP1_LinPos_Map,
                                                    u16LocalCalcPara);
   u16LocalAps_1_raw_position =
      (uint16)MATHSRV_udtMIN(u16LocalAps_1_raw_position, 1024);
   VEMS_vidSET(Aps_1_raw_position, u16LocalAps_1_raw_position);

   if (ACCPACQPOS_bInitFilter1 == 0)
   {
      u16LocalAccP_rAccPSens1 = u16LocalAps_1_raw_position;
      ACCPACQPOS_u32FiltrePositionMem1 =
         (uint32)(u16LocalAccP_rAccPSens1 * 256);
      ACCPACQPOS_bInitFilter1 = 1;
   }
   else
   {
      u16LocalAccP_rAccPSens1 =
         MATHSRV_u16FirstOrderFilterGu8(AccP1_filter_gain,
                                        &ACCPACQPOS_u32FiltrePositionMem1,
                                        u16LocalAps_1_raw_position);
   }

   VEMS_vidSET(AccP_rAccPSens1, u16LocalAccP_rAccPSens1);
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  ACCPACQPOS_vidLinearFilterPiste2                           */
/* !Description :  La tension p�dale est lin�aris�e en un ratio (via la carto */
/*                 AccP2_LinPos_Map) puis filtr�e par un par un filtre du     */
/*                 premier ordre                                              */
/* !Number      :  FCT1.10                                                    */
/* !Author      :  F.CHEFFI                                                   */
/* !Trace_To    :  PTS_R_6601121_005.01                                       */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  input uint16 Acqui_position_pedale_2;                                     */
/*  input uint16 AccP2_LinPosBkpt_Map[4];                                     */
/*  input uint16 AccP2_LinPos_Map[4];                                         */
/*  input boolean ACCPACQPOS_bInitFilter2;                                    */
/*  input uint16 Aps_2_raw_position;                                          */
/*  input uint8 AccP2_filter_gain;                                            */
/*  input uint32 ACCPACQPOS_u32FiltrePositionMem2;                            */
/*  output uint16 Pos_pedale_2_result_ad_conv;                                */
/*  output uint16 Aps_2_raw_position;                                         */
/*  output uint32 ACCPACQPOS_u32FiltrePositionMem2;                           */
/*  output boolean ACCPACQPOS_bInitFilter2;                                   */
/*  output uint16 AccP_rAccPSens2;                                            */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void ACCPACQPOS_vidLinearFilterPiste2(void)
{
   uint16 u16LocalAcqui_position_pedale_2;
   uint16 u16LocalPosPedale2ResultAdConv;
   uint16 u16LocalAps_2_raw_position;
   uint16 u16LocalAccP_rAccPSens2;
   uint16 u16LocalCalcPara;

   VEMS_vidGET(Acqui_position_pedale_2, u16LocalAcqui_position_pedale_2);

   u16LocalPosPedale2ResultAdConv =
      (uint16)((uint32)(u16LocalAcqui_position_pedale_2 + 2) / 4);
   u16LocalPosPedale2ResultAdConv =
      (uint16)MATHSRV_udtMIN(u16LocalPosPedale2ResultAdConv, 1024);
   VEMS_vidSET(Pos_pedale_2_result_ad_conv, u16LocalPosPedale2ResultAdConv);

   u16LocalCalcPara =
      MATHSRV_u16CalcParaIncAryU16(AccP2_LinPosBkpt_Map,
                                   u16LocalAcqui_position_pedale_2,
                                   4);
   u16LocalAps_2_raw_position = MATHSRV_u16Interp1d(AccP2_LinPos_Map,
                                                    u16LocalCalcPara);
   Aps_2_raw_position =
      (uint16)MATHSRV_udtMIN(u16LocalAps_2_raw_position, 1024);

   if (ACCPACQPOS_bInitFilter2 == 0)
   {
      u16LocalAccP_rAccPSens2 = Aps_2_raw_position;
      ACCPACQPOS_u32FiltrePositionMem2 =
         (uint32)(u16LocalAccP_rAccPSens2 * 256);
      ACCPACQPOS_bInitFilter2 = 1;
   }
   else
   {
      u16LocalAccP_rAccPSens2 =
         MATHSRV_u16FirstOrderFilterGu8(AccP2_filter_gain,
                                        &ACCPACQPOS_u32FiltrePositionMem2,
                                        Aps_2_raw_position);
   }

   VEMS_vidSET(AccP_rAccPSens2, u16LocalAccP_rAccPSens2);
}
/*---------------------------- end of file -----------------------------------*/