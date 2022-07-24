#pragma once
/******************************************************************************/
/* File   : CanIf.hpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstCanIf.hpp"
#include "CfgCanIf.hpp"
#include "CanIf_core.hpp"
#include "infCanIf_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_CanIf:
      INTERFACES_EXPORTED_CANIF
   ,  public abstract_module
   ,  public class_CanIf_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstCanIf_Type* lptrConst = (ConstCanIf_Type*)NULL_PTR;
      infPduRClient_Lo infPduRClient_CanIf;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, CANIF_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, CANIF_CONST,       CANIF_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   CANIF_CONFIG_DATA, CANIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, CANIF_CODE) DeInitFunction (void);
      FUNC(void, CANIF_CODE) MainFunction   (void);
      CANIF_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_CanIf, CANIF_VAR) CanIf;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

