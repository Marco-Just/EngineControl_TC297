/***************************************************************************
;**
;** FILE NAME      : HPPMPACTCMDACQ_DT.C75
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#include "MATHSRV_Portability.h"
#include "RTE_TYPE.h"
#include "STD_Types.h"
#include "HPPMPACTCMDACQ_DT.H"
#include "HPPMPACTCMDACQ_DT_L.H"
/*-------------------------------------------------------------------------
    Defines
-------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------
    Typedef
-------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------
    Enums
-------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------
    Calibrations
-------------------------------------------------------------------------*/

#pragma section ".calib" a
const uint8  HPPMPACTCMDACQ_DT_u8Inhib = 0;
#pragma section

/*-------------------------------------------------------------------------
    Variables
-------------------------------------------------------------------------*/

#define MEMSEC_START_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
uint32 PFuCtl_tiPmpCmdAppl;
uint32 PFuCtl_tiPmpCmdDecelAppl;
uint8 PFuCtl_NrProfCmdAppl;
uint16 PFuCtl_agPmpCmdAppl;
#define MEMSEC_STOP_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
/*-------------------------------------------------------------------------
    Porteurs de bits
-------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------
    Prototypes
-------------------------------------------------------------------------*/
