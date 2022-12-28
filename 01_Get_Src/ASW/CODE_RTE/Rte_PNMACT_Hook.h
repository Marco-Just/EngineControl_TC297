#if !defined(RTE_PNMACT_HOOK_H)
#define RTE_PNMACT_HOOK_H

/**
 * \file
 *
 * \brief AUTOSAR Rte
 *
 * This file contains the implementation of the AUTOSAR
 * module Rte.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2013 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

 /*
  * This file contains Rte hook declarations for the software component type PNMACT
  *
  * This file has been automatically generated by
  * EB tresos AutoCore Rte Generator Version 6.1.57
  * on Mon Nov 03 12:24:27 CET 2014. !!!IGNORE-LINE!!!
  */

 /* \addtogroup Rte Runtime Environment
  * @{ */

/*==================[inclusions]=============================================*/

#include <Rte_Cfg.h>         /* RTE VFB configuration header file */
#include <Rte_Type.h>     /* Rte type definitions header file */

/*==================[macros]=================================================*/

#if (!defined RTE_CORE) /* if included by software component */
#ifndef RTE_VFB_TRACE
#define RTE_VFB_TRACE (0)
#endif /* RTE_VFB_TRACE */
#endif
#if defined(Rte_WriteHook_PNMACT_P_PnmAct_rRCOCorReq_PnmAct_rRCOCorReq_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_WriteHook_PNMACT_P_PnmAct_rRCOCorReq_PnmAct_rRCOCorReq_Start
#endif
#if defined(Rte_WriteHook_PNMACT_P_PnmAct_rRCOCorReq_PnmAct_rRCOCorReq_Start)
#undef Rte_WriteHook_PNMACT_P_PnmAct_rRCOCorReq_PnmAct_rRCOCorReq_Start
extern FUNC(void, RTE_APPL_CODE) Rte_WriteHook_PNMACT_P_PnmAct_rRCOCorReq_PnmAct_rRCOCorReq_Start(DT_PnmAct_rRCOCorReq data);
#else
#define Rte_WriteHook_PNMACT_P_PnmAct_rRCOCorReq_PnmAct_rRCOCorReq_Start(data) ((void)0)
#endif /* Rte_WriteHook_PNMACT_P_PnmAct_rRCOCorReq_PnmAct_rRCOCorReq_Start */
#if defined(Rte_WriteHook_PNMACT_P_PnmAct_rRCOCorReq_PnmAct_rRCOCorReq_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_WriteHook_PNMACT_P_PnmAct_rRCOCorReq_PnmAct_rRCOCorReq_Return
#endif
#if defined(Rte_WriteHook_PNMACT_P_PnmAct_rRCOCorReq_PnmAct_rRCOCorReq_Return)
#undef Rte_WriteHook_PNMACT_P_PnmAct_rRCOCorReq_PnmAct_rRCOCorReq_Return
extern FUNC(void, RTE_APPL_CODE) Rte_WriteHook_PNMACT_P_PnmAct_rRCOCorReq_PnmAct_rRCOCorReq_Return(DT_PnmAct_rRCOCorReq data);
#else
#define Rte_WriteHook_PNMACT_P_PnmAct_rRCOCorReq_PnmAct_rRCOCorReq_Return(data) ((void)0)
#endif /* Rte_WriteHook_PNMACT_P_PnmAct_rRCOCorReq_PnmAct_rRCOCorReq_Return */
#if defined(Rte_WriteHook_PNMACT_P_PnmAct_rOpTrbActEstim_PnmAct_rOpTrbActEstim_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_WriteHook_PNMACT_P_PnmAct_rOpTrbActEstim_PnmAct_rOpTrbActEstim_Start
#endif
#if defined(Rte_WriteHook_PNMACT_P_PnmAct_rOpTrbActEstim_PnmAct_rOpTrbActEstim_Start)
#undef Rte_WriteHook_PNMACT_P_PnmAct_rOpTrbActEstim_PnmAct_rOpTrbActEstim_Start
extern FUNC(void, RTE_APPL_CODE) Rte_WriteHook_PNMACT_P_PnmAct_rOpTrbActEstim_PnmAct_rOpTrbActEstim_Start(DT_PnmAct_rOpTrbActEstim data);
#else
#define Rte_WriteHook_PNMACT_P_PnmAct_rOpTrbActEstim_PnmAct_rOpTrbActEstim_Start(data) ((void)0)
#endif /* Rte_WriteHook_PNMACT_P_PnmAct_rOpTrbActEstim_PnmAct_rOpTrbActEstim_Start */
#if defined(Rte_WriteHook_PNMACT_P_PnmAct_rOpTrbActEstim_PnmAct_rOpTrbActEstim_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_WriteHook_PNMACT_P_PnmAct_rOpTrbActEstim_PnmAct_rOpTrbActEstim_Return
#endif
#if defined(Rte_WriteHook_PNMACT_P_PnmAct_rOpTrbActEstim_PnmAct_rOpTrbActEstim_Return)
#undef Rte_WriteHook_PNMACT_P_PnmAct_rOpTrbActEstim_PnmAct_rOpTrbActEstim_Return
extern FUNC(void, RTE_APPL_CODE) Rte_WriteHook_PNMACT_P_PnmAct_rOpTrbActEstim_PnmAct_rOpTrbActEstim_Return(DT_PnmAct_rOpTrbActEstim data);
#else
#define Rte_WriteHook_PNMACT_P_PnmAct_rOpTrbActEstim_PnmAct_rOpTrbActEstim_Return(data) ((void)0)
#endif /* Rte_WriteHook_PNMACT_P_PnmAct_rOpTrbActEstim_PnmAct_rOpTrbActEstim_Return */
#if defined(Rte_ReadHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Start
#endif
#if defined(Rte_ReadHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Start)
#undef Rte_ReadHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Start
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Start(P2VAR(DT_TrbAct_pDifTrbActReq, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Start(data) ((void)0)
#endif /* Rte_ReadHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Start */
#if defined(Rte_ReadHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Return
#endif
#if defined(Rte_ReadHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Return)
#undef Rte_ReadHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Return
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Return(P2VAR(DT_TrbAct_pDifTrbActReq, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Return(data) ((void)0)
#endif /* Rte_ReadHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Return */
#if defined(Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Start
#endif
#if defined(Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Start)
#undef Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Start
extern FUNC(void, RTE_APPL_CODE) Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Start(void);
#else
#define Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Start() ((void)0)
#endif /* Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Start */
#if defined(Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Return
#endif
#if defined(Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Return)
#undef Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Return
extern FUNC(void, RTE_APPL_CODE) Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Return(void);
#else
#define Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Return() ((void)0)
#endif /* Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifTrbActReq_TrbAct_pDifTrbActReq_Return */
#if defined(Rte_ReadHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Start
#endif
#if defined(Rte_ReadHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Start)
#undef Rte_ReadHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Start
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Start(P2VAR(DT_ExM_pDsTrbEstimSI, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Start(data) ((void)0)
#endif /* Rte_ReadHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Start */
#if defined(Rte_ReadHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Return
#endif
#if defined(Rte_ReadHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Return)
#undef Rte_ReadHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Return
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Return(P2VAR(DT_ExM_pDsTrbEstimSI, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Return(data) ((void)0)
#endif /* Rte_ReadHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Return */
#if defined(Rte_IsUpdatedHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_IsUpdatedHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Start
#endif
#if defined(Rte_IsUpdatedHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Start)
#undef Rte_IsUpdatedHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Start
extern FUNC(void, RTE_APPL_CODE) Rte_IsUpdatedHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Start(void);
#else
#define Rte_IsUpdatedHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Start() ((void)0)
#endif /* Rte_IsUpdatedHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Start */
#if defined(Rte_IsUpdatedHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_IsUpdatedHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Return
#endif
#if defined(Rte_IsUpdatedHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Return)
#undef Rte_IsUpdatedHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Return
extern FUNC(void, RTE_APPL_CODE) Rte_IsUpdatedHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Return(void);
#else
#define Rte_IsUpdatedHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Return() ((void)0)
#endif /* Rte_IsUpdatedHook_PNMACT_R_ExM_pDsTrbEstimSI_ExM_pDsTrbEstimSI_Return */
#if defined(Rte_ReadHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Start
#endif
#if defined(Rte_ReadHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Start)
#undef Rte_ReadHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Start
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Start(P2VAR(DT_TrbAct_rRCOReqRaw, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Start(data) ((void)0)
#endif /* Rte_ReadHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Start */
#if defined(Rte_ReadHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Return
#endif
#if defined(Rte_ReadHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Return)
#undef Rte_ReadHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Return
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Return(P2VAR(DT_TrbAct_rRCOReqRaw, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Return(data) ((void)0)
#endif /* Rte_ReadHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Return */
#if defined(Rte_IsUpdatedHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_IsUpdatedHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Start
#endif
#if defined(Rte_IsUpdatedHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Start)
#undef Rte_IsUpdatedHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Start
extern FUNC(void, RTE_APPL_CODE) Rte_IsUpdatedHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Start(void);
#else
#define Rte_IsUpdatedHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Start() ((void)0)
#endif /* Rte_IsUpdatedHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Start */
#if defined(Rte_IsUpdatedHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_IsUpdatedHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Return
#endif
#if defined(Rte_IsUpdatedHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Return)
#undef Rte_IsUpdatedHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Return
extern FUNC(void, RTE_APPL_CODE) Rte_IsUpdatedHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Return(void);
#else
#define Rte_IsUpdatedHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Return() ((void)0)
#endif /* Rte_IsUpdatedHook_PNMACT_R_TrbAct_rRCOReqRaw_TrbAct_rRCOReqRaw_Return */
#if defined(Rte_ReadHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Start
#endif
#if defined(Rte_ReadHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Start)
#undef Rte_ReadHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Start
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Start(P2VAR(DT_UsThrM_pUsCmpr, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Start(data) ((void)0)
#endif /* Rte_ReadHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Start */
#if defined(Rte_ReadHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Return
#endif
#if defined(Rte_ReadHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Return)
#undef Rte_ReadHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Return
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Return(P2VAR(DT_UsThrM_pUsCmpr, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Return(data) ((void)0)
#endif /* Rte_ReadHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Return */
#if defined(Rte_IsUpdatedHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_IsUpdatedHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Start
#endif
#if defined(Rte_IsUpdatedHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Start)
#undef Rte_IsUpdatedHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Start
extern FUNC(void, RTE_APPL_CODE) Rte_IsUpdatedHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Start(void);
#else
#define Rte_IsUpdatedHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Start() ((void)0)
#endif /* Rte_IsUpdatedHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Start */
#if defined(Rte_IsUpdatedHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_IsUpdatedHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Return
#endif
#if defined(Rte_IsUpdatedHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Return)
#undef Rte_IsUpdatedHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Return
extern FUNC(void, RTE_APPL_CODE) Rte_IsUpdatedHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Return(void);
#else
#define Rte_IsUpdatedHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Return() ((void)0)
#endif /* Rte_IsUpdatedHook_PNMACT_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr_Return */
#if defined(Rte_ReadHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Start
#endif
#if defined(Rte_ReadHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Start)
#undef Rte_ReadHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Start
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Start(P2VAR(DT_ExM_pExMnfEstim, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Start(data) ((void)0)
#endif /* Rte_ReadHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Start */
#if defined(Rte_ReadHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Return
#endif
#if defined(Rte_ReadHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Return)
#undef Rte_ReadHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Return
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Return(P2VAR(DT_ExM_pExMnfEstim, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Return(data) ((void)0)
#endif /* Rte_ReadHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Return */
#if defined(Rte_IsUpdatedHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_IsUpdatedHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Start
#endif
#if defined(Rte_IsUpdatedHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Start)
#undef Rte_IsUpdatedHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Start
extern FUNC(void, RTE_APPL_CODE) Rte_IsUpdatedHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Start(void);
#else
#define Rte_IsUpdatedHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Start() ((void)0)
#endif /* Rte_IsUpdatedHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Start */
#if defined(Rte_IsUpdatedHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_IsUpdatedHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Return
#endif
#if defined(Rte_IsUpdatedHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Return)
#undef Rte_IsUpdatedHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Return
extern FUNC(void, RTE_APPL_CODE) Rte_IsUpdatedHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Return(void);
#else
#define Rte_IsUpdatedHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Return() ((void)0)
#endif /* Rte_IsUpdatedHook_PNMACT_R_ExM_pExMnfEstim_ExM_pExMnfEstim_Return */
#if defined(Rte_ReadHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Start
#endif
#if defined(Rte_ReadHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Start)
#undef Rte_ReadHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Start
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Start(P2VAR(DT_TrbAct_pDifMaxPnmActReq, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Start(data) ((void)0)
#endif /* Rte_ReadHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Start */
#if defined(Rte_ReadHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Return
#endif
#if defined(Rte_ReadHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Return)
#undef Rte_ReadHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Return
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Return(P2VAR(DT_TrbAct_pDifMaxPnmActReq, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Return(data) ((void)0)
#endif /* Rte_ReadHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Return */
#if defined(Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Start
#endif
#if defined(Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Start)
#undef Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Start
extern FUNC(void, RTE_APPL_CODE) Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Start(void);
#else
#define Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Start() ((void)0)
#endif /* Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Start */
#if defined(Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Return
#endif
#if defined(Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Return)
#undef Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Return
extern FUNC(void, RTE_APPL_CODE) Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Return(void);
#else
#define Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Return() ((void)0)
#endif /* Rte_IsUpdatedHook_PNMACT_R_TrbAct_pDifMaxPnmActReq_TrbAct_pDifMaxPnmActReq_Return */
#if defined(Rte_ReadHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Start
#endif
#if defined(Rte_ReadHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Start)
#undef Rte_ReadHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Start
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Start(P2VAR(DT_UsThrM_pAirExt, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Start(data) ((void)0)
#endif /* Rte_ReadHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Start */
#if defined(Rte_ReadHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Return
#endif
#if defined(Rte_ReadHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Return)
#undef Rte_ReadHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Return
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Return(P2VAR(DT_UsThrM_pAirExt, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Return(data) ((void)0)
#endif /* Rte_ReadHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Return */
#if defined(Rte_IsUpdatedHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_IsUpdatedHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Start
#endif
#if defined(Rte_IsUpdatedHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Start)
#undef Rte_IsUpdatedHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Start
extern FUNC(void, RTE_APPL_CODE) Rte_IsUpdatedHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Start(void);
#else
#define Rte_IsUpdatedHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Start() ((void)0)
#endif /* Rte_IsUpdatedHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Start */
#if defined(Rte_IsUpdatedHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_IsUpdatedHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Return
#endif
#if defined(Rte_IsUpdatedHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Return)
#undef Rte_IsUpdatedHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Return
extern FUNC(void, RTE_APPL_CODE) Rte_IsUpdatedHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Return(void);
#else
#define Rte_IsUpdatedHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Return() ((void)0)
#endif /* Rte_IsUpdatedHook_PNMACT_R_UsThrM_pAirExt_UsThrM_pAirExt_Return */
#if defined(Rte_Runnable_PNMACT_RE_PnmAct_001_MSE_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_PNMACT_RE_PnmAct_001_MSE_Start
#endif
#if defined(Rte_Runnable_PNMACT_RE_PnmAct_001_MSE_Start)
#undef Rte_Runnable_PNMACT_RE_PnmAct_001_MSE_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_PNMACT_RE_PnmAct_001_MSE_Start(void);
#else
#define Rte_Runnable_PNMACT_RE_PnmAct_001_MSE_Start() ((void)0)
#endif /* Rte_Runnable_PNMACT_RE_PnmAct_001_MSE_Start */
#if defined(Rte_Runnable_PNMACT_RE_PnmAct_001_MSE_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_PNMACT_RE_PnmAct_001_MSE_Return
#endif
#if defined(Rte_Runnable_PNMACT_RE_PnmAct_001_MSE_Return)
#undef Rte_Runnable_PNMACT_RE_PnmAct_001_MSE_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_PNMACT_RE_PnmAct_001_MSE_Return(void);
#else
#define Rte_Runnable_PNMACT_RE_PnmAct_001_MSE_Return() ((void)0)
#endif /* Rte_Runnable_PNMACT_RE_PnmAct_001_MSE_Return */
#if defined(Rte_Runnable_PNMACT_RE_PnmAct_002_TEV_Start) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_PNMACT_RE_PnmAct_002_TEV_Start
#endif
#if defined(Rte_Runnable_PNMACT_RE_PnmAct_002_TEV_Start)
#undef Rte_Runnable_PNMACT_RE_PnmAct_002_TEV_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_PNMACT_RE_PnmAct_002_TEV_Start(void);
#else
#define Rte_Runnable_PNMACT_RE_PnmAct_002_TEV_Start() ((void)0)
#endif /* Rte_Runnable_PNMACT_RE_PnmAct_002_TEV_Start */
#if defined(Rte_Runnable_PNMACT_RE_PnmAct_002_TEV_Return) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_PNMACT_RE_PnmAct_002_TEV_Return
#endif
#if defined(Rte_Runnable_PNMACT_RE_PnmAct_002_TEV_Return)
#undef Rte_Runnable_PNMACT_RE_PnmAct_002_TEV_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_PNMACT_RE_PnmAct_002_TEV_Return(void);
#else
#define Rte_Runnable_PNMACT_RE_PnmAct_002_TEV_Return() ((void)0)
#endif /* Rte_Runnable_PNMACT_RE_PnmAct_002_TEV_Return */

/*==================[type definitions]=======================================*/

/*==================[external function declarations]=========================*/

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*==================[internal constants]=====================================*/

/*==================[external data]==========================================*/

/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

/*==================[internal function definitions]==========================*/
/** @} doxygen end group definition */
#endif /* !defined(RTE_PNMACT_HOOK_H) */
/*==================[end of file]============================================*/
