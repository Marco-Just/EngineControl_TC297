/***************************** <AUTO_FILE_HEADER> *****************************/
/******************************************************************************/
/*                                                                            */
/* !Layer           : APPLI                                                   */
/*                                                                            */
/* !Component       : PWRLMRK                                                 */
/* !Description     : PWRLMRK Component                                       */
/*                                                                            */
/* !Module          : PWRLMRK                                                 */
/* !Description     : Power Latch Marker                                      */
/*                                                                            */
/* !File            : PWRLMRK_FCT1.c                                          */
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
/*   1 / PWRLMRK_vidEveRstPwrlMrk                                             */
/*   2 / PWRLMRK_vidInitPwrlMrk                                               */
/*   3 / PWRLMRK_vidPwrlMrk                                                   */
/*   4 / PWRLMRK_vidEepromWrOfPwrlMrk                                         */
/*   5 / PWRLMRK_vidDiagPwrlMrk                                               */
/*                                                                            */
/* !Reference   : V02 NT 11 04404 / 01                                        */
/* !OtherRefs   : VEMS V02 ECU#059680                                         */
/*                                                                            */
/**************************** </AUTO_FILE_HEADER> *****************************/
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::   P:/EB_DT/LOG/ASW/Ref/modules/PWRLMRK/PWRLMRK_FCT1.c_v        $*/
/* $Revision::   1.4      $$Author::   mbenfrad       $$Date::   21 Jun 2013 $*/
/* $Author::   mbenfrad                               $$Date::   21 Jun 2013 $*/
/******************************************************************************/
/* !VnrOff  : Names imposed by the customer                                   */
/******************************************************************************/
/* !CompReq :                                                                 */
/******************************************************************************/


#include "STD_TYPES.h"
#include "PWRLMRK.h"
#include "PWRLMRK_L.h"
#include "PWRLMRK_IM.h"
#include "GDGAR.h"
#include "VEMS.h"
#include "NVMSRV.h"



