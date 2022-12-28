/**************************************************************************************************\
 *** 
 *** Simulink model       : RCD_TL_et_SL
 *** TargetLink subsystem : RCD_TL_et_SL/RCD
 *** Codefile             : rcd_002_tev_fct.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2010-12-20 15:56:27
 ***
 *** CODE GENERATOR OPTIONS:
 *** Compiler                            : <unknown>
 *** Target                              : Generic
 *** ANSI-C compatible code              : yes
 *** Optimization level                  : 2
 *** Constant style                      : decimal
 *** Clean code option                   : enabled
 *** Logging mode                        : Do not log anything
 *** Linker sections                     : enabled
 *** Assembler statements                : disabled
 *** Variable name length                : 31 chars
 *** Use global bitfields                : disabled
 *** Stateflow: use of bitfields         : enabled
 *** State activity encoding limit       : 5
 *** Omit zero inits in restart function : disabled
 *** Share fcns between TL subsystems    : enabled
 *** Generate 64bit functions            : enabled
 *** Inlining Threshold                  : 6
 *** Line break limit                    : 100
 *** Target optimized boolean data type  : enabled
 *** Keep saturation elements            : disabled
 *** Extended variable sharing           : disabled
 *** Style definition file               : C:\dSPACE301\Matlab\Tl\config\codegen\cconfig.xml
 *** Root style sheet                    : C:\dSPACE301\Matlab\Tl\XML\CodeGen\Stylesheets\TL_CSource
 ***                                       CodeSS.xsl
 *** Enable Multirate codegeneration     : disabled
 *** Add model checksum                  : disabled
 ***
 *** TargetLink version      : 3.0.1_RC3 from 13-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _RCD_002_TEV_FCT_H_
#define _RCD_002_TEV_FCT_H_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "tl_defines.h"
#include "tl_basetypes.h"
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/

struct tag_SBFS_F01_01_06_02_01_Automate_Anomalie_Reveil_principal_pour_GD_RCD_tp {
   unsigned int CRCD2_Defaut_inactif : 1;
   unsigned int CRCD3_Defaut_actif : 1;
}; /* Type of structure containing bitfields for Stateflow chart  */
struct tag_SBFS_F01_01_07_02_01_Automate_Incoherence_Reveil_principal_pour_GD_RCD_tp {
   unsigned int CRCD5_Defaut_inactif : 1;
   unsigned int CRCD6_Defaut_actif : 1;
}; /* Type of structure containing bitfields for Stateflow chart  */
struct tag_SBFS_F01_05_01_Machine_etats_RCD_RCD_tp {
   unsigned int CRCD7_F01_05_0__ne_etats_RCD_ns : 3;
}; /* Type of structure containing bitfields for Stateflow chart  */
struct tag_SBFS_F01_05_02_01_Automate_LIGNE_RCD_CC_masse_pour_GD_RCD_tp {
   unsigned int CRCD15_Defaut_inactif : 1;
   unsigned int CRCD16_Defaut_actif : 1;
}; /* Type of structure containing bitfields for Stateflow chart  */
struct tag_SBFS_F02_04_01_ECU_APC_Applicative_state_machine_RCD_tp {
   unsigned int CRCD18_Reveil_principal_nominal : 1;
   unsigned int CRCD19_Prepara___Mise_en_veille : 1;
   unsigned int CRCD20_Com_Latch : 1;
   unsigned int CRCD21_Reveil_Partiel_interne : 1;
}; /* Type of structure containing bitfields for Stateflow chart  */
/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

#define RCD_START_SEC_GLOBAL_8BIT
#include "RCD_MemMap.h"
/******************************************************************************\
   AR_IF_GLOBAL_8BIT: Global 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_8BIT UInt8 RCD_Ext_bfMstPtlWkuHldReq_in /* 
   Description: Vecteur compos� des p demandes de maintien des r�veils partiels maitres (sp�cifique 
   RCD type 1)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern AR_IF_GLOBAL_8BIT UInt8 RCD_Ext_bfMstPtlWkuNd_in /* 
   Description: Vecteur compos� des p besoins d'activation des r�veils partiels maitres (sp�cifique 
   RCD type 1)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern AR_IF_GLOBAL_8BIT UInt8 RCD_Ext_bfSlavePtlWkuReq_in /* 
   Description: Vecteur compos� des n demandes d'activation des r�veils partiels esclaves
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern AR_IF_GLOBAL_8BIT UInt8 RCD_Ext_spdVeh_in /* 
   Unit       : km/h
   Description: vitesse v�hicule
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern AR_IF_GLOBAL_8BIT UInt8 RCD_Ext_stMainWkuReq_in /* 
   Description: Demande d'activation du r�veil principal
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT UInt8 UCE_bfMstPtlWkuReq_out /* 
   Description: Vecteur compos� des p demandes d'activation des r�veils partiels maitres (sp�cifique
    RCD type 1)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern AR_IF_GLOBAL_8BIT UInt8 UCE_bfSlavePtlWkuSt_out /* 
   Description: Vecteur compos� des n �tats des r�veils partiels esclaves
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern AR_IF_GLOBAL_8BIT UInt8 UCE_stCAN1ComReq_out /* 
   Description: Demande de communication sur le CAN1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT UInt8 UCE_stCAN2ComReq_out /* 
   Description: Demande de communication sur le CAN2
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT UInt8 UCE_stCAN3ComReq_out /* 
   Description: Demande de communication sur le CAN3
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT UInt8 UCE_stSt_out /* 
   Description: Etat applicatif du calculateur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 15 */;
