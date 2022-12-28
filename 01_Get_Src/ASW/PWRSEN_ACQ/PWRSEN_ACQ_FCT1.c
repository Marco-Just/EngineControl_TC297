/***************************** <AUTO_FILE_HEADER> *****************************/
/******************************************************************************/
/*                                                                            */
/* !Layer           : APPLI                                                   */
/*                                                                            */
/* !Component       : PWRSEN_ACQ                                              */
/* !Description     : PWRSEN_ACQ Component                                    */
/*                                                                            */
/* !Module          : PWRSEN_ACQ                                              */
/* !Description     : ACQUISITION TENSION ALIMENTATION CAPTEURS               */
/*                                                                            */
/* !File            : PWRSEN_ACQ_FCT1.C                                       */
/*                                                                            */
/* !Scope           : Public                                                  */
/*                                                                            */
/* !Target          : 32BIT                                                   */
/*                                                                            */
/* !Vendor          : Valeo VEMS                                              */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT 2008 VALEO                                                       */
/* all rights reserved                                                        */
/*                                                                            */
/******************************************************************************/
/*   1 / PWRSEN_ACQ_vidAcqDiagVRawMeas1                                       */
/*   2 / PWRSEN_ACQ_vidAcquisition1                                           */
/*   3 / PWRSEN_ACQ_vidDetectFailPwSp1Sdf                                     */
/*   4 / PWRSEN_ACQ_vidDegradModePwSp1Sdf                                     */
/*   5 / PWRSEN_ACQ_vidDiagVRawMes1                                           */
/*   6 / PWRSEN_ACQ_vidInitVEndValMeas1                                       */
/*   7 / PWRSEN_ACQ_vidVEndValMeas1                                           */
/*                                                                            */
/* !Reference   : PTS_DOC_6538484 / 01                                        */
/*                                                                            */
/**************************** </AUTO_FILE_HEADER> *****************************/
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::   P:/EBx_V46/LDA/Ref/modules/PWRSEN_ACQ/PWRSEN_ACQ_FCT1.C_v    $*/
/* $Revision::   1.5      $$Author::   fsanchez2      $$Date::   27 May 2014 $*/
/* $Author::   fsanchez2                              $$Date::   27 May 2014 $*/
/******************************************************************************/
/* !VnrOff  : Names imposed by the customer                                   */
/******************************************************************************/
/* !CompReq :                                                                 */
/******************************************************************************/

