/******************************************************************************/
/*                                                                            */
/* !Layer           : STD                                                     */
/*                                                                            */
/* !Component       : MEMMAP                                                  */
/* !Description     : MEMMAP Configuration                                    */
/*                                                                            */
/* !File            : ACCPACQPOS_MEMMAP.H                                          */
/*                                                                            */
/* !Scope           : Public                                                  */
/*                                                                            */
/* !Target          :                                                         */
/*                                                                            */
/* !Vendor          : Valeo                                                   */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT 2009 VALEO                                                       */
/* all rights reserved                                                        */
/*                                                                            */
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::                                                                $*/
/* $Revision::            $$Author::                  $$Date::               $*/
/******************************************************************************/
/* 11/10/14, 10:16:20: generated by Genecode  v2.6.0.0                        */
/* From Source Template : MSN_MEMMAP_H.TPL                                    */
/******************************************************************************/



/******************************************************************************/
/*          MEMMAP selected mode:  SAFE                                       */
/******************************************************************************/
#define MEMMAP_ERROR

/* The following if is used only due to automatic generation */
#if !defined MEMMAP_ERROR

/* Project section mappings */
/* !Comment: ACCPACQPOS Section allocation */
#elif defined   ACCPACQPOS_START_SEC_VAR_NOINIT_16BIT
   #undef  ACCPACQPOS_START_SEC_VAR_NOINIT_16BIT
   #define START_SEC_VAR_NOINIT_16BIT_SECTION
#elif defined   ACCPACQPOS_STOP_SEC_VAR_NOINIT_16BIT
   #undef  ACCPACQPOS_STOP_SEC_VAR_NOINIT_16BIT
   #define STOP_SEC_VAR_NOINIT_16BIT_SECTION

#endif

/* ECU specific section mappings */
#ifndef MEMMAP_START_DONE

/* The following if is used only due to automatic generation */

#if FALSE
/* !Comment: SEC_VAR_NOINIT_16BIT Start Section treatment */
   #elif defined   START_SEC_VAR_NOINIT_16BIT_SECTION
	  

      #pragma section ".power_on_cleared" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

   #endif

#else   /* if MEMMAP_START_DONE is not defined */

/* The following if is used only due to automatic generation */

#if FALSE
/* !Comment: SEC_VAR_NOINIT_16BIT Stop Section treatment */
   #elif defined   STOP_SEC_VAR_NOINIT_16BIT_SECTION && defined  START_SEC_VAR_NOINIT_16BIT_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_NOINIT_16BIT_SECTION
      #undef STOP_SEC_VAR_NOINIT_16BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

   #endif
#endif

#if defined MEMMAP_ERROR
   #error MEMMAP-E201 : Bad memory allocation into ACCPACQPOS_MemMap.h
#endif


/*------------------------------- end of file --------------------------------*/