extern AR_IF_GLOBAL_8BIT UInt8 UCE_stWkuMainRelSt_out /* 
   Description: Etat de r�veil UCE relatif au R�veil principal
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;

#define RCD_STOP_SEC_GLOBAL_8BIT
#include "RCD_MemMap.h"

#define RCD_START_SEC_GLOBAL_BOOLEAN
#include "RCD_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_BOOLEAN Boolean RCD_Afts_bDiagToolReq_in /* 
   Description: Requ�te d'un outil Diagnostic : r�ception d'une requ�te StartCom (si le calculateur 
   est pr�vu pour �tre diagnostiqu� via une ligne K), r�ception d'une requ�te StartDiagnosticSession
    (si le calculateur est pr�vu pour �tre diagnostiqu� via le CAN par le protocole Keyword 2000), r
   �ception de toute requ�te UDS (si le calculateur est pr�vu pour �tre diagnostiqu� via le CAN par 
   le protocole UDS).
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RCD_Ext_bAPCLine_in /* 
   Description: Signal +APC filtr�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RCD_Ext_bElecItgrReq_in /* 
   Description: Requ�te d'int�gration �lectronique (cf CSEO_APPT09_0251 Int�gration �lectronique au 
   montage, en retouche et en maintenance Pr�conisations PSA)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RCD_Ext_bFctHldReq_in /* 
   Description: Synth�se de demandes internes de maintien de l'alimentation
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RCD_Ext_bPostRunReq_in /* 
   Description: Requ�te de PostRun (cf sp�cifications AUTOSAR)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RCD_Ext_bRCDLine_in /* 
   Description: Signal RCD filtr�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RCD_UCE_bCAN1ComNd_in /* 
   Description: Besoin de communication sur le CAN1 de l'applicatif
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RCD_UCE_bCAN2ComNd_in /* 
   Description: Besoin de communication sur le CAN2 de l'applicatif
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RCD_UCE_bCAN3ComNd_in /* 
   Description: Besoin de communication sur le CAN3 de l'applicatif
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RCD_UCE_bExtdWkuMain_in /* 
   Description: R�veil principal "�tendu", permettant de filtrer, en cas de demande de r�veil partie
   l en sortie de principal, le passage syst�matique en Transitoire
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RCD_UCE_bLINComNd_in /* 
   Description: Besoin de communication sur le LIN de l'applicatif
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean UCE_bDgoMainWkuDisrd_out /* 
   Description: Diagnostic de l'anomalie r�veil principal (� destination du GD pour U2000)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean UCE_bDgoMainWkuIncst_out /* 
   Description: Diagnostic de l'incoh�rence r�veil principal (� destination du GD pour U2003)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean UCE_bDgoRCDLineScg_out /* 
   Description: Diagnostic d'un court-circuit � la masse sur la ligne RCD (� destination du GD pour 
   U2002)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean UCE_bLINComReq_out /* 
   Description: Demande de communication sur le LIN
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean UCE_bMonRunMainWkuDisrd_out /* 
   Description: Fen�tre de diagnostic de l'anomalie r�veil principal (� destination du GD pour U2000
   )
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean UCE_bMonRunMainWkuIncst_out /* 
   Description: Fen�tre de diagnostic de l'incoh�rence r�veil principal (� destination du GD pour U2
   003)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean UCE_bMonRunRCDLineScg_out /* 
   Description: Fen�tre de diagnostic du court-circuit � la masse sur la ligne RCD (� destination du
    GD pour U2002)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean UCE_bPwrlAcv_out /* 
   Description: Flag indiquant que le calculateur est sortie du R�veil principal (nominal ou d�grad�
   ), i.e phase de post-coupure contact
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean UCE_bRCDLineCmd_out /* 
   Description: Commande de la ligne RCD (sp�cifique RCD type 1)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean UCE_bShutDownAuth_out /* 
   Description: Autorisation de mise en veille du calculateur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean UCE_bWkuMain_out /* 
   Description: Flag indiquant que le calculateur est en R�veil principal (nominal ou d�grad�)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define RCD_STOP_SEC_GLOBAL_BOOLEAN
#include "RCD_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/
/******************************************************************************\
   AR_GLOBAL_FCN: Function class
\******************************************************************************/
extern Void RCD_001_MSE_ini(Void);
extern Void RCD_002_TEV_fct(Void);

/******************************************************************************\
   UserGlobalRestart: static function(s) (invisible for other module)
\******************************************************************************/
extern Void RCD_FctVarInit(Void);


#endif/*_RCD_002_TEV_FCT_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/