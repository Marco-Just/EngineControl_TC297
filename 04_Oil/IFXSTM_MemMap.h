/******************************************************************************/
/*                                                                            */
/* !Layer           : STD                                                     */
/*                                                                            */
/* !Component       : MEMMAP                                                  */
/* !Description     : MEMMAP Configuration                                    */
/*                                                                            */
/* !File            : IFXSTM_MEMMAP.H                                          */
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
/* 11/10/14, 10:16:21: generated by Genecode  v2.6.0.0                        */
/* From Source Template : MSN_MEMMAP_H.TPL                                    */
/******************************************************************************/



/******************************************************************************/
/*          MEMMAP selected mode:  SAFE                                       */
/******************************************************************************/
#define MEMMAP_ERROR

/* The following if is used only due to automatic generation */
#if !defined MEMMAP_ERROR

/* Project section mappings */
/* !Comment: IFXSTM Section allocation */
#elif defined   IFXSTM_START_SEC_CODE
   #undef  IFXSTM_START_SEC_CODE
   #define START_SEC_CODE_SECTION
#elif defined   IFXSTM_STOP_SEC_CODE
   #undef  IFXSTM_STOP_SEC_CODE
   #define STOP_SEC_CODE_SECTION

#elif defined   IFXSTM_START_SEC_CONST_UNSPECIFIED
   #undef  IFXSTM_START_SEC_CONST_UNSPECIFIED
   #define START_SEC_CONST_UNSPECIFIED_SECTION
#elif defined   IFXSTM_STOP_SEC_CONST_UNSPECIFIED
   #undef  IFXSTM_STOP_SEC_CONST_UNSPECIFIED
   #define STOP_SEC_CONST_UNSPECIFIED_SECTION


#endif

/* ECU specific section mappings */
#ifndef MEMMAP_START_DONE

/* The following if is used only due to automatic generation */

#if FALSE
/* !Comment: SEC_CODE Start Section treatment */
   #elif defined   START_SEC_CODE_SECTION
	  

      #pragma section ".text" ax

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_CONST_UNSPECIFIED Start Section treatment */
   #elif defined   START_SEC_CONST_UNSPECIFIED_SECTION
	  

      #pragma section ".const" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE


   #endif

#else   /* if MEMMAP_START_DONE is not defined */

/* The following if is used only due to automatic generation */

#if FALSE
/* !Comment: SEC_CODE Stop Section treatment */
   #elif defined   STOP_SEC_CODE_SECTION && defined  START_SEC_CODE_SECTION
	  

      #pragma section

      #undef START_SEC_CODE_SECTION
      #undef STOP_SEC_CODE_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_CONST_UNSPECIFIED Stop Section treatment */
   #elif defined   STOP_SEC_CONST_UNSPECIFIED_SECTION && defined  START_SEC_CONST_UNSPECIFIED_SECTION
	  

      #pragma section

      #undef START_SEC_CONST_UNSPECIFIED_SECTION
      #undef STOP_SEC_CONST_UNSPECIFIED_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE


   #endif
#endif

#if defined MEMMAP_ERROR
   #error MEMMAP-E201 : Bad memory allocation into IFXSTM_MemMap.h
#endif


/*------------------------------- end of file --------------------------------*/
