/***************************** <AUTO_FILE_HEADER> *****************************/
/******************************************************************************/
/*                                                                            */
/* !Layer           : APPLI                                                   */
/*                                                                            */
/* !Component       : ENGRUNST                                                */
/* !Description     : ENGRUNST component                                      */
/*                                                                            */
/* !Module          : ENGRUNST                                                */
/* !Description     : Etat moteur tournant                                    */
/*                                                                            */
/* !File            : ENGRUNST_FCT2.C                                         */
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
/*   1 / ENGRUNST_vidDiag                                                     */
/*   2 / ENGRUNST_vidRstAcvTrqLim                                             */
/*                                                                            */
/* !Reference   : PTS_DOC_5489080 / 01                                        */
/*                                                                            */
/**************************** </AUTO_FILE_HEADER> *****************************/
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::   P:/EB_DT/LOG/ASW/Ref/modules/ENGST/ENGRUNST/ENGRUNST_FCT2.C_v$*/
/* $Revision::   1.3      $$Author::   mbenfrad       $$Date::   13 Sep 2013 $*/
/* $Author::   mbenfrad                               $$Date::   13 Sep 2013 $*/
/******************************************************************************/
/* !VnrOff  : Names imposed by the customer                                   */
/******************************************************************************/
/* !CompReq :                                                                 */
/******************************************************************************/

#include "STD_TYPES.H"
#include "ENGRUNST.H"
#include "ENGRUNST_L.H"
#include "ENGRUNST_IM.H"
#include "VEMS.H"

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  ENGRUNST_vidDiag                                           */
/* !Description :  Lorsque le compteur de temps cumul� pass� en sur-r�gime est*/
/*                 sup�rieur � un seuil calibrable et que l�on a switch� sur  */
/*                 la carto EngSt_EngSpdLimHiThdMecProt_M pour le calcul du   */
/*                 r�gime seuil d�activation de la fonction sur-r�gime.       */
/* !Number      :  FCT2.1                                                     */
/* !Author      :  DEMNI MOHAMED                                              */
/* !Trace_To    :  VEMS_E_08_05237_016.01                                     */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  input boolean ESLim_bAcvRedESLimProtMec;                                  */
/*  input boolean ESLim_bAcvRedESLimProtMecKOn;                               */
/*  output boolean EngSt_bDgoRedESLim;                                        */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void ENGRUNST_vidDiag(void)
{
   if (  (ESLim_bAcvRedESLimProtMec != 0 )
      && (ESLim_bAcvRedESLimProtMecKOn !=0 ))
   {
      EngSt_bDgoRedESLim = 1;
   }
   else
   {
      EngSt_bDgoRedESLim = 0;
   }
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  ENGRUNST_vidRstAcvTrqLim                                   */
/* !Description :  Lorsque la limitation du sur-r�gime par la couple est      */
/*                 effective, la demande d�activation par le couple doit �tre */
/*                 r�initialis�e � 0, mais la strat�gie doit rester activ�e   */
/*                 tant que EngSt_bEntryOVERSPEED_FCO = 1.                    */
/* !Number      :  FCT2.2                                                     */
/* !Author      :  ODEMNI MOHAMED                                             */
/* !Trace_To    :  VEMS_R_08_05237_014.01                                     */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  input boolean ESLim_bAcvEngSpdLim;                                        */
/*  output boolean ESLim_bAcvTrqLim;                                          */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void ENGRUNST_vidRstAcvTrqLim(void)
{
   boolean bLocalESLim_bAcvEngSpdLim;


   VEMS_vidGET(ESLim_bAcvEngSpdLim, bLocalESLim_bAcvEngSpdLim);
   if (bLocalESLim_bAcvEngSpdLim != 0)
   {
      VEMS_vidSET(ESLim_bAcvTrqLim, 0);
   }
}
/*------------------------------- End of file --------------------------------*/