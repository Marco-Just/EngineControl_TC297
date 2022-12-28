/***************************************************************************
;**
;** FILE NAME      : ALDALTCOR.C75
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#include "MATHSRV_Portability.h"
#include "RTE_TYPE.h"
#include "STD_Types.h"
#include "ALDALTCOR.H"
#include "ALDALTCOR_L.H"
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
const boolean  VlvSys_bAcvAltiCor_C = 0;
const boolean  VlvSys_bAirLdSel_C = 0;
const boolean  VlvSys_bAirLdSelPrfMod_C = 0;
const uint8  ALDALTCOR_u8Inhib = 0;
#pragma section

/*-------------------------------------------------------------------------
    Variables
-------------------------------------------------------------------------*/

#define MEMSEC_START_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
uint16 VlvSys_rAirLdAltiCor;
uint16 VlvSys_rAirLdPrfMod;
#define MEMSEC_STOP_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
/*-------------------------------------------------------------------------
    Porteurs de bits
-------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------
    Prototypes
-------------------------------------------------------------------------*/
