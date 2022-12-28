/***************************** <AUTO_FILE_HEADER> *****************************/
/******************************************************************************/
/*                                                                            */
/* !Layer           : APPLI                                                   */
/*                                                                            */
/* !Component       : DCM_MANU                                                */
/* !Description     : DCM_MANU Component                                      */
/*                                                                            */
/* !Module          : DCM_MANU                                                */
/* !Description     : Code Manuel du DCM                                      */
/*                                                                            */
/* !File            : DCM_MANU_POSTEQUIMENT.C                                 */
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
/*   1 / DCM_MANU_PostEquipementWriteReqInit                                  */
/*   2 / DCM_MANU_WritePostEquipementMngt                                     */
/*                                                                            */
/* !Reference   : PTS_DOC_5074345 / 4                                         */
/*                                                                            */
/**************************** </AUTO_FILE_HEADER> *****************************/
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::   I:/PROJETS/EBX6_2/LOG/ASW/REF/MODULES/DCM_CONFIG/DCM_MANU/DCM$*/
/* $Revision::   1.2      $$Author::   pbakabad       $$Date::   22 May 2014 $*/
/* $Author::   pbakabad                               $$Date::   22 May 2014 $*/
/******************************************************************************/
/* !VnrOff  : Names imposed by the customer                                   */
/******************************************************************************/
/* !CompReq :                                                                 */
/******************************************************************************/

#include "STD_TYPES.h"
#include "DCM_MANU.h"
#include "DCM_MANU_L.h"
#include "DCM_MANU_IM.h"

#include "VEMS.H"




/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  DCM_MANU_PostEquipementWriteReqInit                        */
/* !Description :  Fonction initialisant le Post Equipement                   */
/* !Number      :  POSTEQUIPEMENT.1                                           */
/* !Author      :  PBAKABAD                                                   */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  extf VEMS_vidSET1DArrayElement(argout, argout, argio);                    */
/*  input bool SRV_TELEACCESS_TELE_ENABLE;                                    */
/*  input uint8 Srv_PostEquDataSize_C;                                        */
/*  output st58 Srv_stTeleAccessStatus;                                       */
/*  output bool SRV_TELEACCESS_TELE_ENABLE;                                   */
/*  output boolean Srv_bPostEquWrChck;                                        */
/*  output uint8 Srv_prmPostEquRawData[2];                                    */
/*  output uint8 Srv_ctPostEquWrSt;                                           */
/*  output uint8 Srv_stPostEquWrChck;                                         */
/*  output uint8 Srv_stPostEquWrSt;                                           */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/* !Task     : task_name                                                      */
/* !Trigger  : Time (example: 256ms) or Event (example: key_off_on)           */
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void DCM_MANU_PostEquipementWriteReqInit(void)
{
   uint32 u8LocalIdx;

   VEMS_vidSET(Srv_stTeleAccessStatus, SRV_TELEACCESS_TELE_ENABLE);
   VEMS_vidSET(Srv_bPostEquWrChck, TRUE);

   for( u8LocalIdx = 0;
        u8LocalIdx < (uint32)Srv_PostEquDataSize_C;
        u8LocalIdx++ )
   {
      VEMS_vidSET1DArrayElement(Srv_prmPostEquRawData,u8LocalIdx,0xFF);
   }

   Srv_ctPostEquWrSt = 0;
   Srv_stPostEquWrChck = WAIT_WRITING;
   Srv_stPostEquWrSt = 0;
}



