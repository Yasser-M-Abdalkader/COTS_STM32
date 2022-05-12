/************************************************************************************
 * @file       GPIO_prog.c
 * @author     Yasser M. Abdalkader (m.abdelkader.yasser@gmail.com)
 * @brief      GPIO Driver - MCAL
 * @version    0.1
 * @date       2022-02-15
 * @copyright  Copyright (c) 2022
 ************************************************************************************/
/* LIB Directives                                                                   */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
/************************************************************************************/
/* GPIO Directives                                                                  */
#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"
/************************************************************************************/

u8 MGPIO_voidSetPinDirection(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8Mode)
{
   u8 local_u8ErrorStatus = OK;
   if ((copy_u8Port > GPIOC) || (copy_u8Pin > GPIO_PIN15) || (copy_u8Mode > GPIO_OUTPUT_SPEED_50MHZ_AFOD))
   {
      local_u8ErrorStatus = NOK;
   }
   else
   {
      switch (copy_u8Port)
      {
      case GPIOA:
         if (copy_u8Pin < 8)
         {
            GPIOA_CRL &= ~((0b1111) << (copy_u8Pin * 4));
            GPIOA_CRL |= ((copy_u8Mode) << (copy_u8Pin * 4));
         }
         else if (copy_u8Pin < 16)
         {
            copy_u8Pin -= 8;
            GPIOA_CRH &= ~((0b1111) << (copy_u8Pin * 4));
            GPIOA_CRH |= ((copy_u8Mode) << (copy_u8Pin * 4));
         }
         break;
      case GPIOB:
         if (copy_u8Pin < 8)
         {
            GPIOB_CRL &= ~((0b1111) << (copy_u8Pin * 4));
            GPIOB_CRL |= ((copy_u8Mode) << (copy_u8Pin * 4));
         }
         else if (copy_u8Pin < 16)
         {
            copy_u8Pin -= 8;
            GPIOB_CRH &= ~((0b1111) << (copy_u8Pin * 4));
            GPIOB_CRH |= ((copy_u8Mode) << (copy_u8Pin * 4));
         }
         break;
      case GPIOC:
         if (copy_u8Pin < 8)
         {
            GPIOC_CRL &= ~((0b1111) << (copy_u8Pin * 4));
            GPIOC_CRL |= ((copy_u8Mode) << (copy_u8Pin * 4));
         }
         else if (copy_u8Pin < 16)
         {
            copy_u8Pin -= 8;
            GPIOC_CRH &= ~((0b1111) << (copy_u8Pin * 4));
            GPIOC_CRH |= ((copy_u8Mode) << (copy_u8Pin * 4));
         }
         break;
      }
   }
   return local_u8ErrorStatus;
}

u8 MGPIO_voidSetPinValue(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8Value)
{
   u8 local_u8ErrorState = OK;
   if ((copy_u8Port > GPIOC) || (copy_u8Pin > GPIO_PIN15) || (copy_u8Value > GPIO_HIGH))
   {
      local_u8ErrorState = NOK;
   }
   else
   {
      switch (copy_u8Port)
      {
      case GPIOA:
         if (copy_u8Value == GPIO_LOW)
         {
            GPIOA_BRR = 1 << copy_u8Pin;
         }
         else
         {
            GPIOA_BSR = 1 << copy_u8Pin;
         }
         break;
      case GPIOB:
         if (copy_u8Value == GPIO_LOW)
         {
            GPIOB_BRR = 1 << copy_u8Pin;
         }
         else
         {
            GPIOB_BSR = 1 << copy_u8Pin;
         }
         break;
      case GPIOC:
         if (copy_u8Value == GPIO_LOW)
         {
            GPIOC_BRR = 1 << copy_u8Pin;
         }
         else
         {
            GPIOC_BSR = 1 << copy_u8Pin;
         }
         break;
      }
   }
   return local_u8ErrorState;
}

u8 MGPIO_u8GetPinValue(u8 copy_u8Port, u8 copy_u8Pin, u8 *copy_pu8PinValue)
{
   u8 local_u8ErrorState = OK;
   if (copy_u8Port > GPIOC || (copy_u8Pin > GPIO_PIN15))
   {
      local_u8ErrorState = NOK;
   }
   else if (copy_pu8PinValue == NULL)
   {
      local_u8ErrorState = NULL_POINTER;
   }
   else
   {
      switch (copy_u8Port)
      {
      case GPIOA:
         *copy_pu8PinValue = GET_BIT(GPIOA_IDR, copy_u8Pin);
         break;
      case GPIOB:
         *copy_pu8PinValue = GET_BIT(GPIOB_IDR, copy_u8Pin);
         break;
      case GPIOC:
         *copy_pu8PinValue = GET_BIT(GPIOC_IDR, copy_u8Pin);
         break;
      }
   }
   return local_u8ErrorState;
}