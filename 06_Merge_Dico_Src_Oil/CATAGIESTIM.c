/***************************************************************************
;**
;** FILE NAME      : CATAGIESTIM.C75
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#include "MATHSRV_Portability.h"
#include "RTE_TYPE.h"
#include "STD_Types.h"
#include "CATAGIESTIM.H"
#include "CATAGIESTIM_L.H"
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
const uint8  Cat_old_gain_map[CAT_OLD_GAIN_MAP_COLS] = {0};
const uint8  Cat_old_gain_obd_map[CAT_OLD_GAIN_OBD_MAP_COLS] = {0};
const uint8  CATAGIESTIM_u8Inhib = 0;
const uint16  Km_vehicle_bkpt_map[KM_VEHICLE_BKPT_MAP_COLS] = {0};
#pragma section

/*-------------------------------------------------------------------------
    Variables
-------------------------------------------------------------------------*/

#define MEMSEC_START_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
uint8 Cat_old_gain;
uint8 Cat_old_gain_obd;
uint16 Km_vehicle_mux_uw;
uint16 OxC_facDmgOxC;
#define MEMSEC_STOP_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
/*-------------------------------------------------------------------------
    Porteurs de bits
-------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------
    Prototypes
-------------------------------------------------------------------------*/