/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  PWRLMRK_vidEveRstPwrlMrk                                   */
/* !Description :  Dans le reset, le diagnostic est d�clench� si la valeur    */
/*                 �crite dans l'EEPROM du "EcuSt_SrvPwrlSt" est 0 (premier   */
/*                 PWL n'est pas r�alis�). Si la valeur est d�finie � 1 (PWL  */
/*                 r�alis�) le diagnostic ne sera pas lanc�.                  */
/* !Number      :  FCT1.1                                                     */
/* !Author      :  MBENFRADJ                                                  */
/* !Trace_To    :  VEMS_E_11_04404_001.01                                     */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  input boolean EcuSt_SrvPwrlSt;                                            */
/*  output boolean Srv_bMonRunPwrlMrk;                                        */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void PWRLMRK_vidEveRstPwrlMrk(void)
{
   boolean  bLocalEcuSt_SrvPwrlSt;


   VEMS_vidGET(EcuSt_SrvPwrlSt, bLocalEcuSt_SrvPwrlSt);
   if (bLocalEcuSt_SrvPwrlSt != 0)
   {
      Srv_bMonRunPwrlMrk = 0;
   }
   else
   {
      Srv_bMonRunPwrlMrk = 1;
   }
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  PWRLMRK_vidInitPwrlMrk                                     */
/* !Description :  Le drapeau �EcuSt_SrvPwrlSt�  est mis � 0 quand une demande*/
/*                 de r�initialiser le marqueur power latch est transmise par */
/*                 l'outil AFT�Srv_EveRcReinit_PwrlMrk '= 1). Sur cet         */
/*                 �v�nement,on �crit l'�tat du le marqueur power latch (0 =  */
/*                 Non �alis�) dans l'EEPROM.                                 */
/* !Number      :  FCT1.2                                                     */
/* !Author      :  MBENFRADJ                                                  */
/* !Trace_To    :  VEMS_E_11_04404_002.01                                     */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  extf argret void NVMSRV_vidWrite(argin NVMSRV_tudtObjectList udtObject,   */
/* argin boolean bMode);                                                      */
/*  output boolean Srv_bMonRunPwrlMrk;                                        */
/*  output boolean EcuSt_SrvPwrlSt;                                           */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void PWRLMRK_vidInitPwrlMrk(void)
{
   Srv_bMonRunPwrlMrk = 1;
   VEMS_vidSET(EcuSt_SrvPwrlSt, 0);
   NVMSRV_vidWrite(NVMSRV_udtOBJ_ECUSTSRVPWRLST, NVMSRV_bSAVE_NOW);
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  PWRLMRK_vidPwrlMrk                                         */
/* !Description :  L'�v�nement �EcuSt_EveFct_WaitForPwrl� est lanc� de mani�re*/
/*                 r�currente lors de la phase de power latch.                */
/* !Number      :  FCT1.3                                                     */
/* !Author      :  MBENFRADJ                                                  */
/* !Trace_To    :  VEMS_E_11_04404_003.01                                     */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  extf argret void PWRLMRK_vidEepromWrOfPwrlMrk();                          */
/*  input boolean EcuSt_FinWrEepromTemp;                                      */
/*  input boolean Srv_bMonRunPwrlMrk;                                         */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void PWRLMRK_vidPwrlMrk(void)
{
   boolean  bLocalEcuSt_FinWrEepromTemp;


   VEMS_vidGET(EcuSt_FinWrEepromTemp, bLocalEcuSt_FinWrEepromTemp);
   if (  (bLocalEcuSt_FinWrEepromTemp != 0)
      && (Srv_bMonRunPwrlMrk != 0))
   {
      PWRLMRK_vidEepromWrOfPwrlMrk();
   }
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  PWRLMRK_vidEepromWrOfPwrlMrk                               */
/* !Description :  Si l'�criture dans l'EEPROM est finie                      */
/*                 (EcuSt_FinWrEepromTemp = 1), l'�tat du marqueur de power   */
/*                 latch est positionn� sur r�alis� (Ecust_SrvPwrlSt = 1). Cet*/
/*                 �tat est �crit directement dans la m�moire EEPROM.         */
/* !Number      :  FCT1.4                                                     */
/* !Author      :  MBENFRADJ                                                  */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  extf argret void NVMSRV_vidWrite(argin NVMSRV_tudtObjectList udtObject,   */
/* argin boolean bMode);                                                      */
/*  output boolean EcuSt_SrvPwrlSt;                                           */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void PWRLMRK_vidEepromWrOfPwrlMrk(void)
{
   VEMS_vidSET(EcuSt_SrvPwrlSt, 1);
   NVMSRV_vidWrite(NVMSRV_udtOBJ_ECUSTSRVPWRLST, NVMSRV_bSAVE_NOW);
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  PWRLMRK_vidDiagPwrlMrk                                     */
/* !Description :  Si l'�tat de marqueur de power latch : EcuSt_SrvPwrlSt est */
/*                 0 (pas r�alis�), alors par d�faut un signal est envoy�     */
/*                 pour indiquer que le power latch n'a pas encore �t� r�alis�*/
/*                 avec succ�s, et MIL est allum�.                            */
/* !Number      :  FCT1.5                                                     */
/* !Author      :  MBENFRADJ                                                  */
/* !Trace_To    :  VEMS_E_11_04404_004.01                                     */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  input boolean EcuSt_SrvPwrlSt;                                            */
/*  output boolean Srv_bDgoPwrlMrk;                                           */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void PWRLMRK_vidDiagPwrlMrk(void)
{
   boolean bLocalEcuSt_SrvPwrlSt;


   VEMS_vidGET(EcuSt_SrvPwrlSt, bLocalEcuSt_SrvPwrlSt);
   if (bLocalEcuSt_SrvPwrlSt != 0)
   {
      Srv_bDgoPwrlMrk = 0;
   }
   else
   {
      Srv_bDgoPwrlMrk = 1;
   }
}
/*------------------------------end of file-----------------------------------*/