#include "STD_TYPES.h"
#include "MATHSRV.h"
#include "PWRSEN_ACQ.h"
#include "PWRSEN_ACQ_L.h"
#include "PWRSEN_ACQ_IM.h"
#include "VEMS.h"

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  PWRSEN_ACQ_vidAcqDiagVRawMeas1                             */
/* !Description :  Lorsque le d�faut sur l'ALIM 1 est d�tect�, on fige la     */
/*                 valeur envoy�e au reste du CMM � la  derni�re valeur       */
/*                 valide.  Aussi, lorsqu'il est confirm� on applique une     */
/*                 valeur par d�faut est calibrable � la sortie du  module    */
/*                 d'acquisition.                                             */
/* !Number      :  FCT1.1                                                     */
/* !Author      :  F.CHEFFI                                                   */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf argret void PWRSEN_ACQ_vidAcquisition1();                            */
/*  extf argret void PWRSEN_ACQ_vidDetectFailPwSp1Sdf();                      */
/*  extf argret void PWRSEN_ACQ_vidDegradModePwSp1Sdf();                      */
/*  output boolean Pwr_bMonRunORng_vMes1_Sfty;                                */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void PWRSEN_ACQ_vidAcqDiagVRawMeas1(void)
{
   PWRSEN_ACQ_vidAcquisition1();
   PWRSEN_ACQ_vidDetectFailPwSp1Sdf();
   PWRSEN_ACQ_vidDegradModePwSp1Sdf();
   Pwr_bMonRunORng_vMes1_Sfty = 1;
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  PWRSEN_ACQ_vidAcquisition1                                 */
/* !Description :  La valeur lue sur le convertisseur est mise � l'�chelle en */
/*                 fonction de la sortie du TLE 4471 (tension de r�f�rence    */
/*                 divis�e par 2).                                            */
/* !Number      :  FCT1.2                                                     */
/* !Author      :  F.CHEFFI                                                   */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  input uint16 Tension_alimentation_capteur_1;                              */
/*  output uint16 Tension_alimentation_1_mesuree;                             */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void PWRSEN_ACQ_vidAcquisition1(void)
{
   uint16 u16LocalTension_alim_1_mesuree;
   uint16 u16LocalTension_alim_capteur_1;


   VEMS_vidGET(Tension_alimentation_capteur_1, u16LocalTension_alim_capteur_1);

   u16LocalTension_alim_1_mesuree =
      (uint16)((uint32)(u16LocalTension_alim_capteur_1 + 2) / 4);
   u16LocalTension_alim_1_mesuree =
      (uint16)MATHSRV_udtMIN(u16LocalTension_alim_1_mesuree, 1278);

   VEMS_vidSET(Tension_alimentation_1_mesuree, u16LocalTension_alim_1_mesuree);
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  PWRSEN_ACQ_vidDetectFailPwSp1Sdf                           */
/* !Description :  La tension mesur�e est compar�e aux seuils tol�rables pour */
/*                 la SdF (possibilit� de  reconstruire les informations      */
/*                 papillon et p�dale).                                       */
/* !Number      :  FCT1.3                                                     */
/* !Author      :  F.CHEFFI                                                   */
/* !Trace_To    :  VEMS_R_08_05190_001.01                                     */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  input uint16 Tension_alimentation_1_mesuree;                              */
/*  input uint16 Tension_alim_capteur_maxi_sdf;                               */
/*  input uint16 Tension_alim_capteur_mini_sdf;                               */
/*  output boolean Pwr_bDgoORng_vMes1_Sfty;                                   */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void PWRSEN_ACQ_vidDetectFailPwSp1Sdf(void)
{
   uint16 u16LocalTension_alim_1_mesuree;


   VEMS_vidGET(Tension_alimentation_1_mesuree, u16LocalTension_alim_1_mesuree);

   if (  (u16LocalTension_alim_1_mesuree >= Tension_alim_capteur_maxi_sdf)
      || (u16LocalTension_alim_1_mesuree <= Tension_alim_capteur_mini_sdf) )
   {
      Pwr_bDgoORng_vMes1_Sfty = 1;
   }
   else
   {
      Pwr_bDgoORng_vMes1_Sfty = 0;
   }
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  PWRSEN_ACQ_vidDegradModePwSp1Sdf                           */
/* !Description :  C'est cette valeur brute qui est utilis�e par la s�ret� de */
/*                 fonctionnement. Si elle est hors des seuils tol�rables, on */
/*                 fige la valeur � sa valeur pr�c�dente. Lorsque la panne est*/
/*                 m�moris�e, le mode d�grad� est assur� par la  s�ret� de    */
/*                 fonctionnement.                                            */
/* !Number      :  FCT1.4                                                     */
/* !Author      :  F.CHEFFI                                                   */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  input uint16 Tension_alimentation_1_mesuree;                              */
/*  input boolean Pwr_bDgoORng_vMes1_Sfty;                                    */
/*  output uint16 Tension_alimentation_1_brute;                               */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void PWRSEN_ACQ_vidDegradModePwSp1Sdf(void)
{
   uint16 u16LocalTension_alim_1_mesuree;


   VEMS_vidGET(Tension_alimentation_1_mesuree, u16LocalTension_alim_1_mesuree);

   if (Pwr_bDgoORng_vMes1_Sfty == 0)
   {
      u16LocalTension_alim_1_mesuree =
         (uint16)MATHSRV_udtMIN(u16LocalTension_alim_1_mesuree, 1278);
      VEMS_vidSET(Tension_alimentation_1_brute, u16LocalTension_alim_1_mesuree);
   }
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  PWRSEN_ACQ_vidDiagVRawMes1                                 */
/* !Description :  La d�tection du d�faut d�crite ici est utilis�e pour les   */
/*                 capteurs qui ne tol�rent pas d'�cart  important de la      */
/*                 tension d'alim capteur (mesure pression, ...).             */
/* !Number      :  FCT1.5                                                     */
/* !Author      :  F.CHEFFI                                                   */
/* !Trace_To    :  VEMS_R_08_05190_002.01                                     */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  input uint16 Tension_alimentation_1_brute;                                */
/*  input uint16 Tension_alim_capteur_maxi;                                   */
/*  input uint16 Tension_alim_capteur_mini;                                   */
/*  output boolean Pwr_bDgoORng_vMes1;                                        */
/*  output boolean Pwr_bMonRunORng_vMes1;                                     */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void PWRSEN_ACQ_vidDiagVRawMes1(void)
{
   uint16 u16LocalTension_alim_1_brute;


   VEMS_vidGET(Tension_alimentation_1_brute, u16LocalTension_alim_1_brute);

   if (  (u16LocalTension_alim_1_brute >= Tension_alim_capteur_maxi)
      || (u16LocalTension_alim_1_brute <= Tension_alim_capteur_mini) )
   {
      Pwr_bDgoORng_vMes1 = 1;
   }
   else
   {
      Pwr_bDgoORng_vMes1 = 0;
   }

   Pwr_bMonRunORng_vMes1 = 1;
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  PWRSEN_ACQ_vidInitVEndValMeas1                             */
/* !Description :  Lorsque l�on a une panne pr�sente, la valeur fournie en    */
/*                 sortie est la valeur par d�faut.                           */
/* !Number      :  FCT1.6                                                     */
/* !Author      :  F.CHEFFI                                                   */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  input uint16 Tension_alimentation_1_brute;                                */
/*  input boolean Pwr_bDgoORng_vMes1;                                         */
/*  input uint16 Tension_alim_par_defaut;                                     */
/*  output uint16 Tension_alimentation_1;                                     */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void PWRSEN_ACQ_vidInitVEndValMeas1(void)
{
   uint16 u16LocalTension_alim_1_brute;
   uint16 u16LocalTension_alimentation_1;


   VEMS_vidGET(Tension_alimentation_1_brute, u16LocalTension_alim_1_brute);

   if (Pwr_bDgoORng_vMes1 != 0)
   {
      u16LocalTension_alimentation_1 =
         (uint16)MATHSRV_udtMIN(Tension_alim_par_defaut, 1278);
   }
   else
   {
      u16LocalTension_alimentation_1 =
         (uint16)MATHSRV_udtMIN(u16LocalTension_alim_1_brute,1278);
   }
   VEMS_vidSET(Tension_alimentation_1, u16LocalTension_alimentation_1);
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  PWRSEN_ACQ_vidVEndValMeas1                                 */
/* !Description :  Lorsque le d�faut sur l'ALIM 1 est d�tect�, on fige la     */
/*                 valeur envoy�e au reste du CMM � la  derni�re valeur       */
/*                 valide.  Aussi, lorsqu'il est confirm� on applique une     */
/*                 valeur par d�faut est calibrable � la sortie du  module    */
/*                 d'acquisition.                                             */
/* !Number      :  FCT1.7                                                     */
/* !Author      :  F.CHEFFI                                                   */
/* !Trace_To    :  VEMS_R_08_05190_003.01                                     */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  extf argret void GDGAR_bGetFRM(argin uint16 u16IndexFRM)boolean ;         */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  input uint16 Tension_alimentation_1_brute;                                */
/*  input uint16 Tension_alim_par_defaut;                                     */
/*  input boolean Pwr_bDgoORng_vMes1;                                         */
/*  output uint16 Tension_alimentation_1;                                     */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void PWRSEN_ACQ_vidVEndValMeas1(void)
{
   boolean bLocalAcvPwrSenMes1SftyMod;
   uint16  u16LocalTension_alim_1_brute;
   uint16  u16LocalTension_alimentation_1;


   VEMS_vidGET(Tension_alimentation_1_brute, u16LocalTension_alim_1_brute);


   bLocalAcvPwrSenMes1SftyMod = GDGAR_bGetFRM(FRM_FRM_ACVPWRSENMES1SFTYMOD);
   if (bLocalAcvPwrSenMes1SftyMod != 0)
   {
      u16LocalTension_alimentation_1 =
         (uint16)MATHSRV_udtMIN(Tension_alim_par_defaut, 1278);
      VEMS_vidSET(Tension_alimentation_1, u16LocalTension_alimentation_1);
   }
   else
   {
      if (Pwr_bDgoORng_vMes1 == 0)
      {
         u16LocalTension_alimentation_1 =
            (uint16)MATHSRV_udtMIN(u16LocalTension_alim_1_brute,1278);
         VEMS_vidSET(Tension_alimentation_1, u16LocalTension_alimentation_1);
      }
   }
}

/*-------------------------------- end of file -------------------------------*/