/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  DCM_MANU_WritePostEquipementMngt                           */
/* !Description :  Fonction g�rant l'�criture du Post Equipement              */
/* !Number      :  POSTEQUIPEMENT.2                                           */
/* !Author      :  PBAKABAD                                                   */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  extf argret Std_ReturnType  DCM_MANU_CheckADCCondition(argin uint8        */
/* SrvType, argout Dcm_NegativeResponseCodeType *ErrorCode);                  */
/*  extf argret Std_ReturnType  DCM_MANU_CheckVehicleCondition(argout         */
/* Dcm_NegativeResponseCodeType *ErrorCode);                                  */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  extf VEMS_vidSET1DArray(argout, argout, argio);                           */
/*  extf argret void DCM_MANU_SrvEvePostEquWrt();                             */
/*  extf argret uint8  NVMSRV_u8WriteStatus(argin NVMSRV_tudtObjectList       */
/* udtObject);                                                                */
/*  extf argret void DCM_MANU_EveErrPostEquWr();                              */
/*  extf argret void SWFAIL_vidSoftwareErrorHook();                           */
/*  extf argret void DCM_MANU_PostEquipementWriteReqInit();                   */
/*  input uint8 Srv_stPostEquEcuStatus;                                       */
/*  input boolean Srv_bPostEquDone;                                           */
/*  input uint8 Srv_PostEquDataSize_C;                                        */
/*  input bool SRV_TELEACCESS_PRGM_POSTEQU;                                   */
/*  input uint8 Srv_stPostEquWrChck;                                          */
/*  input boolean DCM_MANU_bSaEnable;                                         */
/*  input boolean Srv_bInhSAFstWrPosEq_C;                                     */
/*  input bool SRV_TELEACCESS_IDLE;                                           */
/*  input bool SRV_TELEACCESS_TELE_ENABLE;                                    */
/*  input uint8 Srv_stPostEquWrSt;                                            */
/*  input uint8 Srv_ctPostEquWrSt;                                            */
/*  input uint8 Srv_ctPostEquWrSt_C;                                          */
/*  output st58 Srv_stTeleAccessStatus;                                       */
/*  output bool SRV_TELEACCESS_PRGM_POSTEQU;                                  */
/*  output uint8 Srv_prmPostEquRawData[2];                                    */
/*  output uint8 Srv_PostEquDataSize_C;                                       */
/*  output boolean Srv_bPostEquWrChck;                                        */
/*  output uint8 Srv_stPostEquWrChck;                                         */
/*  output uint8 Srv_ctPostEquWrSt;                                           */
/*  output bool SRV_TELEACCESS_IDLE;                                          */
/*  output bool SRV_TELEACCESS_TELE_ENABLE;                                   */
/*  output uint8 Srv_stPostEquWrSt;                                           */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/* !Task     : task_name                                                      */
/* !Trigger  : Time (example: 256ms) or Event (example: key_off_on)           */
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
Std_ReturnType DCM_MANU_WritePostEquipementMngt
(
   uint8* Data_in,
   uint16 DataLength_in,
   Dcm_OpStatusType OpStatus_in,
   Dcm_NegativeResponseCodeType* ErrorCode_out
)
{
   uint8                         u8LocalSrv_stPostEquEcuStatus;
   Dcm_NegativeResponseCodeType  LocalErrorCode;
   Std_ReturnType                u8localreturn;
   Std_ReturnType                u8localtmp;
   boolean                       bLocalSrv_bPostEquDone;

   VEMS_vidGET(Srv_stPostEquEcuStatus, u8LocalSrv_stPostEquEcuStatus);
   VEMS_vidGET(Srv_bPostEquDone, bLocalSrv_bPostEquDone);

   /* premier appel par le DCM */
   if( DCM_INITIAL == OpStatus_in )
   {
      if( DataLength_in != (uint16)Srv_PostEquDataSize_C )
      {
         /* incorrectMessageLengthOrInvalidFormat */
         LocalErrorCode = DCM_E_INCORRECTLENGTH;
         u8localreturn = E_NOT_OK;
      }
      else
      {
         if(u8LocalSrv_stPostEquEcuStatus != SRV_POSTEQUECU_WAIT)
         {
            /* securityAccessDenied */
            LocalErrorCode = DCM_E_SECURITYACCESSDENIED;
            u8localreturn = E_NOT_OK;
         }
         else
         {
            /* Test des conditions ADC */
            u8localtmp = DCM_MANU_CheckADCCondition(SRV_LAMBDA,&LocalErrorCode);
            if( E_OK == u8localtmp )
            {
               /* Si les conditions sont bonnes */
               u8localtmp = DCM_MANU_CheckVehicleCondition(&LocalErrorCode);
               if( E_OK == u8localtmp )
               {
                  VEMS_vidSET(Srv_stTeleAccessStatus,
                                                SRV_TELEACCESS_PRGM_POSTEQU);

                  VEMS_vidSET1DArray(Srv_prmPostEquRawData,
                                       (uint8)(Srv_PostEquDataSize_C),Data_in);

                  /* Changement du check */
                  VEMS_vidSET(Srv_bPostEquWrChck, FALSE);

                  /* Initialisation de l'automate Srv_stPostEquWrChck */
                  Srv_stPostEquWrChck = WAIT_WRITING;

                  /* Initialisation du fonctionnel PostEquipement */
                  DCM_MANU_SrvEvePostEquWrt();

                  /* Fin du premier appel, le Post Equipement est lanc� et le
                     DCM rend la main */
                  u8localreturn = E_PENDING;

                  /* Initialisation du code d'erreur � 0 mais il ne sera
                  pas utilis� par le DCM */
                  LocalErrorCode = 0x00;
               }
               else
               {
                  /* Mauvaises conditions vehicule */
                  u8localreturn = u8localtmp;
                  /* LocalErrorCode = 0xXX */
               }
            }
            else
            {
               /* Mauvaises conditions ADC */
               u8localreturn = u8localtmp;
               /* LocalErrorCode = 0xXX */
            }
         }
      }
   }
   /* poursuite de l'action en cours suite main rendu par DCM � la cam */
   else if( DCM_PENDING == OpStatus_in )
   {
      switch( Srv_stPostEquWrChck )
      {
         /* Cet �tat teste si la fonction Post Equipement a lanc� l'�criture des
         donn�es */
         case WAIT_WRITING:
         /* test de l'�tat de la fonction Post Equipement */
         if( SRV_POSTEQUECU_WRITE == u8LocalSrv_stPostEquEcuStatus )
         {
            /* l��tape suivante est la v�rification de la fin d��criture */
            Srv_stPostEquWrChck = WAIT_WRITE_STATUS;
            /* Initialisation du compteur pour tester la fin d��criture */
            Srv_ctPostEquWrSt = 0;
            /* La fonction Post Equipement n�est plus bloqu�e en writing */
            VEMS_vidSET(Srv_bPostEquWrChck, TRUE);
            /* Le DCM rend la main avant de passer dans l��tat suivant */
            u8localreturn = E_PENDING;
            /* Initialisation du code d'erreur � 0 mais il ne sera
            pas utilis� par le DCM */
            LocalErrorCode = 0x00;
         }
         else
         {
            if( SRV_POSTEQUECU_DATANOK == u8LocalSrv_stPostEquEcuStatus )
            {
               /* requestOutOfRange */
               LocalErrorCode = DCM_E_REQUESTOUTOFRANGE;
               u8localreturn = E_NOT_OK;
               VEMS_vidSET(Srv_bPostEquWrChck, TRUE);

               if(DCM_MANU_bSaEnable == FALSE)
               {
                  if(   (bLocalSrv_bPostEquDone == FALSE)
                     && (Srv_bInhSAFstWrPosEq_C == 0))
                  {
                     VEMS_vidSET(Srv_stTeleAccessStatus,SRV_TELEACCESS_IDLE);
                  }
                  else
                  {
                     VEMS_vidSET(Srv_stTeleAccessStatus,
                                                   SRV_TELEACCESS_TELE_ENABLE);
                  }
               }
               else
               {
                  VEMS_vidSET(Srv_stTeleAccessStatus,
                                                   SRV_TELEACCESS_TELE_ENABLE);
               }
            }
            else
            {
               /* La fonction Post Equipement n�est pas dans un �tat final
               d��criture */
               u8localreturn = E_PENDING;
               /* Initialisation du code d'erreur � 0 mais il ne sera
               pas utilis� par le DCM */
               LocalErrorCode = 0x00;
            }
         }
         break;

         /* Cet �tat teste si l��criture en eeprom a pu se terminer */
         case WAIT_WRITE_STATUS:
         Srv_stPostEquWrSt = NVMSRV_u8WriteStatus(NVMSRV_udtOBJ_POSTEQUSRV);
         if( NVMSRV_u8OK == Srv_stPostEquWrSt )
         {
            /* L��criture est termin�e */
            Srv_stPostEquWrChck = WAIT_GET_STATUS;
            u8localreturn = E_PENDING;
            /* Initialisation du code d'erreur � 0 mais il ne sera
            pas utilis� par le DCM */
            LocalErrorCode = 0x00;
         }
         else
         {
            /* d�lai d'�criture d�pass�, renvoi r�ponse NACK $72 � l�outil */
            if (Srv_ctPostEquWrSt < 255)
            {
               Srv_ctPostEquWrSt = (uint8)(Srv_ctPostEquWrSt + 1);
            }
            else
            {
               Srv_ctPostEquWrSt = Srv_ctPostEquWrSt_C;
            }

            if( Srv_ctPostEquWrSt >= Srv_ctPostEquWrSt_C )
            {
               LocalErrorCode = DCM_E_GENERALPROGRAMMINGFAILURE;
               u8localreturn = E_NOT_OK;
               /* Ev�nement pour informer que l'�criture s'est mal pass�e */
               DCM_MANU_EveErrPostEquWr(); /*Srv_EveErrPostEquWr_PostEquSrv();*/

               if(DCM_MANU_bSaEnable == FALSE)
               {
                  if(   (bLocalSrv_bPostEquDone == FALSE)
                     && (Srv_bInhSAFstWrPosEq_C == 0))
                  {
                     VEMS_vidSET(Srv_stTeleAccessStatus,SRV_TELEACCESS_IDLE);
                  }
                  else
                  {
                     VEMS_vidSET(Srv_stTeleAccessStatus,
                                                   SRV_TELEACCESS_TELE_ENABLE);
                  }
               }
               else
               {
                  VEMS_vidSET(Srv_stTeleAccessStatus,
                                                   SRV_TELEACCESS_TELE_ENABLE);
               }
            }
            else
            {
               u8localreturn = E_PENDING;
               /* Initialisation du code d'erreur � 0 mais il ne sera
               pas utilis� par le DCM */
               LocalErrorCode = 0x00;
            }
         }
         break;

         /* Cet �tat teste si l��criture en eeprom est correcte */
         case WAIT_GET_STATUS:
         /* Le Post Equipement s�est correctement effectu�
         Envoi de la r�ponse positive par le DCM */
         u8localreturn = E_OK;
         /* Initialisation du code d'erreur � 0 mais il ne sera
         pas utilis� par le DCM */
         LocalErrorCode = 0x00;
         if(DCM_MANU_bSaEnable == FALSE)
         {
            if(   (bLocalSrv_bPostEquDone == TRUE)
                  && (Srv_bInhSAFstWrPosEq_C == 0))
            {
               VEMS_vidSET(Srv_stTeleAccessStatus,SRV_TELEACCESS_IDLE);
            }
            else
            {
               VEMS_vidSET(Srv_stTeleAccessStatus,
                                           SRV_TELEACCESS_TELE_ENABLE);
            }
         }
         else
         {
            VEMS_vidSET(Srv_stTeleAccessStatus,
                                               SRV_TELEACCESS_TELE_ENABLE);
         }
         break;

         default:
         /* Ce cas n'est pas possible */
         SWFAIL_vidSoftwareErrorHook();
         u8localreturn = E_NOT_OK;
         /* generalReject */
         LocalErrorCode = DCM_E_GENERALREJECT;
         break;
      }
   }
   /* Initialisation des variables */
   else if( DCM_CANCEL == OpStatus_in )
   {
      DCM_MANU_PostEquipementWriteReqInit();
      u8localreturn = E_OK;
      /* Initialisation du code d'erreur � 0 mais il ne sera
      pas utilis� par le DCM */
      LocalErrorCode = 0x00;

      if(DCM_MANU_bSaEnable == FALSE)
      {
         if(   (bLocalSrv_bPostEquDone == FALSE)
            && (Srv_bInhSAFstWrPosEq_C == 0))
         {
            VEMS_vidSET(Srv_stTeleAccessStatus,SRV_TELEACCESS_IDLE);
         }
         else
         {
            VEMS_vidSET(Srv_stTeleAccessStatus,SRV_TELEACCESS_TELE_ENABLE);
         }
      }
      else
      {
         VEMS_vidSET(Srv_stTeleAccessStatus,SRV_TELEACCESS_TELE_ENABLE);
      }
   }
   else
   {
      /* En th�orie, on ne doit pas arriver ici */
      SWFAIL_vidSoftwareErrorHook();
      u8localreturn = E_NOT_OK;
      /* generalReject */
      LocalErrorCode = DCM_E_GENERALREJECT;
   }

   *ErrorCode_out = LocalErrorCode;
   /* QAC Warnings (2:3353: When u8localreturn = E_OK, LocalErrorCode
   can be unset */

   return u8localreturn;
}