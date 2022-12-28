/**
 * \file IfxEray_reg.h
 * \brief
 * \copyright Copyright (c) 2012 Infineon Technologies AG. All rights reserved.
 *
 *
 * $Revision: 1586 $
 * $Date: 2013-09-03 14:43:49 +0200 (Di, 03 Sep 2013) $
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 * \defgroup IfxLld_Eray_Cfg Eray address
 * \ingroup IfxLld_Eray
 * 
 * \defgroup IfxLld_Eray_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Eray_Cfg
 * 
 * \defgroup IfxLld_Eray_Cfg_Eray0 2-ERAY0
 * \ingroup IfxLld_Eray_Cfg
 * 
 * \defgroup IfxLld_Eray_Cfg_Eray1 2-ERAY1
 * \ingroup IfxLld_Eray_Cfg
 * 
 */
#ifndef IFXERAY_REG_H
#define IFXERAY_REG_H
/******************************************************************************/
#include "IfxEray_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Eray_Cfg_BaseAddress
 * \{  */

/** \\brief  ERAY object */
#define MODULE_ERAY0 /*lint --e(923)*/ ((*(Ifx_ERAY*)0xF001C000u))

/** \\brief  ERAY object */
#define MODULE_ERAY1 /*lint --e(923)*/ ((*(Ifx_ERAY*)0xF0017000u))
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Eray_Cfg_Eray0
 * \{  */

/** \\brief  8FC, Access Enable Register 0 */
#define ERAY0_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ACCEN0*)0xF001C8FCu)

/** \\brief  8F8, Access Enable Register 1 */
#define ERAY0_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ACCEN1*)0xF001C8F8u)

/** \\brief  128, Aggregated Channel Status */
#define ERAY0_ACS /*lint --e(923)*/ (*(volatile Ifx_ERAY_ACS*)0xF001C128u)

/** \\brief  104, Communication Controller Error Vector */
#define ERAY0_CCEV /*lint --e(923)*/ (*(volatile Ifx_ERAY_CCEV*)0xF001C104u)

/** \\brief  100, Communication Controller Status Vector */
#define ERAY0_CCSV /*lint --e(923)*/ (*(volatile Ifx_ERAY_CCSV*)0xF001C100u)

/** \\brief  0, Clock Control Register */
#define ERAY0_CLC /*lint --e(923)*/ (*(volatile Ifx_ERAY_CLC*)0xF001C000u)

/** \\brief  3F0, Core Release Register */
#define ERAY0_CREL /*lint --e(923)*/ (*(volatile Ifx_ERAY_CREL*)0xF001C3F0u)

/** \\brief  4, Busy and Input Buffer Control Register */
#define ERAY0_CUST1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_CUST1*)0xF001C004u)

/** \\brief  C, Customer Interface Timeout Counter */
#define ERAY0_CUST3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_CUST3*)0xF001C00Cu)

/** \\brief  34, Error Service Request Enable Reset */
#define ERAY0_EIER /*lint --e(923)*/ (*(volatile Ifx_ERAY_EIER*)0xF001C034u)

/** \\brief  30, Error Service Request Enable Set */
#define ERAY0_EIES /*lint --e(923)*/ (*(volatile Ifx_ERAY_EIES*)0xF001C030u)

/** \\brief  28, Error Service Request Line Select */
#define ERAY0_EILS /*lint --e(923)*/ (*(volatile Ifx_ERAY_EILS*)0xF001C028u)

/** \\brief  20, Error Service Request Register */
#define ERAY0_EIR /*lint --e(923)*/ (*(volatile Ifx_ERAY_EIR*)0xF001C020u)

/** \\brief  3F4, Endian Register */
#define ERAY0_ENDN /*lint --e(923)*/ (*(volatile Ifx_ERAY_ENDN*)0xF001C3F4u)

/** \\brief  130, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY0_ESID_1S0 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C130u)

/** Alias (User Manual Name) for ERAY0_ESID_1S0.
* To use register names with standard convension, please use ERAY0_ESID_1S0.
*/
#define	ERAY0_ESID01	(ERAY0_ESID_1S0)

/** \\brief  134, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY0_ESID_1S1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C134u)

/** Alias (User Manual Name) for ERAY0_ESID_1S1.
* To use register names with standard convension, please use ERAY0_ESID_1S1.
*/
#define	ERAY0_ESID02	(ERAY0_ESID_1S1)

/** \\brief  158, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY0_ESID_1S10 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C158u)

/** Alias (User Manual Name) for ERAY0_ESID_1S10.
* To use register names with standard convension, please use ERAY0_ESID_1S10.
*/
#define	ERAY0_ESID11	(ERAY0_ESID_1S10)

/** \\brief  15C, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY0_ESID_1S11 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C15Cu)

/** Alias (User Manual Name) for ERAY0_ESID_1S11.
* To use register names with standard convension, please use ERAY0_ESID_1S11.
*/
#define	ERAY0_ESID12	(ERAY0_ESID_1S11)

/** \\brief  160, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY0_ESID_1S12 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C160u)

/** Alias (User Manual Name) for ERAY0_ESID_1S12.
* To use register names with standard convension, please use ERAY0_ESID_1S12.
*/
#define	ERAY0_ESID13	(ERAY0_ESID_1S12)

/** \\brief  164, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY0_ESID_1S13 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C164u)

/** Alias (User Manual Name) for ERAY0_ESID_1S13.
* To use register names with standard convension, please use ERAY0_ESID_1S13.
*/
#define	ERAY0_ESID14	(ERAY0_ESID_1S13)

/** \\brief  168, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY0_ESID_1S14 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C168u)

/** Alias (User Manual Name) for ERAY0_ESID_1S14.
* To use register names with standard convension, please use ERAY0_ESID_1S14.
*/
#define	ERAY0_ESID15	(ERAY0_ESID_1S14)

/** \\brief  138, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY0_ESID_1S2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C138u)

/** Alias (User Manual Name) for ERAY0_ESID_1S2.
* To use register names with standard convension, please use ERAY0_ESID_1S2.
*/
#define	ERAY0_ESID03	(ERAY0_ESID_1S2)

/** \\brief  13C, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY0_ESID_1S3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C13Cu)

/** Alias (User Manual Name) for ERAY0_ESID_1S3.
* To use register names with standard convension, please use ERAY0_ESID_1S3.
*/
#define	ERAY0_ESID04	(ERAY0_ESID_1S3)

/** \\brief  140, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY0_ESID_1S4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C140u)

/** Alias (User Manual Name) for ERAY0_ESID_1S4.
* To use register names with standard convension, please use ERAY0_ESID_1S4.
*/
#define	ERAY0_ESID05	(ERAY0_ESID_1S4)

/** \\brief  144, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY0_ESID_1S5 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C144u)

/** Alias (User Manual Name) for ERAY0_ESID_1S5.
* To use register names with standard convension, please use ERAY0_ESID_1S5.
*/
#define	ERAY0_ESID06	(ERAY0_ESID_1S5)

/** \\brief  148, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY0_ESID_1S6 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C148u)

/** Alias (User Manual Name) for ERAY0_ESID_1S6.
* To use register names with standard convension, please use ERAY0_ESID_1S6.
*/
#define	ERAY0_ESID07	(ERAY0_ESID_1S6)

/** \\brief  14C, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY0_ESID_1S7 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C14Cu)

/** Alias (User Manual Name) for ERAY0_ESID_1S7.
* To use register names with standard convension, please use ERAY0_ESID_1S7.
*/
#define	ERAY0_ESID08	(ERAY0_ESID_1S7)

/** \\brief  150, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY0_ESID_1S8 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C150u)

/** Alias (User Manual Name) for ERAY0_ESID_1S8.
* To use register names with standard convension, please use ERAY0_ESID_1S8.
*/
#define	ERAY0_ESID09	(ERAY0_ESID_1S8)

/** \\brief  154, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY0_ESID_1S9 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001C154u)

/** Alias (User Manual Name) for ERAY0_ESID_1S9.
* To use register names with standard convension, please use ERAY0_ESID_1S9.
*/
#define	ERAY0_ESID10	(ERAY0_ESID_1S9)

/** \\brief  30C, FIFO Critical Level */
#define ERAY0_FCL /*lint --e(923)*/ (*(volatile Ifx_ERAY_FCL*)0xF001C30Cu)

/** \\brief  304, FIFO Rejection Filter */
#define ERAY0_FRF /*lint --e(923)*/ (*(volatile Ifx_ERAY_FRF*)0xF001C304u)

/** \\brief  308, FIFO Rejection Filter Mask */
#define ERAY0_FRFM /*lint --e(923)*/ (*(volatile Ifx_ERAY_FRFM*)0xF001C308u)

/** \\brief  318, FIFO Status Register */
#define ERAY0_FSR /*lint --e(923)*/ (*(volatile Ifx_ERAY_FSR*)0xF001C318u)

/** \\brief  A0, GTU Configuration Register 1 */
#define ERAY0_GTUC01 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC01*)0xF001C0A0u)

/** \\brief  A4, GTU Configuration Register 2 */
#define ERAY0_GTUC02 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC02*)0xF001C0A4u)

/** \\brief  A8, GTU Configuration Register 3 */
#define ERAY0_GTUC03 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC03*)0xF001C0A8u)

/** \\brief  AC, GTU Configuration Register 4 */
#define ERAY0_GTUC04 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC04*)0xF001C0ACu)

/** \\brief  B0, GTU Configuration Register 5 */
#define ERAY0_GTUC05 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC05*)0xF001C0B0u)

/** \\brief  B4, GTU Configuration Register 6 */
#define ERAY0_GTUC06 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC06*)0xF001C0B4u)

/** \\brief  B8, GTU Configuration Register 7 */
#define ERAY0_GTUC07 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC07*)0xF001C0B8u)

/** \\brief  BC, GTU Configuration Register 8 */
#define ERAY0_GTUC08 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC08*)0xF001C0BCu)

/** \\brief  C0, GTU Configuration Register 9 */
#define ERAY0_GTUC09 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC09*)0xF001C0C0u)

/** \\brief  C4, GTU Configuration Register 10 */
#define ERAY0_GTUC10 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC10*)0xF001C0C4u)

/** \\brief  C8, GTU Configuration Register 11 */
#define ERAY0_GTUC11 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC11*)0xF001C0C8u)

/** \\brief  510, Input Buffer Command Mask */
#define ERAY0_IBCM /*lint --e(923)*/ (*(volatile Ifx_ERAY_IBCM*)0xF001C510u)

/** \\brief  514, Input Buffer Command Request */
#define ERAY0_IBCR /*lint --e(923)*/ (*(volatile Ifx_ERAY_IBCR*)0xF001C514u)

/** \\brief  8, Module Identification Register */
#define ERAY0_ID /*lint --e(923)*/ (*(volatile Ifx_ERAY_ID*)0xF001C008u)

/** \\brief  40, Service Request Line Enable */
#define ERAY0_ILE /*lint --e(923)*/ (*(volatile Ifx_ERAY_ILE*)0xF001C040u)

/** \\brief  8F4, Kernel Reset Register 0 */
#define ERAY0_KRST0 /*lint --e(923)*/ (*(volatile Ifx_ERAY_KRST0*)0xF001C8F4u)

/** \\brief  8F0, Kernel Reset Register 1 */
#define ERAY0_KRST1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_KRST1*)0xF001C8F0u)

/** \\brief  8EC, Kernel Reset Status Clear Register */
#define ERAY0_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_ERAY_KRSTCLR*)0xF001C8ECu)

/** \\brief  1C, Lock Register */
#define ERAY0_LCK /*lint --e(923)*/ (*(volatile Ifx_ERAY_LCK*)0xF001C01Cu)

/** \\brief  314, Last Dynamic Transmit Slot */
#define ERAY0_LDTS /*lint --e(923)*/ (*(volatile Ifx_ERAY_LDTS*)0xF001C314u)

/** \\brief  70C, Message Buffer Status */
#define ERAY0_MBS /*lint --e(923)*/ (*(volatile Ifx_ERAY_MBS*)0xF001C70Cu)

/** \\brief  340, Message Buffer Status Changed 1 */
#define ERAY0_MBSC1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_MBSC1*)0xF001C340u)

/** \\brief  344, Message Buffer Status Changed 2 */
#define ERAY0_MBSC2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_MBSC2*)0xF001C344u)

/** \\brief  348, Message Buffer Status Changed 3 */
#define ERAY0_MBSC3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_MBSC3*)0xF001C348u)

/** \\brief  34C, Message Buffer Status Changed 4 */
#define ERAY0_MBSC4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_MBSC4*)0xF001C34Cu)

/** \\brief  98, MHD Configuration Register */
#define ERAY0_MHDC /*lint --e(923)*/ (*(volatile Ifx_ERAY_MHDC*)0xF001C098u)

/** \\brief  31C, Message Handler Constraints Flags */
#define ERAY0_MHDF /*lint --e(923)*/ (*(volatile Ifx_ERAY_MHDF*)0xF001C31Cu)

/** \\brief  310, Message Handler Status */
#define ERAY0_MHDS /*lint --e(923)*/ (*(volatile Ifx_ERAY_MHDS*)0xF001C310u)

/** \\brief  300, Message RAM Configuration */
#define ERAY0_MRC /*lint --e(923)*/ (*(volatile Ifx_ERAY_MRC*)0xF001C300u)

/** \\brief  3B8, Message Buffer Status Changed Interrupt Control 1 */
#define ERAY0_MSIC1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_MSIC1*)0xF001C3B8u)

/** \\brief  3BC, Message Buffer Status Changed Interrupt Control 2 */
#define ERAY0_MSIC2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_MSIC2*)0xF001C3BCu)

/** \\brief  3C0, Message Buffer Status Changed Interrupt Control 3 */
#define ERAY0_MSIC3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_MSIC3*)0xF001C3C0u)

/** \\brief  3C4, Message Buffer Status Changed Interrupt Control 4 */
#define ERAY0_MSIC4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_MSIC4*)0xF001C3C4u)

/** \\brief  114, Macrotick and Cycle Counter Value */
#define ERAY0_MTCCV /*lint --e(923)*/ (*(volatile Ifx_ERAY_MTCCV*)0xF001C114u)

/** \\brief  330, New Data Register 1 */
#define ERAY0_NDAT1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NDAT1*)0xF001C330u)

/** \\brief  334, New Data Register 2 */
#define ERAY0_NDAT2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NDAT2*)0xF001C334u)

/** \\brief  338, New Data Register 3 */
#define ERAY0_NDAT3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NDAT3*)0xF001C338u)

/** \\brief  33C, New Data Register 4 */
#define ERAY0_NDAT4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NDAT4*)0xF001C33Cu)

/** \\brief  3A8, New Data Interrupt Control 1 */
#define ERAY0_NDIC1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NDIC1*)0xF001C3A8u)

/** \\brief  3AC, New Data Interrupt Control 2 */
#define ERAY0_NDIC2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NDIC2*)0xF001C3ACu)

/** \\brief  3B0, New Data Interrupt Control 3 */
#define ERAY0_NDIC3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NDIC3*)0xF001C3B0u)

/** \\brief  3B4, New Data Interrupt Control 4 */
#define ERAY0_NDIC4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NDIC4*)0xF001C3B4u)

/** \\brief  8C, NEM Configuration Register */
#define ERAY0_NEMC /*lint --e(923)*/ (*(volatile Ifx_ERAY_NEMC*)0xF001C08Cu)

/** \\brief  1B0, Network Management Vector \note Array index shifted by 1.
 * Example: defined register NMV_1S[0]/NMV_1S0 corresponds to user manual
 * NMV_1S1, ... */
#define ERAY0_NMV_1S0 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NMV*)0xF001C1B0u)

/** Alias (User Manual Name) for ERAY0_NMV_1S0.
* To use register names with standard convension, please use ERAY0_NMV_1S0.
*/
#define	ERAY0_NMV1	(ERAY0_NMV_1S0)

/** \\brief  1B4, Network Management Vector \note Array index shifted by 1.
 * Example: defined register NMV_1S[0]/NMV_1S0 corresponds to user manual
 * NMV_1S1, ... */
#define ERAY0_NMV_1S1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NMV*)0xF001C1B4u)

/** Alias (User Manual Name) for ERAY0_NMV_1S1.
* To use register names with standard convension, please use ERAY0_NMV_1S1.
*/
#define	ERAY0_NMV2	(ERAY0_NMV_1S1)

/** \\brief  1B8, Network Management Vector \note Array index shifted by 1.
 * Example: defined register NMV_1S[0]/NMV_1S0 corresponds to user manual
 * NMV_1S1, ... */
#define ERAY0_NMV_1S2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NMV*)0xF001C1B8u)

/** Alias (User Manual Name) for ERAY0_NMV_1S2.
* To use register names with standard convension, please use ERAY0_NMV_1S2.
*/
#define	ERAY0_NMV3	(ERAY0_NMV_1S2)

/** \\brief  710, Output Buffer Command Mask */
#define ERAY0_OBCM /*lint --e(923)*/ (*(volatile Ifx_ERAY_OBCM*)0xF001C710u)

/** \\brief  714, Output Buffer Command Request */
#define ERAY0_OBCR /*lint --e(923)*/ (*(volatile Ifx_ERAY_OBCR*)0xF001C714u)

/** \\brief  8E8, OCDS Control and Status */
#define ERAY0_OCS /*lint --e(923)*/ (*(volatile Ifx_ERAY_OCS*)0xF001C8E8u)

/** \\brief  11C, Offset Correction Value */
#define ERAY0_OCV /*lint --e(923)*/ (*(volatile Ifx_ERAY_OCV*)0xF001C11Cu)

/** \\brief  170, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY0_OSID_1S0 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C170u)

/** Alias (User Manual Name) for ERAY0_OSID_1S0.
* To use register names with standard convension, please use ERAY0_OSID_1S0.
*/
#define	ERAY0_OSID01	(ERAY0_OSID_1S0)

/** \\brief  174, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY0_OSID_1S1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C174u)

/** Alias (User Manual Name) for ERAY0_OSID_1S1.
* To use register names with standard convension, please use ERAY0_OSID_1S1.
*/
#define	ERAY0_OSID02	(ERAY0_OSID_1S1)

/** \\brief  198, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY0_OSID_1S10 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C198u)

/** Alias (User Manual Name) for ERAY0_OSID_1S10.
* To use register names with standard convension, please use ERAY0_OSID_1S10.
*/
#define	ERAY0_OSID11	(ERAY0_OSID_1S10)

/** \\brief  19C, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY0_OSID_1S11 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C19Cu)

/** Alias (User Manual Name) for ERAY0_OSID_1S11.
* To use register names with standard convension, please use ERAY0_OSID_1S11.
*/
#define	ERAY0_OSID12	(ERAY0_OSID_1S11)

/** \\brief  1A0, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY0_OSID_1S12 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C1A0u)

/** Alias (User Manual Name) for ERAY0_OSID_1S12.
* To use register names with standard convension, please use ERAY0_OSID_1S12.
*/
#define	ERAY0_OSID13	(ERAY0_OSID_1S12)

/** \\brief  1A4, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY0_OSID_1S13 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C1A4u)

/** Alias (User Manual Name) for ERAY0_OSID_1S13.
* To use register names with standard convension, please use ERAY0_OSID_1S13.
*/
#define	ERAY0_OSID14	(ERAY0_OSID_1S13)

/** \\brief  1A8, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY0_OSID_1S14 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C1A8u)

/** Alias (User Manual Name) for ERAY0_OSID_1S14.
* To use register names with standard convension, please use ERAY0_OSID_1S14.
*/
#define	ERAY0_OSID15	(ERAY0_OSID_1S14)

/** \\brief  178, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY0_OSID_1S2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C178u)

/** Alias (User Manual Name) for ERAY0_OSID_1S2.
* To use register names with standard convension, please use ERAY0_OSID_1S2.
*/
#define	ERAY0_OSID03	(ERAY0_OSID_1S2)

/** \\brief  17C, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY0_OSID_1S3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C17Cu)

/** Alias (User Manual Name) for ERAY0_OSID_1S3.
* To use register names with standard convension, please use ERAY0_OSID_1S3.
*/
#define	ERAY0_OSID04	(ERAY0_OSID_1S3)

/** \\brief  180, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY0_OSID_1S4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C180u)

/** Alias (User Manual Name) for ERAY0_OSID_1S4.
* To use register names with standard convension, please use ERAY0_OSID_1S4.
*/
#define	ERAY0_OSID05	(ERAY0_OSID_1S4)

/** \\brief  184, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY0_OSID_1S5 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C184u)

/** Alias (User Manual Name) for ERAY0_OSID_1S5.
* To use register names with standard convension, please use ERAY0_OSID_1S5.
*/
#define	ERAY0_OSID06	(ERAY0_OSID_1S5)

/** \\brief  188, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY0_OSID_1S6 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C188u)

/** Alias (User Manual Name) for ERAY0_OSID_1S6.
* To use register names with standard convension, please use ERAY0_OSID_1S6.
*/
#define	ERAY0_OSID07	(ERAY0_OSID_1S6)

/** \\brief  18C, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY0_OSID_1S7 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C18Cu)

/** Alias (User Manual Name) for ERAY0_OSID_1S7.
* To use register names with standard convension, please use ERAY0_OSID_1S7.
*/
#define	ERAY0_OSID08	(ERAY0_OSID_1S7)

/** \\brief  190, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY0_OSID_1S8 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C190u)

/** Alias (User Manual Name) for ERAY0_OSID_1S8.
* To use register names with standard convension, please use ERAY0_OSID_1S8.
*/
#define	ERAY0_OSID09	(ERAY0_OSID_1S8)

/** \\brief  194, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY0_OSID_1S9 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001C194u)

/** Alias (User Manual Name) for ERAY0_OSID_1S9.
* To use register names with standard convension, please use ERAY0_OSID_1S9.
*/
#define	ERAY0_OSID10	(ERAY0_OSID_1S9)

/** \\brief  870, OCDS Trigger Set Select */
#define ERAY0_OTSS /*lint --e(923)*/ (*(volatile Ifx_ERAY_OTSS*)0xF001C870u)

/** \\brief  90, PRT Configuration Register 1 */
#define ERAY0_PRTC1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_PRTC1*)0xF001C090u)

/** \\brief  94, PRT Configuration Register 2 */
#define ERAY0_PRTC2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_PRTC2*)0xF001C094u)

/** \\brief  118, Rate Correction Value */
#define ERAY0_RCV /*lint --e(923)*/ (*(volatile Ifx_ERAY_RCV*)0xF001C118u)

/** \\brief  600, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S0 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C600u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S0.
* To use register names with standard convension, please use ERAY0_RDDS_1S0.
*/
#define	ERAY0_RDDS01	(ERAY0_RDDS_1S0)

/** \\brief  604, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C604u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S1.
* To use register names with standard convension, please use ERAY0_RDDS_1S1.
*/
#define	ERAY0_RDDS02	(ERAY0_RDDS_1S1)

/** \\brief  628, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S10 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C628u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S10.
* To use register names with standard convension, please use ERAY0_RDDS_1S10.
*/
#define	ERAY0_RDDS11	(ERAY0_RDDS_1S10)

/** \\brief  62C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S11 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C62Cu)

/** Alias (User Manual Name) for ERAY0_RDDS_1S11.
* To use register names with standard convension, please use ERAY0_RDDS_1S11.
*/
#define	ERAY0_RDDS12	(ERAY0_RDDS_1S11)

/** \\brief  630, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S12 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C630u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S12.
* To use register names with standard convension, please use ERAY0_RDDS_1S12.
*/
#define	ERAY0_RDDS13	(ERAY0_RDDS_1S12)

/** \\brief  634, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S13 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C634u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S13.
* To use register names with standard convension, please use ERAY0_RDDS_1S13.
*/
#define	ERAY0_RDDS14	(ERAY0_RDDS_1S13)

/** \\brief  638, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S14 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C638u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S14.
* To use register names with standard convension, please use ERAY0_RDDS_1S14.
*/
#define	ERAY0_RDDS15	(ERAY0_RDDS_1S14)

/** \\brief  63C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S15 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C63Cu)

/** Alias (User Manual Name) for ERAY0_RDDS_1S15.
* To use register names with standard convension, please use ERAY0_RDDS_1S15.
*/
#define	ERAY0_RDDS16	(ERAY0_RDDS_1S15)

/** \\brief  640, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S16 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C640u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S16.
* To use register names with standard convension, please use ERAY0_RDDS_1S16.
*/
#define	ERAY0_RDDS17	(ERAY0_RDDS_1S16)

/** \\brief  644, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S17 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C644u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S17.
* To use register names with standard convension, please use ERAY0_RDDS_1S17.
*/
#define	ERAY0_RDDS18	(ERAY0_RDDS_1S17)

/** \\brief  648, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S18 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C648u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S18.
* To use register names with standard convension, please use ERAY0_RDDS_1S18.
*/
#define	ERAY0_RDDS19	(ERAY0_RDDS_1S18)

/** \\brief  64C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S19 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C64Cu)

/** Alias (User Manual Name) for ERAY0_RDDS_1S19.
* To use register names with standard convension, please use ERAY0_RDDS_1S19.
*/
#define	ERAY0_RDDS20	(ERAY0_RDDS_1S19)

/** \\brief  608, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C608u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S2.
* To use register names with standard convension, please use ERAY0_RDDS_1S2.
*/
#define	ERAY0_RDDS03	(ERAY0_RDDS_1S2)

/** \\brief  650, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S20 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C650u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S20.
* To use register names with standard convension, please use ERAY0_RDDS_1S20.
*/
#define	ERAY0_RDDS21	(ERAY0_RDDS_1S20)

/** \\brief  654, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S21 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C654u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S21.
* To use register names with standard convension, please use ERAY0_RDDS_1S21.
*/
#define	ERAY0_RDDS22	(ERAY0_RDDS_1S21)

/** \\brief  658, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S22 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C658u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S22.
* To use register names with standard convension, please use ERAY0_RDDS_1S22.
*/
#define	ERAY0_RDDS23	(ERAY0_RDDS_1S22)

/** \\brief  65C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S23 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C65Cu)

/** Alias (User Manual Name) for ERAY0_RDDS_1S23.
* To use register names with standard convension, please use ERAY0_RDDS_1S23.
*/
#define	ERAY0_RDDS24	(ERAY0_RDDS_1S23)

/** \\brief  660, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S24 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C660u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S24.
* To use register names with standard convension, please use ERAY0_RDDS_1S24.
*/
#define	ERAY0_RDDS25	(ERAY0_RDDS_1S24)

/** \\brief  664, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S25 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C664u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S25.
* To use register names with standard convension, please use ERAY0_RDDS_1S25.
*/
#define	ERAY0_RDDS26	(ERAY0_RDDS_1S25)

/** \\brief  668, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S26 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C668u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S26.
* To use register names with standard convension, please use ERAY0_RDDS_1S26.
*/
#define	ERAY0_RDDS27	(ERAY0_RDDS_1S26)

/** \\brief  66C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S27 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C66Cu)

/** Alias (User Manual Name) for ERAY0_RDDS_1S27.
* To use register names with standard convension, please use ERAY0_RDDS_1S27.
*/
#define	ERAY0_RDDS28	(ERAY0_RDDS_1S27)

/** \\brief  670, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S28 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C670u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S28.
* To use register names with standard convension, please use ERAY0_RDDS_1S28.
*/
#define	ERAY0_RDDS29	(ERAY0_RDDS_1S28)

/** \\brief  674, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S29 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C674u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S29.
* To use register names with standard convension, please use ERAY0_RDDS_1S29.
*/
#define	ERAY0_RDDS30	(ERAY0_RDDS_1S29)

/** \\brief  60C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C60Cu)

/** Alias (User Manual Name) for ERAY0_RDDS_1S3.
* To use register names with standard convension, please use ERAY0_RDDS_1S3.
*/
#define	ERAY0_RDDS04	(ERAY0_RDDS_1S3)

/** \\brief  678, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S30 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C678u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S30.
* To use register names with standard convension, please use ERAY0_RDDS_1S30.
*/
#define	ERAY0_RDDS31	(ERAY0_RDDS_1S30)

/** \\brief  67C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S31 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C67Cu)

/** Alias (User Manual Name) for ERAY0_RDDS_1S31.
* To use register names with standard convension, please use ERAY0_RDDS_1S31.
*/
#define	ERAY0_RDDS32	(ERAY0_RDDS_1S31)

/** \\brief  680, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S32 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C680u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S32.
* To use register names with standard convension, please use ERAY0_RDDS_1S32.
*/
#define	ERAY0_RDDS33	(ERAY0_RDDS_1S32)

/** \\brief  684, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S33 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C684u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S33.
* To use register names with standard convension, please use ERAY0_RDDS_1S33.
*/
#define	ERAY0_RDDS34	(ERAY0_RDDS_1S33)

/** \\brief  688, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S34 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C688u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S34.
* To use register names with standard convension, please use ERAY0_RDDS_1S34.
*/
#define	ERAY0_RDDS35	(ERAY0_RDDS_1S34)

/** \\brief  68C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S35 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C68Cu)

/** Alias (User Manual Name) for ERAY0_RDDS_1S35.
* To use register names with standard convension, please use ERAY0_RDDS_1S35.
*/
#define	ERAY0_RDDS36	(ERAY0_RDDS_1S35)

/** \\brief  690, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S36 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C690u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S36.
* To use register names with standard convension, please use ERAY0_RDDS_1S36.
*/
#define	ERAY0_RDDS37	(ERAY0_RDDS_1S36)

/** \\brief  694, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S37 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C694u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S37.
* To use register names with standard convension, please use ERAY0_RDDS_1S37.
*/
#define	ERAY0_RDDS38	(ERAY0_RDDS_1S37)

/** \\brief  698, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S38 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C698u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S38.
* To use register names with standard convension, please use ERAY0_RDDS_1S38.
*/
#define	ERAY0_RDDS39	(ERAY0_RDDS_1S38)

/** \\brief  69C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S39 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C69Cu)

/** Alias (User Manual Name) for ERAY0_RDDS_1S39.
* To use register names with standard convension, please use ERAY0_RDDS_1S39.
*/
#define	ERAY0_RDDS40	(ERAY0_RDDS_1S39)

/** \\brief  610, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C610u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S4.
* To use register names with standard convension, please use ERAY0_RDDS_1S4.
*/
#define	ERAY0_RDDS05	(ERAY0_RDDS_1S4)

/** \\brief  6A0, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S40 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6A0u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S40.
* To use register names with standard convension, please use ERAY0_RDDS_1S40.
*/
#define	ERAY0_RDDS41	(ERAY0_RDDS_1S40)

/** \\brief  6A4, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S41 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6A4u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S41.
* To use register names with standard convension, please use ERAY0_RDDS_1S41.
*/
#define	ERAY0_RDDS42	(ERAY0_RDDS_1S41)

/** \\brief  6A8, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S42 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6A8u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S42.
* To use register names with standard convension, please use ERAY0_RDDS_1S42.
*/
#define	ERAY0_RDDS43	(ERAY0_RDDS_1S42)

/** \\brief  6AC, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S43 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6ACu)

/** Alias (User Manual Name) for ERAY0_RDDS_1S43.
* To use register names with standard convension, please use ERAY0_RDDS_1S43.
*/
#define	ERAY0_RDDS44	(ERAY0_RDDS_1S43)

/** \\brief  6B0, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S44 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6B0u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S44.
* To use register names with standard convension, please use ERAY0_RDDS_1S44.
*/
#define	ERAY0_RDDS45	(ERAY0_RDDS_1S44)

/** \\brief  6B4, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S45 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6B4u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S45.
* To use register names with standard convension, please use ERAY0_RDDS_1S45.
*/
#define	ERAY0_RDDS46	(ERAY0_RDDS_1S45)

/** \\brief  6B8, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S46 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6B8u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S46.
* To use register names with standard convension, please use ERAY0_RDDS_1S46.
*/
#define	ERAY0_RDDS47	(ERAY0_RDDS_1S46)

/** \\brief  6BC, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S47 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6BCu)

/** Alias (User Manual Name) for ERAY0_RDDS_1S47.
* To use register names with standard convension, please use ERAY0_RDDS_1S47.
*/
#define	ERAY0_RDDS48	(ERAY0_RDDS_1S47)

/** \\brief  6C0, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S48 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6C0u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S48.
* To use register names with standard convension, please use ERAY0_RDDS_1S48.
*/
#define	ERAY0_RDDS49	(ERAY0_RDDS_1S48)

/** \\brief  6C4, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S49 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6C4u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S49.
* To use register names with standard convension, please use ERAY0_RDDS_1S49.
*/
#define	ERAY0_RDDS50	(ERAY0_RDDS_1S49)

/** \\brief  614, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S5 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C614u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S5.
* To use register names with standard convension, please use ERAY0_RDDS_1S5.
*/
#define	ERAY0_RDDS06	(ERAY0_RDDS_1S5)

/** \\brief  6C8, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S50 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6C8u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S50.
* To use register names with standard convension, please use ERAY0_RDDS_1S50.
*/
#define	ERAY0_RDDS51	(ERAY0_RDDS_1S50)

/** \\brief  6CC, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S51 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6CCu)

/** Alias (User Manual Name) for ERAY0_RDDS_1S51.
* To use register names with standard convension, please use ERAY0_RDDS_1S51.
*/
#define	ERAY0_RDDS52	(ERAY0_RDDS_1S51)

/** \\brief  6D0, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S52 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6D0u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S52.
* To use register names with standard convension, please use ERAY0_RDDS_1S52.
*/
#define	ERAY0_RDDS53	(ERAY0_RDDS_1S52)

/** \\brief  6D4, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S53 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6D4u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S53.
* To use register names with standard convension, please use ERAY0_RDDS_1S53.
*/
#define	ERAY0_RDDS54	(ERAY0_RDDS_1S53)

/** \\brief  6D8, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S54 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6D8u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S54.
* To use register names with standard convension, please use ERAY0_RDDS_1S54.
*/
#define	ERAY0_RDDS55	(ERAY0_RDDS_1S54)

/** \\brief  6DC, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S55 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6DCu)

/** Alias (User Manual Name) for ERAY0_RDDS_1S55.
* To use register names with standard convension, please use ERAY0_RDDS_1S55.
*/
#define	ERAY0_RDDS56	(ERAY0_RDDS_1S55)

/** \\brief  6E0, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S56 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6E0u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S56.
* To use register names with standard convension, please use ERAY0_RDDS_1S56.
*/
#define	ERAY0_RDDS57	(ERAY0_RDDS_1S56)

/** \\brief  6E4, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S57 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6E4u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S57.
* To use register names with standard convension, please use ERAY0_RDDS_1S57.
*/
#define	ERAY0_RDDS58	(ERAY0_RDDS_1S57)

/** \\brief  6E8, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S58 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6E8u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S58.
* To use register names with standard convension, please use ERAY0_RDDS_1S58.
*/
#define	ERAY0_RDDS59	(ERAY0_RDDS_1S58)

/** \\brief  6EC, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S59 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6ECu)

/** Alias (User Manual Name) for ERAY0_RDDS_1S59.
* To use register names with standard convension, please use ERAY0_RDDS_1S59.
*/
#define	ERAY0_RDDS60	(ERAY0_RDDS_1S59)

/** \\brief  618, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S6 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C618u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S6.
* To use register names with standard convension, please use ERAY0_RDDS_1S6.
*/
#define	ERAY0_RDDS07	(ERAY0_RDDS_1S6)

/** \\brief  6F0, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S60 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6F0u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S60.
* To use register names with standard convension, please use ERAY0_RDDS_1S60.
*/
#define	ERAY0_RDDS61	(ERAY0_RDDS_1S60)

/** \\brief  6F4, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S61 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6F4u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S61.
* To use register names with standard convension, please use ERAY0_RDDS_1S61.
*/
#define	ERAY0_RDDS62	(ERAY0_RDDS_1S61)

/** \\brief  6F8, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S62 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6F8u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S62.
* To use register names with standard convension, please use ERAY0_RDDS_1S62.
*/
#define	ERAY0_RDDS63	(ERAY0_RDDS_1S62)

/** \\brief  6FC, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S63 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C6FCu)

/** Alias (User Manual Name) for ERAY0_RDDS_1S63.
* To use register names with standard convension, please use ERAY0_RDDS_1S63.
*/
#define	ERAY0_RDDS64	(ERAY0_RDDS_1S63)

/** \\brief  61C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S7 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C61Cu)

/** Alias (User Manual Name) for ERAY0_RDDS_1S7.
* To use register names with standard convension, please use ERAY0_RDDS_1S7.
*/
#define	ERAY0_RDDS08	(ERAY0_RDDS_1S7)

/** \\brief  620, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S8 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C620u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S8.
* To use register names with standard convension, please use ERAY0_RDDS_1S8.
*/
#define	ERAY0_RDDS09	(ERAY0_RDDS_1S8)

/** \\brief  624, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY0_RDDS_1S9 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001C624u)

/** Alias (User Manual Name) for ERAY0_RDDS_1S9.
* To use register names with standard convension, please use ERAY0_RDDS_1S9.
*/
#define	ERAY0_RDDS10	(ERAY0_RDDS_1S9)

/** \\brief  700, Read Header Section 1 */
#define ERAY0_RDHS1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDHS1*)0xF001C700u)

/** \\brief  704, Read Header Section 2 */
#define ERAY0_RDHS2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDHS2*)0xF001C704u)

/** \\brief  708, Read Header Section 3 */
#define ERAY0_RDHS3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDHS3*)0xF001C708u)

/** \\brief  110, Slot Counter Value */
#define ERAY0_SCV /*lint --e(923)*/ (*(volatile Ifx_ERAY_SCV*)0xF001C110u)

/** \\brief  120, SYNC Frame Status */
#define ERAY0_SFS /*lint --e(923)*/ (*(volatile Ifx_ERAY_SFS*)0xF001C120u)

/** \\brief  3C, Status Service Request Enable Reset */
#define ERAY0_SIER /*lint --e(923)*/ (*(volatile Ifx_ERAY_SIER*)0xF001C03Cu)

/** \\brief  38, Status Service Request Enable Set */
#define ERAY0_SIES /*lint --e(923)*/ (*(volatile Ifx_ERAY_SIES*)0xF001C038u)

/** \\brief  2C, Status Service Request Line Select */
#define ERAY0_SILS /*lint --e(923)*/ (*(volatile Ifx_ERAY_SILS*)0xF001C02Cu)

/** \\brief  24, Status Service Request Register */
#define ERAY0_SIR /*lint --e(923)*/ (*(volatile Ifx_ERAY_SIR*)0xF001C024u)

/** \\brief  4C, Stop Watch Register 1 */
#define ERAY0_STPW1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_STPW1*)0xF001C04Cu)

/** \\brief  50, Stop Watch Register 2 */
#define ERAY0_STPW2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_STPW2*)0xF001C050u)

/** \\brief  80, SUC Configuration Register 1 */
#define ERAY0_SUCC1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_SUCC1*)0xF001C080u)

/** \\brief  84, SUC Configuration Register 2 */
#define ERAY0_SUCC2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_SUCC2*)0xF001C084u)

/** \\brief  88, SUC Configuration Register 3 */
#define ERAY0_SUCC3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_SUCC3*)0xF001C088u)

/** \\brief  124, Symbol Window and Network Idle Time Status */
#define ERAY0_SWNIT /*lint --e(923)*/ (*(volatile Ifx_ERAY_SWNIT*)0xF001C124u)

/** \\brief  44, Timer 0 Configuration */
#define ERAY0_T0C /*lint --e(923)*/ (*(volatile Ifx_ERAY_T0C*)0xF001C044u)

/** \\brief  48, Timer 1 Configuration */
#define ERAY0_T1C /*lint --e(923)*/ (*(volatile Ifx_ERAY_T1C*)0xF001C048u)

/** \\brief  10, Test Register 1 */
#define ERAY0_TEST1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_TEST1*)0xF001C010u)

/** \\brief  14, Test Register 2 */
#define ERAY0_TEST2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_TEST2*)0xF001C014u)

/** \\brief  320, Transmission Request Register 1 */
#define ERAY0_TXRQ1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_TXRQ1*)0xF001C320u)

/** \\brief  324, Transmission Request Register 2 */
#define ERAY0_TXRQ2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_TXRQ2*)0xF001C324u)

/** \\brief  328, Transmission Request Register 3 */
#define ERAY0_TXRQ3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_TXRQ3*)0xF001C328u)

/** \\brief  32C, Transmission Request Register 4 */
#define ERAY0_TXRQ4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_TXRQ4*)0xF001C32Cu)

/** \\brief  400, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S0 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C400u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S0.
* To use register names with standard convension, please use ERAY0_WRDS_1S0.
*/
#define	ERAY0_WRDS01	(ERAY0_WRDS_1S0)

/** \\brief  404, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C404u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S1.
* To use register names with standard convension, please use ERAY0_WRDS_1S1.
*/
#define	ERAY0_WRDS02	(ERAY0_WRDS_1S1)

/** \\brief  428, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S10 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C428u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S10.
* To use register names with standard convension, please use ERAY0_WRDS_1S10.
*/
#define	ERAY0_WRDS11	(ERAY0_WRDS_1S10)

/** \\brief  42C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S11 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C42Cu)

/** Alias (User Manual Name) for ERAY0_WRDS_1S11.
* To use register names with standard convension, please use ERAY0_WRDS_1S11.
*/
#define	ERAY0_WRDS12	(ERAY0_WRDS_1S11)

/** \\brief  430, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S12 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C430u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S12.
* To use register names with standard convension, please use ERAY0_WRDS_1S12.
*/
#define	ERAY0_WRDS13	(ERAY0_WRDS_1S12)

/** \\brief  434, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S13 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C434u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S13.
* To use register names with standard convension, please use ERAY0_WRDS_1S13.
*/
#define	ERAY0_WRDS14	(ERAY0_WRDS_1S13)

/** \\brief  438, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S14 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C438u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S14.
* To use register names with standard convension, please use ERAY0_WRDS_1S14.
*/
#define	ERAY0_WRDS15	(ERAY0_WRDS_1S14)

/** \\brief  43C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S15 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C43Cu)

/** Alias (User Manual Name) for ERAY0_WRDS_1S15.
* To use register names with standard convension, please use ERAY0_WRDS_1S15.
*/
#define	ERAY0_WRDS16	(ERAY0_WRDS_1S15)

/** \\brief  440, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S16 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C440u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S16.
* To use register names with standard convension, please use ERAY0_WRDS_1S16.
*/
#define	ERAY0_WRDS17	(ERAY0_WRDS_1S16)

/** \\brief  444, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S17 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C444u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S17.
* To use register names with standard convension, please use ERAY0_WRDS_1S17.
*/
#define	ERAY0_WRDS18	(ERAY0_WRDS_1S17)

/** \\brief  448, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S18 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C448u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S18.
* To use register names with standard convension, please use ERAY0_WRDS_1S18.
*/
#define	ERAY0_WRDS19	(ERAY0_WRDS_1S18)

/** \\brief  44C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S19 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C44Cu)

/** Alias (User Manual Name) for ERAY0_WRDS_1S19.
* To use register names with standard convension, please use ERAY0_WRDS_1S19.
*/
#define	ERAY0_WRDS20	(ERAY0_WRDS_1S19)

/** \\brief  408, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C408u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S2.
* To use register names with standard convension, please use ERAY0_WRDS_1S2.
*/
#define	ERAY0_WRDS03	(ERAY0_WRDS_1S2)

/** \\brief  450, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S20 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C450u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S20.
* To use register names with standard convension, please use ERAY0_WRDS_1S20.
*/
#define	ERAY0_WRDS21	(ERAY0_WRDS_1S20)

/** \\brief  454, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S21 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C454u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S21.
* To use register names with standard convension, please use ERAY0_WRDS_1S21.
*/
#define	ERAY0_WRDS22	(ERAY0_WRDS_1S21)

/** \\brief  458, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S22 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C458u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S22.
* To use register names with standard convension, please use ERAY0_WRDS_1S22.
*/
#define	ERAY0_WRDS23	(ERAY0_WRDS_1S22)

/** \\brief  45C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S23 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C45Cu)

/** Alias (User Manual Name) for ERAY0_WRDS_1S23.
* To use register names with standard convension, please use ERAY0_WRDS_1S23.
*/
#define	ERAY0_WRDS24	(ERAY0_WRDS_1S23)

/** \\brief  460, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S24 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C460u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S24.
* To use register names with standard convension, please use ERAY0_WRDS_1S24.
*/
#define	ERAY0_WRDS25	(ERAY0_WRDS_1S24)

/** \\brief  464, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S25 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C464u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S25.
* To use register names with standard convension, please use ERAY0_WRDS_1S25.
*/
#define	ERAY0_WRDS26	(ERAY0_WRDS_1S25)

/** \\brief  468, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S26 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C468u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S26.
* To use register names with standard convension, please use ERAY0_WRDS_1S26.
*/
#define	ERAY0_WRDS27	(ERAY0_WRDS_1S26)

/** \\brief  46C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S27 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C46Cu)

/** Alias (User Manual Name) for ERAY0_WRDS_1S27.
* To use register names with standard convension, please use ERAY0_WRDS_1S27.
*/
#define	ERAY0_WRDS28	(ERAY0_WRDS_1S27)

/** \\brief  470, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S28 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C470u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S28.
* To use register names with standard convension, please use ERAY0_WRDS_1S28.
*/
#define	ERAY0_WRDS29	(ERAY0_WRDS_1S28)

/** \\brief  474, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S29 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C474u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S29.
* To use register names with standard convension, please use ERAY0_WRDS_1S29.
*/
#define	ERAY0_WRDS30	(ERAY0_WRDS_1S29)

/** \\brief  40C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C40Cu)

/** Alias (User Manual Name) for ERAY0_WRDS_1S3.
* To use register names with standard convension, please use ERAY0_WRDS_1S3.
*/
#define	ERAY0_WRDS04	(ERAY0_WRDS_1S3)

/** \\brief  478, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S30 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C478u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S30.
* To use register names with standard convension, please use ERAY0_WRDS_1S30.
*/
#define	ERAY0_WRDS31	(ERAY0_WRDS_1S30)

/** \\brief  47C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S31 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C47Cu)

/** Alias (User Manual Name) for ERAY0_WRDS_1S31.
* To use register names with standard convension, please use ERAY0_WRDS_1S31.
*/
#define	ERAY0_WRDS32	(ERAY0_WRDS_1S31)

/** \\brief  480, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S32 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C480u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S32.
* To use register names with standard convension, please use ERAY0_WRDS_1S32.
*/
#define	ERAY0_WRDS33	(ERAY0_WRDS_1S32)

/** \\brief  484, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S33 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C484u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S33.
* To use register names with standard convension, please use ERAY0_WRDS_1S33.
*/
#define	ERAY0_WRDS34	(ERAY0_WRDS_1S33)

/** \\brief  488, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S34 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C488u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S34.
* To use register names with standard convension, please use ERAY0_WRDS_1S34.
*/
#define	ERAY0_WRDS35	(ERAY0_WRDS_1S34)

/** \\brief  48C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S35 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C48Cu)

/** Alias (User Manual Name) for ERAY0_WRDS_1S35.
* To use register names with standard convension, please use ERAY0_WRDS_1S35.
*/
#define	ERAY0_WRDS36	(ERAY0_WRDS_1S35)

/** \\brief  490, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S36 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C490u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S36.
* To use register names with standard convension, please use ERAY0_WRDS_1S36.
*/
#define	ERAY0_WRDS37	(ERAY0_WRDS_1S36)

/** \\brief  494, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S37 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C494u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S37.
* To use register names with standard convension, please use ERAY0_WRDS_1S37.
*/
#define	ERAY0_WRDS38	(ERAY0_WRDS_1S37)

/** \\brief  498, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S38 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C498u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S38.
* To use register names with standard convension, please use ERAY0_WRDS_1S38.
*/
#define	ERAY0_WRDS39	(ERAY0_WRDS_1S38)

/** \\brief  49C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S39 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C49Cu)

/** Alias (User Manual Name) for ERAY0_WRDS_1S39.
* To use register names with standard convension, please use ERAY0_WRDS_1S39.
*/
#define	ERAY0_WRDS40	(ERAY0_WRDS_1S39)

/** \\brief  410, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C410u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S4.
* To use register names with standard convension, please use ERAY0_WRDS_1S4.
*/
#define	ERAY0_WRDS05	(ERAY0_WRDS_1S4)

/** \\brief  4A0, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S40 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4A0u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S40.
* To use register names with standard convension, please use ERAY0_WRDS_1S40.
*/
#define	ERAY0_WRDS41	(ERAY0_WRDS_1S40)

/** \\brief  4A4, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S41 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4A4u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S41.
* To use register names with standard convension, please use ERAY0_WRDS_1S41.
*/
#define	ERAY0_WRDS42	(ERAY0_WRDS_1S41)

/** \\brief  4A8, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S42 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4A8u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S42.
* To use register names with standard convension, please use ERAY0_WRDS_1S42.
*/
#define	ERAY0_WRDS43	(ERAY0_WRDS_1S42)

/** \\brief  4AC, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S43 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4ACu)

/** Alias (User Manual Name) for ERAY0_WRDS_1S43.
* To use register names with standard convension, please use ERAY0_WRDS_1S43.
*/
#define	ERAY0_WRDS44	(ERAY0_WRDS_1S43)

/** \\brief  4B0, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S44 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4B0u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S44.
* To use register names with standard convension, please use ERAY0_WRDS_1S44.
*/
#define	ERAY0_WRDS45	(ERAY0_WRDS_1S44)

/** \\brief  4B4, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S45 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4B4u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S45.
* To use register names with standard convension, please use ERAY0_WRDS_1S45.
*/
#define	ERAY0_WRDS46	(ERAY0_WRDS_1S45)

/** \\brief  4B8, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S46 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4B8u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S46.
* To use register names with standard convension, please use ERAY0_WRDS_1S46.
*/
#define	ERAY0_WRDS47	(ERAY0_WRDS_1S46)

/** \\brief  4BC, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S47 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4BCu)

/** Alias (User Manual Name) for ERAY0_WRDS_1S47.
* To use register names with standard convension, please use ERAY0_WRDS_1S47.
*/
#define	ERAY0_WRDS48	(ERAY0_WRDS_1S47)

/** \\brief  4C0, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S48 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4C0u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S48.
* To use register names with standard convension, please use ERAY0_WRDS_1S48.
*/
#define	ERAY0_WRDS49	(ERAY0_WRDS_1S48)

/** \\brief  4C4, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S49 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4C4u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S49.
* To use register names with standard convension, please use ERAY0_WRDS_1S49.
*/
#define	ERAY0_WRDS50	(ERAY0_WRDS_1S49)

/** \\brief  414, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S5 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C414u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S5.
* To use register names with standard convension, please use ERAY0_WRDS_1S5.
*/
#define	ERAY0_WRDS06	(ERAY0_WRDS_1S5)

/** \\brief  4C8, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S50 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4C8u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S50.
* To use register names with standard convension, please use ERAY0_WRDS_1S50.
*/
#define	ERAY0_WRDS51	(ERAY0_WRDS_1S50)

/** \\brief  4CC, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S51 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4CCu)

/** Alias (User Manual Name) for ERAY0_WRDS_1S51.
* To use register names with standard convension, please use ERAY0_WRDS_1S51.
*/
#define	ERAY0_WRDS52	(ERAY0_WRDS_1S51)

/** \\brief  4D0, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S52 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4D0u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S52.
* To use register names with standard convension, please use ERAY0_WRDS_1S52.
*/
#define	ERAY0_WRDS53	(ERAY0_WRDS_1S52)

/** \\brief  4D4, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S53 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4D4u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S53.
* To use register names with standard convension, please use ERAY0_WRDS_1S53.
*/
#define	ERAY0_WRDS54	(ERAY0_WRDS_1S53)

/** \\brief  4D8, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S54 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4D8u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S54.
* To use register names with standard convension, please use ERAY0_WRDS_1S54.
*/
#define	ERAY0_WRDS55	(ERAY0_WRDS_1S54)

/** \\brief  4DC, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S55 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4DCu)

/** Alias (User Manual Name) for ERAY0_WRDS_1S55.
* To use register names with standard convension, please use ERAY0_WRDS_1S55.
*/
#define	ERAY0_WRDS56	(ERAY0_WRDS_1S55)

/** \\brief  4E0, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S56 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4E0u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S56.
* To use register names with standard convension, please use ERAY0_WRDS_1S56.
*/
#define	ERAY0_WRDS57	(ERAY0_WRDS_1S56)

/** \\brief  4E4, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S57 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4E4u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S57.
* To use register names with standard convension, please use ERAY0_WRDS_1S57.
*/
#define	ERAY0_WRDS58	(ERAY0_WRDS_1S57)

/** \\brief  4E8, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S58 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4E8u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S58.
* To use register names with standard convension, please use ERAY0_WRDS_1S58.
*/
#define	ERAY0_WRDS59	(ERAY0_WRDS_1S58)

/** \\brief  4EC, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S59 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4ECu)

/** Alias (User Manual Name) for ERAY0_WRDS_1S59.
* To use register names with standard convension, please use ERAY0_WRDS_1S59.
*/
#define	ERAY0_WRDS60	(ERAY0_WRDS_1S59)

/** \\brief  418, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S6 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C418u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S6.
* To use register names with standard convension, please use ERAY0_WRDS_1S6.
*/
#define	ERAY0_WRDS07	(ERAY0_WRDS_1S6)

/** \\brief  4F0, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S60 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4F0u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S60.
* To use register names with standard convension, please use ERAY0_WRDS_1S60.
*/
#define	ERAY0_WRDS61	(ERAY0_WRDS_1S60)

/** \\brief  4F4, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S61 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4F4u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S61.
* To use register names with standard convension, please use ERAY0_WRDS_1S61.
*/
#define	ERAY0_WRDS62	(ERAY0_WRDS_1S61)

/** \\brief  4F8, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S62 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4F8u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S62.
* To use register names with standard convension, please use ERAY0_WRDS_1S62.
*/
#define	ERAY0_WRDS63	(ERAY0_WRDS_1S62)

/** \\brief  4FC, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S63 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C4FCu)

/** Alias (User Manual Name) for ERAY0_WRDS_1S63.
* To use register names with standard convension, please use ERAY0_WRDS_1S63.
*/
#define	ERAY0_WRDS64	(ERAY0_WRDS_1S63)

/** \\brief  41C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S7 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C41Cu)

/** Alias (User Manual Name) for ERAY0_WRDS_1S7.
* To use register names with standard convension, please use ERAY0_WRDS_1S7.
*/
#define	ERAY0_WRDS08	(ERAY0_WRDS_1S7)

/** \\brief  420, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S8 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C420u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S8.
* To use register names with standard convension, please use ERAY0_WRDS_1S8.
*/
#define	ERAY0_WRDS09	(ERAY0_WRDS_1S8)

/** \\brief  424, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY0_WRDS_1S9 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001C424u)

/** Alias (User Manual Name) for ERAY0_WRDS_1S9.
* To use register names with standard convension, please use ERAY0_WRDS_1S9.
*/
#define	ERAY0_WRDS10	(ERAY0_WRDS_1S9)

/** \\brief  500, Write Header Section 1 */
#define ERAY0_WRHS1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRHS1*)0xF001C500u)

/** \\brief  504, Write Header Section 2 */
#define ERAY0_WRHS2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRHS2*)0xF001C504u)

/** \\brief  508, Write Header Section 3 */
#define ERAY0_WRHS3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRHS3*)0xF001C508u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Eray_Cfg_Eray1
 * \{  */

/** \\brief  8FC, Access Enable Register 0 */
#define ERAY1_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ACCEN0*)0xF00178FCu)

/** \\brief  8F8, Access Enable Register 1 */
#define ERAY1_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ACCEN1*)0xF00178F8u)

/** \\brief  128, Aggregated Channel Status */
#define ERAY1_ACS /*lint --e(923)*/ (*(volatile Ifx_ERAY_ACS*)0xF0017128u)

/** \\brief  104, Communication Controller Error Vector */
#define ERAY1_CCEV /*lint --e(923)*/ (*(volatile Ifx_ERAY_CCEV*)0xF0017104u)

/** \\brief  100, Communication Controller Status Vector */
#define ERAY1_CCSV /*lint --e(923)*/ (*(volatile Ifx_ERAY_CCSV*)0xF0017100u)

/** \\brief  0, Clock Control Register */
#define ERAY1_CLC /*lint --e(923)*/ (*(volatile Ifx_ERAY_CLC*)0xF0017000u)

/** \\brief  3F0, Core Release Register */
#define ERAY1_CREL /*lint --e(923)*/ (*(volatile Ifx_ERAY_CREL*)0xF00173F0u)

/** \\brief  4, Busy and Input Buffer Control Register */
#define ERAY1_CUST1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_CUST1*)0xF0017004u)

/** \\brief  C, Customer Interface Timeout Counter */
#define ERAY1_CUST3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_CUST3*)0xF001700Cu)

/** \\brief  34, Error Service Request Enable Reset */
#define ERAY1_EIER /*lint --e(923)*/ (*(volatile Ifx_ERAY_EIER*)0xF0017034u)

/** \\brief  30, Error Service Request Enable Set */
#define ERAY1_EIES /*lint --e(923)*/ (*(volatile Ifx_ERAY_EIES*)0xF0017030u)

/** \\brief  28, Error Service Request Line Select */
#define ERAY1_EILS /*lint --e(923)*/ (*(volatile Ifx_ERAY_EILS*)0xF0017028u)

/** \\brief  20, Error Service Request Register */
#define ERAY1_EIR /*lint --e(923)*/ (*(volatile Ifx_ERAY_EIR*)0xF0017020u)

/** \\brief  3F4, Endian Register */
#define ERAY1_ENDN /*lint --e(923)*/ (*(volatile Ifx_ERAY_ENDN*)0xF00173F4u)

/** \\brief  130, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY1_ESID_1S0 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF0017130u)

/** Alias (User Manual Name) for ERAY1_ESID_1S0.
* To use register names with standard convension, please use ERAY1_ESID_1S0.
*/
#define	ERAY1_ESID01	(ERAY1_ESID_1S0)

/** \\brief  134, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY1_ESID_1S1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF0017134u)

/** Alias (User Manual Name) for ERAY1_ESID_1S1.
* To use register names with standard convension, please use ERAY1_ESID_1S1.
*/
#define	ERAY1_ESID02	(ERAY1_ESID_1S1)

/** \\brief  158, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY1_ESID_1S10 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF0017158u)

/** Alias (User Manual Name) for ERAY1_ESID_1S10.
* To use register names with standard convension, please use ERAY1_ESID_1S10.
*/
#define	ERAY1_ESID11	(ERAY1_ESID_1S10)

/** \\brief  15C, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY1_ESID_1S11 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001715Cu)

/** Alias (User Manual Name) for ERAY1_ESID_1S11.
* To use register names with standard convension, please use ERAY1_ESID_1S11.
*/
#define	ERAY1_ESID12	(ERAY1_ESID_1S11)

/** \\brief  160, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY1_ESID_1S12 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF0017160u)

/** Alias (User Manual Name) for ERAY1_ESID_1S12.
* To use register names with standard convension, please use ERAY1_ESID_1S12.
*/
#define	ERAY1_ESID13	(ERAY1_ESID_1S12)

/** \\brief  164, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY1_ESID_1S13 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF0017164u)

/** Alias (User Manual Name) for ERAY1_ESID_1S13.
* To use register names with standard convension, please use ERAY1_ESID_1S13.
*/
#define	ERAY1_ESID14	(ERAY1_ESID_1S13)

/** \\brief  168, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY1_ESID_1S14 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF0017168u)

/** Alias (User Manual Name) for ERAY1_ESID_1S14.
* To use register names with standard convension, please use ERAY1_ESID_1S14.
*/
#define	ERAY1_ESID15	(ERAY1_ESID_1S14)

/** \\brief  138, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY1_ESID_1S2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF0017138u)

/** Alias (User Manual Name) for ERAY1_ESID_1S2.
* To use register names with standard convension, please use ERAY1_ESID_1S2.
*/
#define	ERAY1_ESID03	(ERAY1_ESID_1S2)

/** \\brief  13C, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY1_ESID_1S3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001713Cu)

/** Alias (User Manual Name) for ERAY1_ESID_1S3.
* To use register names with standard convension, please use ERAY1_ESID_1S3.
*/
#define	ERAY1_ESID04	(ERAY1_ESID_1S3)

/** \\brief  140, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY1_ESID_1S4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF0017140u)

/** Alias (User Manual Name) for ERAY1_ESID_1S4.
* To use register names with standard convension, please use ERAY1_ESID_1S4.
*/
#define	ERAY1_ESID05	(ERAY1_ESID_1S4)

/** \\brief  144, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY1_ESID_1S5 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF0017144u)

/** Alias (User Manual Name) for ERAY1_ESID_1S5.
* To use register names with standard convension, please use ERAY1_ESID_1S5.
*/
#define	ERAY1_ESID06	(ERAY1_ESID_1S5)

/** \\brief  148, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY1_ESID_1S6 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF0017148u)

/** Alias (User Manual Name) for ERAY1_ESID_1S6.
* To use register names with standard convension, please use ERAY1_ESID_1S6.
*/
#define	ERAY1_ESID07	(ERAY1_ESID_1S6)

/** \\brief  14C, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY1_ESID_1S7 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF001714Cu)

/** Alias (User Manual Name) for ERAY1_ESID_1S7.
* To use register names with standard convension, please use ERAY1_ESID_1S7.
*/
#define	ERAY1_ESID08	(ERAY1_ESID_1S7)

/** \\brief  150, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY1_ESID_1S8 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF0017150u)

/** Alias (User Manual Name) for ERAY1_ESID_1S8.
* To use register names with standard convension, please use ERAY1_ESID_1S8.
*/
#define	ERAY1_ESID09	(ERAY1_ESID_1S8)

/** \\brief  154, Even Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register ESID_1S[0]/ESID_1S0 corresponds to user manual
 * ESID_1S1, ... */
#define ERAY1_ESID_1S9 /*lint --e(923)*/ (*(volatile Ifx_ERAY_ESID*)0xF0017154u)

/** Alias (User Manual Name) for ERAY1_ESID_1S9.
* To use register names with standard convension, please use ERAY1_ESID_1S9.
*/
#define	ERAY1_ESID10	(ERAY1_ESID_1S9)

/** \\brief  30C, FIFO Critical Level */
#define ERAY1_FCL /*lint --e(923)*/ (*(volatile Ifx_ERAY_FCL*)0xF001730Cu)

/** \\brief  304, FIFO Rejection Filter */
#define ERAY1_FRF /*lint --e(923)*/ (*(volatile Ifx_ERAY_FRF*)0xF0017304u)

/** \\brief  308, FIFO Rejection Filter Mask */
#define ERAY1_FRFM /*lint --e(923)*/ (*(volatile Ifx_ERAY_FRFM*)0xF0017308u)

/** \\brief  318, FIFO Status Register */
#define ERAY1_FSR /*lint --e(923)*/ (*(volatile Ifx_ERAY_FSR*)0xF0017318u)

/** \\brief  A0, GTU Configuration Register 1 */
#define ERAY1_GTUC01 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC01*)0xF00170A0u)

/** \\brief  A4, GTU Configuration Register 2 */
#define ERAY1_GTUC02 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC02*)0xF00170A4u)

/** \\brief  A8, GTU Configuration Register 3 */
#define ERAY1_GTUC03 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC03*)0xF00170A8u)

/** \\brief  AC, GTU Configuration Register 4 */
#define ERAY1_GTUC04 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC04*)0xF00170ACu)

/** \\brief  B0, GTU Configuration Register 5 */
#define ERAY1_GTUC05 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC05*)0xF00170B0u)

/** \\brief  B4, GTU Configuration Register 6 */
#define ERAY1_GTUC06 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC06*)0xF00170B4u)

/** \\brief  B8, GTU Configuration Register 7 */
#define ERAY1_GTUC07 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC07*)0xF00170B8u)

/** \\brief  BC, GTU Configuration Register 8 */
#define ERAY1_GTUC08 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC08*)0xF00170BCu)

/** \\brief  C0, GTU Configuration Register 9 */
#define ERAY1_GTUC09 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC09*)0xF00170C0u)

/** \\brief  C4, GTU Configuration Register 10 */
#define ERAY1_GTUC10 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC10*)0xF00170C4u)

/** \\brief  C8, GTU Configuration Register 11 */
#define ERAY1_GTUC11 /*lint --e(923)*/ (*(volatile Ifx_ERAY_GTUC11*)0xF00170C8u)

/** \\brief  510, Input Buffer Command Mask */
#define ERAY1_IBCM /*lint --e(923)*/ (*(volatile Ifx_ERAY_IBCM*)0xF0017510u)

/** \\brief  514, Input Buffer Command Request */
#define ERAY1_IBCR /*lint --e(923)*/ (*(volatile Ifx_ERAY_IBCR*)0xF0017514u)

/** \\brief  8, Module Identification Register */
#define ERAY1_ID /*lint --e(923)*/ (*(volatile Ifx_ERAY_ID*)0xF0017008u)

/** \\brief  40, Service Request Line Enable */
#define ERAY1_ILE /*lint --e(923)*/ (*(volatile Ifx_ERAY_ILE*)0xF0017040u)

/** \\brief  8F4, Kernel Reset Register 0 */
#define ERAY1_KRST0 /*lint --e(923)*/ (*(volatile Ifx_ERAY_KRST0*)0xF00178F4u)

/** \\brief  8F0, Kernel Reset Register 1 */
#define ERAY1_KRST1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_KRST1*)0xF00178F0u)

/** \\brief  8EC, Kernel Reset Status Clear Register */
#define ERAY1_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_ERAY_KRSTCLR*)0xF00178ECu)

/** \\brief  1C, Lock Register */
#define ERAY1_LCK /*lint --e(923)*/ (*(volatile Ifx_ERAY_LCK*)0xF001701Cu)

/** \\brief  314, Last Dynamic Transmit Slot */
#define ERAY1_LDTS /*lint --e(923)*/ (*(volatile Ifx_ERAY_LDTS*)0xF0017314u)

/** \\brief  70C, Message Buffer Status */
#define ERAY1_MBS /*lint --e(923)*/ (*(volatile Ifx_ERAY_MBS*)0xF001770Cu)

/** \\brief  340, Message Buffer Status Changed 1 */
#define ERAY1_MBSC1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_MBSC1*)0xF0017340u)

/** \\brief  344, Message Buffer Status Changed 2 */
#define ERAY1_MBSC2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_MBSC2*)0xF0017344u)

/** \\brief  348, Message Buffer Status Changed 3 */
#define ERAY1_MBSC3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_MBSC3*)0xF0017348u)

/** \\brief  34C, Message Buffer Status Changed 4 */
#define ERAY1_MBSC4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_MBSC4*)0xF001734Cu)

/** \\brief  98, MHD Configuration Register */
#define ERAY1_MHDC /*lint --e(923)*/ (*(volatile Ifx_ERAY_MHDC*)0xF0017098u)

/** \\brief  31C, Message Handler Constraints Flags */
#define ERAY1_MHDF /*lint --e(923)*/ (*(volatile Ifx_ERAY_MHDF*)0xF001731Cu)

/** \\brief  310, Message Handler Status */
#define ERAY1_MHDS /*lint --e(923)*/ (*(volatile Ifx_ERAY_MHDS*)0xF0017310u)

/** \\brief  300, Message RAM Configuration */
#define ERAY1_MRC /*lint --e(923)*/ (*(volatile Ifx_ERAY_MRC*)0xF0017300u)

/** \\brief  3B8, Message Buffer Status Changed Interrupt Control 1 */
#define ERAY1_MSIC1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_MSIC1*)0xF00173B8u)

/** \\brief  3BC, Message Buffer Status Changed Interrupt Control 2 */
#define ERAY1_MSIC2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_MSIC2*)0xF00173BCu)

/** \\brief  3C0, Message Buffer Status Changed Interrupt Control 3 */
#define ERAY1_MSIC3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_MSIC3*)0xF00173C0u)

/** \\brief  3C4, Message Buffer Status Changed Interrupt Control 4 */
#define ERAY1_MSIC4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_MSIC4*)0xF00173C4u)

/** \\brief  114, Macrotick and Cycle Counter Value */
#define ERAY1_MTCCV /*lint --e(923)*/ (*(volatile Ifx_ERAY_MTCCV*)0xF0017114u)

/** \\brief  330, New Data Register 1 */
#define ERAY1_NDAT1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NDAT1*)0xF0017330u)

/** \\brief  334, New Data Register 2 */
#define ERAY1_NDAT2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NDAT2*)0xF0017334u)

/** \\brief  338, New Data Register 3 */
#define ERAY1_NDAT3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NDAT3*)0xF0017338u)

/** \\brief  33C, New Data Register 4 */
#define ERAY1_NDAT4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NDAT4*)0xF001733Cu)

/** \\brief  3A8, New Data Interrupt Control 1 */
#define ERAY1_NDIC1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NDIC1*)0xF00173A8u)

/** \\brief  3AC, New Data Interrupt Control 2 */
#define ERAY1_NDIC2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NDIC2*)0xF00173ACu)

/** \\brief  3B0, New Data Interrupt Control 3 */
#define ERAY1_NDIC3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NDIC3*)0xF00173B0u)

/** \\brief  3B4, New Data Interrupt Control 4 */
#define ERAY1_NDIC4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NDIC4*)0xF00173B4u)

/** \\brief  8C, NEM Configuration Register */
#define ERAY1_NEMC /*lint --e(923)*/ (*(volatile Ifx_ERAY_NEMC*)0xF001708Cu)

/** \\brief  1B0, Network Management Vector \note Array index shifted by 1.
 * Example: defined register NMV_1S[0]/NMV_1S0 corresponds to user manual
 * NMV_1S1, ... */
#define ERAY1_NMV_1S0 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NMV*)0xF00171B0u)

/** Alias (User Manual Name) for ERAY1_NMV_1S0.
* To use register names with standard convension, please use ERAY1_NMV_1S0.
*/
#define	ERAY1_NMV1	(ERAY1_NMV_1S0)

/** \\brief  1B4, Network Management Vector \note Array index shifted by 1.
 * Example: defined register NMV_1S[0]/NMV_1S0 corresponds to user manual
 * NMV_1S1, ... */
#define ERAY1_NMV_1S1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NMV*)0xF00171B4u)

/** Alias (User Manual Name) for ERAY1_NMV_1S1.
* To use register names with standard convension, please use ERAY1_NMV_1S1.
*/
#define	ERAY1_NMV2	(ERAY1_NMV_1S1)

/** \\brief  1B8, Network Management Vector \note Array index shifted by 1.
 * Example: defined register NMV_1S[0]/NMV_1S0 corresponds to user manual
 * NMV_1S1, ... */
#define ERAY1_NMV_1S2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_NMV*)0xF00171B8u)

/** Alias (User Manual Name) for ERAY1_NMV_1S2.
* To use register names with standard convension, please use ERAY1_NMV_1S2.
*/
#define	ERAY1_NMV3	(ERAY1_NMV_1S2)

/** \\brief  710, Output Buffer Command Mask */
#define ERAY1_OBCM /*lint --e(923)*/ (*(volatile Ifx_ERAY_OBCM*)0xF0017710u)

/** \\brief  714, Output Buffer Command Request */
#define ERAY1_OBCR /*lint --e(923)*/ (*(volatile Ifx_ERAY_OBCR*)0xF0017714u)

/** \\brief  8E8, OCDS Control and Status */
#define ERAY1_OCS /*lint --e(923)*/ (*(volatile Ifx_ERAY_OCS*)0xF00178E8u)

/** \\brief  11C, Offset Correction Value */
#define ERAY1_OCV /*lint --e(923)*/ (*(volatile Ifx_ERAY_OCV*)0xF001711Cu)

/** \\brief  170, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY1_OSID_1S0 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF0017170u)

/** Alias (User Manual Name) for ERAY1_OSID_1S0.
* To use register names with standard convension, please use ERAY1_OSID_1S0.
*/
#define	ERAY1_OSID01	(ERAY1_OSID_1S0)

/** \\brief  174, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY1_OSID_1S1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF0017174u)

/** Alias (User Manual Name) for ERAY1_OSID_1S1.
* To use register names with standard convension, please use ERAY1_OSID_1S1.
*/
#define	ERAY1_OSID02	(ERAY1_OSID_1S1)

/** \\brief  198, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY1_OSID_1S10 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF0017198u)

/** Alias (User Manual Name) for ERAY1_OSID_1S10.
* To use register names with standard convension, please use ERAY1_OSID_1S10.
*/
#define	ERAY1_OSID11	(ERAY1_OSID_1S10)

/** \\brief  19C, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY1_OSID_1S11 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001719Cu)

/** Alias (User Manual Name) for ERAY1_OSID_1S11.
* To use register names with standard convension, please use ERAY1_OSID_1S11.
*/
#define	ERAY1_OSID12	(ERAY1_OSID_1S11)

/** \\brief  1A0, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY1_OSID_1S12 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF00171A0u)

/** Alias (User Manual Name) for ERAY1_OSID_1S12.
* To use register names with standard convension, please use ERAY1_OSID_1S12.
*/
#define	ERAY1_OSID13	(ERAY1_OSID_1S12)

/** \\brief  1A4, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY1_OSID_1S13 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF00171A4u)

/** Alias (User Manual Name) for ERAY1_OSID_1S13.
* To use register names with standard convension, please use ERAY1_OSID_1S13.
*/
#define	ERAY1_OSID14	(ERAY1_OSID_1S13)

/** \\brief  1A8, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY1_OSID_1S14 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF00171A8u)

/** Alias (User Manual Name) for ERAY1_OSID_1S14.
* To use register names with standard convension, please use ERAY1_OSID_1S14.
*/
#define	ERAY1_OSID15	(ERAY1_OSID_1S14)

/** \\brief  178, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY1_OSID_1S2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF0017178u)

/** Alias (User Manual Name) for ERAY1_OSID_1S2.
* To use register names with standard convension, please use ERAY1_OSID_1S2.
*/
#define	ERAY1_OSID03	(ERAY1_OSID_1S2)

/** \\brief  17C, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY1_OSID_1S3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001717Cu)

/** Alias (User Manual Name) for ERAY1_OSID_1S3.
* To use register names with standard convension, please use ERAY1_OSID_1S3.
*/
#define	ERAY1_OSID04	(ERAY1_OSID_1S3)

/** \\brief  180, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY1_OSID_1S4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF0017180u)

/** Alias (User Manual Name) for ERAY1_OSID_1S4.
* To use register names with standard convension, please use ERAY1_OSID_1S4.
*/
#define	ERAY1_OSID05	(ERAY1_OSID_1S4)

/** \\brief  184, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY1_OSID_1S5 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF0017184u)

/** Alias (User Manual Name) for ERAY1_OSID_1S5.
* To use register names with standard convension, please use ERAY1_OSID_1S5.
*/
#define	ERAY1_OSID06	(ERAY1_OSID_1S5)

/** \\brief  188, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY1_OSID_1S6 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF0017188u)

/** Alias (User Manual Name) for ERAY1_OSID_1S6.
* To use register names with standard convension, please use ERAY1_OSID_1S6.
*/
#define	ERAY1_OSID07	(ERAY1_OSID_1S6)

/** \\brief  18C, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY1_OSID_1S7 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF001718Cu)

/** Alias (User Manual Name) for ERAY1_OSID_1S7.
* To use register names with standard convension, please use ERAY1_OSID_1S7.
*/
#define	ERAY1_OSID08	(ERAY1_OSID_1S7)

/** \\brief  190, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY1_OSID_1S8 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF0017190u)

/** Alias (User Manual Name) for ERAY1_OSID_1S8.
* To use register names with standard convension, please use ERAY1_OSID_1S8.
*/
#define	ERAY1_OSID09	(ERAY1_OSID_1S8)

/** \\brief  194, Odd Sync ID Symbol Window \note Array index shifted by 1.
 * Example: defined register OSID_1S[0]/OSID_1S0 corresponds to user manual
 * OSID_1S1, ... */
#define ERAY1_OSID_1S9 /*lint --e(923)*/ (*(volatile Ifx_ERAY_OSID*)0xF0017194u)

/** Alias (User Manual Name) for ERAY1_OSID_1S9.
* To use register names with standard convension, please use ERAY1_OSID_1S9.
*/
#define	ERAY1_OSID10	(ERAY1_OSID_1S9)

/** \\brief  870, OCDS Trigger Set Select */
#define ERAY1_OTSS /*lint --e(923)*/ (*(volatile Ifx_ERAY_OTSS*)0xF0017870u)

/** \\brief  90, PRT Configuration Register 1 */
#define ERAY1_PRTC1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_PRTC1*)0xF0017090u)

/** \\brief  94, PRT Configuration Register 2 */
#define ERAY1_PRTC2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_PRTC2*)0xF0017094u)

/** \\brief  118, Rate Correction Value */
#define ERAY1_RCV /*lint --e(923)*/ (*(volatile Ifx_ERAY_RCV*)0xF0017118u)

/** \\brief  600, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S0 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017600u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S0.
* To use register names with standard convension, please use ERAY1_RDDS_1S0.
*/
#define	ERAY1_RDDS01	(ERAY1_RDDS_1S0)

/** \\brief  604, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017604u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S1.
* To use register names with standard convension, please use ERAY1_RDDS_1S1.
*/
#define	ERAY1_RDDS02	(ERAY1_RDDS_1S1)

/** \\brief  628, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S10 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017628u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S10.
* To use register names with standard convension, please use ERAY1_RDDS_1S10.
*/
#define	ERAY1_RDDS11	(ERAY1_RDDS_1S10)

/** \\brief  62C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S11 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001762Cu)

/** Alias (User Manual Name) for ERAY1_RDDS_1S11.
* To use register names with standard convension, please use ERAY1_RDDS_1S11.
*/
#define	ERAY1_RDDS12	(ERAY1_RDDS_1S11)

/** \\brief  630, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S12 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017630u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S12.
* To use register names with standard convension, please use ERAY1_RDDS_1S12.
*/
#define	ERAY1_RDDS13	(ERAY1_RDDS_1S12)

/** \\brief  634, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S13 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017634u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S13.
* To use register names with standard convension, please use ERAY1_RDDS_1S13.
*/
#define	ERAY1_RDDS14	(ERAY1_RDDS_1S13)

/** \\brief  638, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S14 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017638u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S14.
* To use register names with standard convension, please use ERAY1_RDDS_1S14.
*/
#define	ERAY1_RDDS15	(ERAY1_RDDS_1S14)

/** \\brief  63C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S15 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001763Cu)

/** Alias (User Manual Name) for ERAY1_RDDS_1S15.
* To use register names with standard convension, please use ERAY1_RDDS_1S15.
*/
#define	ERAY1_RDDS16	(ERAY1_RDDS_1S15)

/** \\brief  640, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S16 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017640u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S16.
* To use register names with standard convension, please use ERAY1_RDDS_1S16.
*/
#define	ERAY1_RDDS17	(ERAY1_RDDS_1S16)

/** \\brief  644, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S17 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017644u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S17.
* To use register names with standard convension, please use ERAY1_RDDS_1S17.
*/
#define	ERAY1_RDDS18	(ERAY1_RDDS_1S17)

/** \\brief  648, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S18 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017648u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S18.
* To use register names with standard convension, please use ERAY1_RDDS_1S18.
*/
#define	ERAY1_RDDS19	(ERAY1_RDDS_1S18)

/** \\brief  64C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S19 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001764Cu)

/** Alias (User Manual Name) for ERAY1_RDDS_1S19.
* To use register names with standard convension, please use ERAY1_RDDS_1S19.
*/
#define	ERAY1_RDDS20	(ERAY1_RDDS_1S19)

/** \\brief  608, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017608u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S2.
* To use register names with standard convension, please use ERAY1_RDDS_1S2.
*/
#define	ERAY1_RDDS03	(ERAY1_RDDS_1S2)

/** \\brief  650, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S20 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017650u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S20.
* To use register names with standard convension, please use ERAY1_RDDS_1S20.
*/
#define	ERAY1_RDDS21	(ERAY1_RDDS_1S20)

/** \\brief  654, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S21 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017654u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S21.
* To use register names with standard convension, please use ERAY1_RDDS_1S21.
*/
#define	ERAY1_RDDS22	(ERAY1_RDDS_1S21)

/** \\brief  658, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S22 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017658u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S22.
* To use register names with standard convension, please use ERAY1_RDDS_1S22.
*/
#define	ERAY1_RDDS23	(ERAY1_RDDS_1S22)

/** \\brief  65C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S23 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001765Cu)

/** Alias (User Manual Name) for ERAY1_RDDS_1S23.
* To use register names with standard convension, please use ERAY1_RDDS_1S23.
*/
#define	ERAY1_RDDS24	(ERAY1_RDDS_1S23)

/** \\brief  660, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S24 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017660u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S24.
* To use register names with standard convension, please use ERAY1_RDDS_1S24.
*/
#define	ERAY1_RDDS25	(ERAY1_RDDS_1S24)

/** \\brief  664, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S25 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017664u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S25.
* To use register names with standard convension, please use ERAY1_RDDS_1S25.
*/
#define	ERAY1_RDDS26	(ERAY1_RDDS_1S25)

/** \\brief  668, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S26 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017668u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S26.
* To use register names with standard convension, please use ERAY1_RDDS_1S26.
*/
#define	ERAY1_RDDS27	(ERAY1_RDDS_1S26)

/** \\brief  66C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S27 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001766Cu)

/** Alias (User Manual Name) for ERAY1_RDDS_1S27.
* To use register names with standard convension, please use ERAY1_RDDS_1S27.
*/
#define	ERAY1_RDDS28	(ERAY1_RDDS_1S27)

/** \\brief  670, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S28 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017670u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S28.
* To use register names with standard convension, please use ERAY1_RDDS_1S28.
*/
#define	ERAY1_RDDS29	(ERAY1_RDDS_1S28)

/** \\brief  674, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S29 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017674u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S29.
* To use register names with standard convension, please use ERAY1_RDDS_1S29.
*/
#define	ERAY1_RDDS30	(ERAY1_RDDS_1S29)

/** \\brief  60C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001760Cu)

/** Alias (User Manual Name) for ERAY1_RDDS_1S3.
* To use register names with standard convension, please use ERAY1_RDDS_1S3.
*/
#define	ERAY1_RDDS04	(ERAY1_RDDS_1S3)

/** \\brief  678, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S30 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017678u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S30.
* To use register names with standard convension, please use ERAY1_RDDS_1S30.
*/
#define	ERAY1_RDDS31	(ERAY1_RDDS_1S30)

/** \\brief  67C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S31 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001767Cu)

/** Alias (User Manual Name) for ERAY1_RDDS_1S31.
* To use register names with standard convension, please use ERAY1_RDDS_1S31.
*/
#define	ERAY1_RDDS32	(ERAY1_RDDS_1S31)

/** \\brief  680, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S32 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017680u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S32.
* To use register names with standard convension, please use ERAY1_RDDS_1S32.
*/
#define	ERAY1_RDDS33	(ERAY1_RDDS_1S32)

/** \\brief  684, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S33 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017684u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S33.
* To use register names with standard convension, please use ERAY1_RDDS_1S33.
*/
#define	ERAY1_RDDS34	(ERAY1_RDDS_1S33)

/** \\brief  688, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S34 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017688u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S34.
* To use register names with standard convension, please use ERAY1_RDDS_1S34.
*/
#define	ERAY1_RDDS35	(ERAY1_RDDS_1S34)

/** \\brief  68C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S35 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001768Cu)

/** Alias (User Manual Name) for ERAY1_RDDS_1S35.
* To use register names with standard convension, please use ERAY1_RDDS_1S35.
*/
#define	ERAY1_RDDS36	(ERAY1_RDDS_1S35)

/** \\brief  690, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S36 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017690u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S36.
* To use register names with standard convension, please use ERAY1_RDDS_1S36.
*/
#define	ERAY1_RDDS37	(ERAY1_RDDS_1S36)

/** \\brief  694, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S37 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017694u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S37.
* To use register names with standard convension, please use ERAY1_RDDS_1S37.
*/
#define	ERAY1_RDDS38	(ERAY1_RDDS_1S37)

/** \\brief  698, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S38 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017698u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S38.
* To use register names with standard convension, please use ERAY1_RDDS_1S38.
*/
#define	ERAY1_RDDS39	(ERAY1_RDDS_1S38)

/** \\brief  69C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S39 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001769Cu)

/** Alias (User Manual Name) for ERAY1_RDDS_1S39.
* To use register names with standard convension, please use ERAY1_RDDS_1S39.
*/
#define	ERAY1_RDDS40	(ERAY1_RDDS_1S39)

/** \\brief  610, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017610u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S4.
* To use register names with standard convension, please use ERAY1_RDDS_1S4.
*/
#define	ERAY1_RDDS05	(ERAY1_RDDS_1S4)

/** \\brief  6A0, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S40 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176A0u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S40.
* To use register names with standard convension, please use ERAY1_RDDS_1S40.
*/
#define	ERAY1_RDDS41	(ERAY1_RDDS_1S40)

/** \\brief  6A4, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S41 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176A4u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S41.
* To use register names with standard convension, please use ERAY1_RDDS_1S41.
*/
#define	ERAY1_RDDS42	(ERAY1_RDDS_1S41)

/** \\brief  6A8, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S42 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176A8u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S42.
* To use register names with standard convension, please use ERAY1_RDDS_1S42.
*/
#define	ERAY1_RDDS43	(ERAY1_RDDS_1S42)

/** \\brief  6AC, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S43 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176ACu)

/** Alias (User Manual Name) for ERAY1_RDDS_1S43.
* To use register names with standard convension, please use ERAY1_RDDS_1S43.
*/
#define	ERAY1_RDDS44	(ERAY1_RDDS_1S43)

/** \\brief  6B0, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S44 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176B0u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S44.
* To use register names with standard convension, please use ERAY1_RDDS_1S44.
*/
#define	ERAY1_RDDS45	(ERAY1_RDDS_1S44)

/** \\brief  6B4, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S45 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176B4u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S45.
* To use register names with standard convension, please use ERAY1_RDDS_1S45.
*/
#define	ERAY1_RDDS46	(ERAY1_RDDS_1S45)

/** \\brief  6B8, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S46 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176B8u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S46.
* To use register names with standard convension, please use ERAY1_RDDS_1S46.
*/
#define	ERAY1_RDDS47	(ERAY1_RDDS_1S46)

/** \\brief  6BC, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S47 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176BCu)

/** Alias (User Manual Name) for ERAY1_RDDS_1S47.
* To use register names with standard convension, please use ERAY1_RDDS_1S47.
*/
#define	ERAY1_RDDS48	(ERAY1_RDDS_1S47)

/** \\brief  6C0, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S48 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176C0u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S48.
* To use register names with standard convension, please use ERAY1_RDDS_1S48.
*/
#define	ERAY1_RDDS49	(ERAY1_RDDS_1S48)

/** \\brief  6C4, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S49 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176C4u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S49.
* To use register names with standard convension, please use ERAY1_RDDS_1S49.
*/
#define	ERAY1_RDDS50	(ERAY1_RDDS_1S49)

/** \\brief  614, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S5 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017614u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S5.
* To use register names with standard convension, please use ERAY1_RDDS_1S5.
*/
#define	ERAY1_RDDS06	(ERAY1_RDDS_1S5)

/** \\brief  6C8, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S50 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176C8u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S50.
* To use register names with standard convension, please use ERAY1_RDDS_1S50.
*/
#define	ERAY1_RDDS51	(ERAY1_RDDS_1S50)

/** \\brief  6CC, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S51 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176CCu)

/** Alias (User Manual Name) for ERAY1_RDDS_1S51.
* To use register names with standard convension, please use ERAY1_RDDS_1S51.
*/
#define	ERAY1_RDDS52	(ERAY1_RDDS_1S51)

/** \\brief  6D0, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S52 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176D0u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S52.
* To use register names with standard convension, please use ERAY1_RDDS_1S52.
*/
#define	ERAY1_RDDS53	(ERAY1_RDDS_1S52)

/** \\brief  6D4, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S53 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176D4u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S53.
* To use register names with standard convension, please use ERAY1_RDDS_1S53.
*/
#define	ERAY1_RDDS54	(ERAY1_RDDS_1S53)

/** \\brief  6D8, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S54 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176D8u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S54.
* To use register names with standard convension, please use ERAY1_RDDS_1S54.
*/
#define	ERAY1_RDDS55	(ERAY1_RDDS_1S54)

/** \\brief  6DC, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S55 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176DCu)

/** Alias (User Manual Name) for ERAY1_RDDS_1S55.
* To use register names with standard convension, please use ERAY1_RDDS_1S55.
*/
#define	ERAY1_RDDS56	(ERAY1_RDDS_1S55)

/** \\brief  6E0, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S56 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176E0u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S56.
* To use register names with standard convension, please use ERAY1_RDDS_1S56.
*/
#define	ERAY1_RDDS57	(ERAY1_RDDS_1S56)

/** \\brief  6E4, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S57 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176E4u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S57.
* To use register names with standard convension, please use ERAY1_RDDS_1S57.
*/
#define	ERAY1_RDDS58	(ERAY1_RDDS_1S57)

/** \\brief  6E8, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S58 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176E8u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S58.
* To use register names with standard convension, please use ERAY1_RDDS_1S58.
*/
#define	ERAY1_RDDS59	(ERAY1_RDDS_1S58)

/** \\brief  6EC, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S59 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176ECu)

/** Alias (User Manual Name) for ERAY1_RDDS_1S59.
* To use register names with standard convension, please use ERAY1_RDDS_1S59.
*/
#define	ERAY1_RDDS60	(ERAY1_RDDS_1S59)

/** \\brief  618, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S6 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017618u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S6.
* To use register names with standard convension, please use ERAY1_RDDS_1S6.
*/
#define	ERAY1_RDDS07	(ERAY1_RDDS_1S6)

/** \\brief  6F0, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S60 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176F0u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S60.
* To use register names with standard convension, please use ERAY1_RDDS_1S60.
*/
#define	ERAY1_RDDS61	(ERAY1_RDDS_1S60)

/** \\brief  6F4, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S61 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176F4u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S61.
* To use register names with standard convension, please use ERAY1_RDDS_1S61.
*/
#define	ERAY1_RDDS62	(ERAY1_RDDS_1S61)

/** \\brief  6F8, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S62 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176F8u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S62.
* To use register names with standard convension, please use ERAY1_RDDS_1S62.
*/
#define	ERAY1_RDDS63	(ERAY1_RDDS_1S62)

/** \\brief  6FC, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S63 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF00176FCu)

/** Alias (User Manual Name) for ERAY1_RDDS_1S63.
* To use register names with standard convension, please use ERAY1_RDDS_1S63.
*/
#define	ERAY1_RDDS64	(ERAY1_RDDS_1S63)

/** \\brief  61C, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S7 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF001761Cu)

/** Alias (User Manual Name) for ERAY1_RDDS_1S7.
* To use register names with standard convension, please use ERAY1_RDDS_1S7.
*/
#define	ERAY1_RDDS08	(ERAY1_RDDS_1S7)

/** \\brief  620, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S8 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017620u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S8.
* To use register names with standard convension, please use ERAY1_RDDS_1S8.
*/
#define	ERAY1_RDDS09	(ERAY1_RDDS_1S8)

/** \\brief  624, Read Data Section \note Array index shifted by 1. Example:
 * defined register RDDS_1S[0]/RDDS_1S0 corresponds to user manual RDDS_1S1, ... */
#define ERAY1_RDDS_1S9 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDDS*)0xF0017624u)

/** Alias (User Manual Name) for ERAY1_RDDS_1S9.
* To use register names with standard convension, please use ERAY1_RDDS_1S9.
*/
#define	ERAY1_RDDS10	(ERAY1_RDDS_1S9)

/** \\brief  700, Read Header Section 1 */
#define ERAY1_RDHS1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDHS1*)0xF0017700u)

/** \\brief  704, Read Header Section 2 */
#define ERAY1_RDHS2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDHS2*)0xF0017704u)

/** \\brief  708, Read Header Section 3 */
#define ERAY1_RDHS3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_RDHS3*)0xF0017708u)

/** \\brief  110, Slot Counter Value */
#define ERAY1_SCV /*lint --e(923)*/ (*(volatile Ifx_ERAY_SCV*)0xF0017110u)

/** \\brief  120, SYNC Frame Status */
#define ERAY1_SFS /*lint --e(923)*/ (*(volatile Ifx_ERAY_SFS*)0xF0017120u)

/** \\brief  3C, Status Service Request Enable Reset */
#define ERAY1_SIER /*lint --e(923)*/ (*(volatile Ifx_ERAY_SIER*)0xF001703Cu)

/** \\brief  38, Status Service Request Enable Set */
#define ERAY1_SIES /*lint --e(923)*/ (*(volatile Ifx_ERAY_SIES*)0xF0017038u)

/** \\brief  2C, Status Service Request Line Select */
#define ERAY1_SILS /*lint --e(923)*/ (*(volatile Ifx_ERAY_SILS*)0xF001702Cu)

/** \\brief  24, Status Service Request Register */
#define ERAY1_SIR /*lint --e(923)*/ (*(volatile Ifx_ERAY_SIR*)0xF0017024u)

/** \\brief  4C, Stop Watch Register 1 */
#define ERAY1_STPW1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_STPW1*)0xF001704Cu)

/** \\brief  50, Stop Watch Register 2 */
#define ERAY1_STPW2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_STPW2*)0xF0017050u)

/** \\brief  80, SUC Configuration Register 1 */
#define ERAY1_SUCC1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_SUCC1*)0xF0017080u)

/** \\brief  84, SUC Configuration Register 2 */
#define ERAY1_SUCC2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_SUCC2*)0xF0017084u)

/** \\brief  88, SUC Configuration Register 3 */
#define ERAY1_SUCC3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_SUCC3*)0xF0017088u)

/** \\brief  124, Symbol Window and Network Idle Time Status */
#define ERAY1_SWNIT /*lint --e(923)*/ (*(volatile Ifx_ERAY_SWNIT*)0xF0017124u)

/** \\brief  44, Timer 0 Configuration */
#define ERAY1_T0C /*lint --e(923)*/ (*(volatile Ifx_ERAY_T0C*)0xF0017044u)

/** \\brief  48, Timer 1 Configuration */
#define ERAY1_T1C /*lint --e(923)*/ (*(volatile Ifx_ERAY_T1C*)0xF0017048u)

/** \\brief  10, Test Register 1 */
#define ERAY1_TEST1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_TEST1*)0xF0017010u)

/** \\brief  14, Test Register 2 */
#define ERAY1_TEST2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_TEST2*)0xF0017014u)

/** \\brief  320, Transmission Request Register 1 */
#define ERAY1_TXRQ1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_TXRQ1*)0xF0017320u)

/** \\brief  324, Transmission Request Register 2 */
#define ERAY1_TXRQ2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_TXRQ2*)0xF0017324u)

/** \\brief  328, Transmission Request Register 3 */
#define ERAY1_TXRQ3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_TXRQ3*)0xF0017328u)

/** \\brief  32C, Transmission Request Register 4 */
#define ERAY1_TXRQ4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_TXRQ4*)0xF001732Cu)

/** \\brief  400, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S0 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017400u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S0.
* To use register names with standard convension, please use ERAY1_WRDS_1S0.
*/
#define	ERAY1_WRDS01	(ERAY1_WRDS_1S0)

/** \\brief  404, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017404u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S1.
* To use register names with standard convension, please use ERAY1_WRDS_1S1.
*/
#define	ERAY1_WRDS02	(ERAY1_WRDS_1S1)

/** \\brief  428, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S10 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017428u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S10.
* To use register names with standard convension, please use ERAY1_WRDS_1S10.
*/
#define	ERAY1_WRDS11	(ERAY1_WRDS_1S10)

/** \\brief  42C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S11 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001742Cu)

/** Alias (User Manual Name) for ERAY1_WRDS_1S11.
* To use register names with standard convension, please use ERAY1_WRDS_1S11.
*/
#define	ERAY1_WRDS12	(ERAY1_WRDS_1S11)

/** \\brief  430, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S12 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017430u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S12.
* To use register names with standard convension, please use ERAY1_WRDS_1S12.
*/
#define	ERAY1_WRDS13	(ERAY1_WRDS_1S12)

/** \\brief  434, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S13 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017434u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S13.
* To use register names with standard convension, please use ERAY1_WRDS_1S13.
*/
#define	ERAY1_WRDS14	(ERAY1_WRDS_1S13)

/** \\brief  438, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S14 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017438u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S14.
* To use register names with standard convension, please use ERAY1_WRDS_1S14.
*/
#define	ERAY1_WRDS15	(ERAY1_WRDS_1S14)

/** \\brief  43C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S15 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001743Cu)

/** Alias (User Manual Name) for ERAY1_WRDS_1S15.
* To use register names with standard convension, please use ERAY1_WRDS_1S15.
*/
#define	ERAY1_WRDS16	(ERAY1_WRDS_1S15)

/** \\brief  440, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S16 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017440u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S16.
* To use register names with standard convension, please use ERAY1_WRDS_1S16.
*/
#define	ERAY1_WRDS17	(ERAY1_WRDS_1S16)

/** \\brief  444, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S17 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017444u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S17.
* To use register names with standard convension, please use ERAY1_WRDS_1S17.
*/
#define	ERAY1_WRDS18	(ERAY1_WRDS_1S17)

/** \\brief  448, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S18 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017448u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S18.
* To use register names with standard convension, please use ERAY1_WRDS_1S18.
*/
#define	ERAY1_WRDS19	(ERAY1_WRDS_1S18)

/** \\brief  44C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S19 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001744Cu)

/** Alias (User Manual Name) for ERAY1_WRDS_1S19.
* To use register names with standard convension, please use ERAY1_WRDS_1S19.
*/
#define	ERAY1_WRDS20	(ERAY1_WRDS_1S19)

/** \\brief  408, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017408u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S2.
* To use register names with standard convension, please use ERAY1_WRDS_1S2.
*/
#define	ERAY1_WRDS03	(ERAY1_WRDS_1S2)

/** \\brief  450, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S20 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017450u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S20.
* To use register names with standard convension, please use ERAY1_WRDS_1S20.
*/
#define	ERAY1_WRDS21	(ERAY1_WRDS_1S20)

/** \\brief  454, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S21 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017454u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S21.
* To use register names with standard convension, please use ERAY1_WRDS_1S21.
*/
#define	ERAY1_WRDS22	(ERAY1_WRDS_1S21)

/** \\brief  458, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S22 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017458u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S22.
* To use register names with standard convension, please use ERAY1_WRDS_1S22.
*/
#define	ERAY1_WRDS23	(ERAY1_WRDS_1S22)

/** \\brief  45C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S23 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001745Cu)

/** Alias (User Manual Name) for ERAY1_WRDS_1S23.
* To use register names with standard convension, please use ERAY1_WRDS_1S23.
*/
#define	ERAY1_WRDS24	(ERAY1_WRDS_1S23)

/** \\brief  460, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S24 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017460u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S24.
* To use register names with standard convension, please use ERAY1_WRDS_1S24.
*/
#define	ERAY1_WRDS25	(ERAY1_WRDS_1S24)

/** \\brief  464, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S25 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017464u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S25.
* To use register names with standard convension, please use ERAY1_WRDS_1S25.
*/
#define	ERAY1_WRDS26	(ERAY1_WRDS_1S25)

/** \\brief  468, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S26 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017468u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S26.
* To use register names with standard convension, please use ERAY1_WRDS_1S26.
*/
#define	ERAY1_WRDS27	(ERAY1_WRDS_1S26)

/** \\brief  46C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S27 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001746Cu)

/** Alias (User Manual Name) for ERAY1_WRDS_1S27.
* To use register names with standard convension, please use ERAY1_WRDS_1S27.
*/
#define	ERAY1_WRDS28	(ERAY1_WRDS_1S27)

/** \\brief  470, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S28 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017470u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S28.
* To use register names with standard convension, please use ERAY1_WRDS_1S28.
*/
#define	ERAY1_WRDS29	(ERAY1_WRDS_1S28)

/** \\brief  474, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S29 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017474u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S29.
* To use register names with standard convension, please use ERAY1_WRDS_1S29.
*/
#define	ERAY1_WRDS30	(ERAY1_WRDS_1S29)

/** \\brief  40C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001740Cu)

/** Alias (User Manual Name) for ERAY1_WRDS_1S3.
* To use register names with standard convension, please use ERAY1_WRDS_1S3.
*/
#define	ERAY1_WRDS04	(ERAY1_WRDS_1S3)

/** \\brief  478, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S30 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017478u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S30.
* To use register names with standard convension, please use ERAY1_WRDS_1S30.
*/
#define	ERAY1_WRDS31	(ERAY1_WRDS_1S30)

/** \\brief  47C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S31 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001747Cu)

/** Alias (User Manual Name) for ERAY1_WRDS_1S31.
* To use register names with standard convension, please use ERAY1_WRDS_1S31.
*/
#define	ERAY1_WRDS32	(ERAY1_WRDS_1S31)

/** \\brief  480, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S32 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017480u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S32.
* To use register names with standard convension, please use ERAY1_WRDS_1S32.
*/
#define	ERAY1_WRDS33	(ERAY1_WRDS_1S32)

/** \\brief  484, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S33 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017484u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S33.
* To use register names with standard convension, please use ERAY1_WRDS_1S33.
*/
#define	ERAY1_WRDS34	(ERAY1_WRDS_1S33)

/** \\brief  488, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S34 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017488u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S34.
* To use register names with standard convension, please use ERAY1_WRDS_1S34.
*/
#define	ERAY1_WRDS35	(ERAY1_WRDS_1S34)

/** \\brief  48C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S35 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001748Cu)

/** Alias (User Manual Name) for ERAY1_WRDS_1S35.
* To use register names with standard convension, please use ERAY1_WRDS_1S35.
*/
#define	ERAY1_WRDS36	(ERAY1_WRDS_1S35)

/** \\brief  490, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S36 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017490u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S36.
* To use register names with standard convension, please use ERAY1_WRDS_1S36.
*/
#define	ERAY1_WRDS37	(ERAY1_WRDS_1S36)

/** \\brief  494, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S37 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017494u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S37.
* To use register names with standard convension, please use ERAY1_WRDS_1S37.
*/
#define	ERAY1_WRDS38	(ERAY1_WRDS_1S37)

/** \\brief  498, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S38 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017498u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S38.
* To use register names with standard convension, please use ERAY1_WRDS_1S38.
*/
#define	ERAY1_WRDS39	(ERAY1_WRDS_1S38)

/** \\brief  49C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S39 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001749Cu)

/** Alias (User Manual Name) for ERAY1_WRDS_1S39.
* To use register names with standard convension, please use ERAY1_WRDS_1S39.
*/
#define	ERAY1_WRDS40	(ERAY1_WRDS_1S39)

/** \\brief  410, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S4 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017410u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S4.
* To use register names with standard convension, please use ERAY1_WRDS_1S4.
*/
#define	ERAY1_WRDS05	(ERAY1_WRDS_1S4)

/** \\brief  4A0, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S40 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174A0u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S40.
* To use register names with standard convension, please use ERAY1_WRDS_1S40.
*/
#define	ERAY1_WRDS41	(ERAY1_WRDS_1S40)

/** \\brief  4A4, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S41 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174A4u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S41.
* To use register names with standard convension, please use ERAY1_WRDS_1S41.
*/
#define	ERAY1_WRDS42	(ERAY1_WRDS_1S41)

/** \\brief  4A8, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S42 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174A8u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S42.
* To use register names with standard convension, please use ERAY1_WRDS_1S42.
*/
#define	ERAY1_WRDS43	(ERAY1_WRDS_1S42)

/** \\brief  4AC, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S43 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174ACu)

/** Alias (User Manual Name) for ERAY1_WRDS_1S43.
* To use register names with standard convension, please use ERAY1_WRDS_1S43.
*/
#define	ERAY1_WRDS44	(ERAY1_WRDS_1S43)

/** \\brief  4B0, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S44 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174B0u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S44.
* To use register names with standard convension, please use ERAY1_WRDS_1S44.
*/
#define	ERAY1_WRDS45	(ERAY1_WRDS_1S44)

/** \\brief  4B4, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S45 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174B4u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S45.
* To use register names with standard convension, please use ERAY1_WRDS_1S45.
*/
#define	ERAY1_WRDS46	(ERAY1_WRDS_1S45)

/** \\brief  4B8, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S46 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174B8u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S46.
* To use register names with standard convension, please use ERAY1_WRDS_1S46.
*/
#define	ERAY1_WRDS47	(ERAY1_WRDS_1S46)

/** \\brief  4BC, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S47 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174BCu)

/** Alias (User Manual Name) for ERAY1_WRDS_1S47.
* To use register names with standard convension, please use ERAY1_WRDS_1S47.
*/
#define	ERAY1_WRDS48	(ERAY1_WRDS_1S47)

/** \\brief  4C0, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S48 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174C0u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S48.
* To use register names with standard convension, please use ERAY1_WRDS_1S48.
*/
#define	ERAY1_WRDS49	(ERAY1_WRDS_1S48)

/** \\brief  4C4, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S49 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174C4u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S49.
* To use register names with standard convension, please use ERAY1_WRDS_1S49.
*/
#define	ERAY1_WRDS50	(ERAY1_WRDS_1S49)

/** \\brief  414, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S5 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017414u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S5.
* To use register names with standard convension, please use ERAY1_WRDS_1S5.
*/
#define	ERAY1_WRDS06	(ERAY1_WRDS_1S5)

/** \\brief  4C8, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S50 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174C8u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S50.
* To use register names with standard convension, please use ERAY1_WRDS_1S50.
*/
#define	ERAY1_WRDS51	(ERAY1_WRDS_1S50)

/** \\brief  4CC, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S51 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174CCu)

/** Alias (User Manual Name) for ERAY1_WRDS_1S51.
* To use register names with standard convension, please use ERAY1_WRDS_1S51.
*/
#define	ERAY1_WRDS52	(ERAY1_WRDS_1S51)

/** \\brief  4D0, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S52 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174D0u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S52.
* To use register names with standard convension, please use ERAY1_WRDS_1S52.
*/
#define	ERAY1_WRDS53	(ERAY1_WRDS_1S52)

/** \\brief  4D4, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S53 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174D4u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S53.
* To use register names with standard convension, please use ERAY1_WRDS_1S53.
*/
#define	ERAY1_WRDS54	(ERAY1_WRDS_1S53)

/** \\brief  4D8, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S54 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174D8u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S54.
* To use register names with standard convension, please use ERAY1_WRDS_1S54.
*/
#define	ERAY1_WRDS55	(ERAY1_WRDS_1S54)

/** \\brief  4DC, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S55 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174DCu)

/** Alias (User Manual Name) for ERAY1_WRDS_1S55.
* To use register names with standard convension, please use ERAY1_WRDS_1S55.
*/
#define	ERAY1_WRDS56	(ERAY1_WRDS_1S55)

/** \\brief  4E0, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S56 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174E0u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S56.
* To use register names with standard convension, please use ERAY1_WRDS_1S56.
*/
#define	ERAY1_WRDS57	(ERAY1_WRDS_1S56)

/** \\brief  4E4, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S57 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174E4u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S57.
* To use register names with standard convension, please use ERAY1_WRDS_1S57.
*/
#define	ERAY1_WRDS58	(ERAY1_WRDS_1S57)

/** \\brief  4E8, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S58 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174E8u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S58.
* To use register names with standard convension, please use ERAY1_WRDS_1S58.
*/
#define	ERAY1_WRDS59	(ERAY1_WRDS_1S58)

/** \\brief  4EC, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S59 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174ECu)

/** Alias (User Manual Name) for ERAY1_WRDS_1S59.
* To use register names with standard convension, please use ERAY1_WRDS_1S59.
*/
#define	ERAY1_WRDS60	(ERAY1_WRDS_1S59)

/** \\brief  418, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S6 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017418u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S6.
* To use register names with standard convension, please use ERAY1_WRDS_1S6.
*/
#define	ERAY1_WRDS07	(ERAY1_WRDS_1S6)

/** \\brief  4F0, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S60 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174F0u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S60.
* To use register names with standard convension, please use ERAY1_WRDS_1S60.
*/
#define	ERAY1_WRDS61	(ERAY1_WRDS_1S60)

/** \\brief  4F4, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S61 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174F4u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S61.
* To use register names with standard convension, please use ERAY1_WRDS_1S61.
*/
#define	ERAY1_WRDS62	(ERAY1_WRDS_1S61)

/** \\brief  4F8, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S62 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174F8u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S62.
* To use register names with standard convension, please use ERAY1_WRDS_1S62.
*/
#define	ERAY1_WRDS63	(ERAY1_WRDS_1S62)

/** \\brief  4FC, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S63 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF00174FCu)

/** Alias (User Manual Name) for ERAY1_WRDS_1S63.
* To use register names with standard convension, please use ERAY1_WRDS_1S63.
*/
#define	ERAY1_WRDS64	(ERAY1_WRDS_1S63)

/** \\brief  41C, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S7 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF001741Cu)

/** Alias (User Manual Name) for ERAY1_WRDS_1S7.
* To use register names with standard convension, please use ERAY1_WRDS_1S7.
*/
#define	ERAY1_WRDS08	(ERAY1_WRDS_1S7)

/** \\brief  420, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S8 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017420u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S8.
* To use register names with standard convension, please use ERAY1_WRDS_1S8.
*/
#define	ERAY1_WRDS09	(ERAY1_WRDS_1S8)

/** \\brief  424, Write Data Section \note Array index shifted by 1. Example:
 * defined register WRDS_1S[0]/WRDS_1S0 corresponds to user manual WRDS_1S1, ... */
#define ERAY1_WRDS_1S9 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRDS*)0xF0017424u)

/** Alias (User Manual Name) for ERAY1_WRDS_1S9.
* To use register names with standard convension, please use ERAY1_WRDS_1S9.
*/
#define	ERAY1_WRDS10	(ERAY1_WRDS_1S9)

/** \\brief  500, Write Header Section 1 */
#define ERAY1_WRHS1 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRHS1*)0xF0017500u)

/** \\brief  504, Write Header Section 2 */
#define ERAY1_WRHS2 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRHS2*)0xF0017504u)

/** \\brief  508, Write Header Section 3 */
#define ERAY1_WRHS3 /*lint --e(923)*/ (*(volatile Ifx_ERAY_WRHS3*)0xF0017508u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXERAY_REG_H */