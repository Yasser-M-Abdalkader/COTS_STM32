 /*************************************************************
 * @file NVIC_prog.c
 * @author Yasssr Mustafa
 * @brief   NVIC Driver - MCAL
 * @version 0.1
 * @date 2022-03-10
 * @copyright Copyright (c) 2022 
 *************************************************************/
#include"STD_TYPES.h"
#include "BIT_MATH.h"

#include"NVIC_interface.h"
#include"NVIC_private.h"
#include"NVIC_config.h"


void MNVIC_voidEnableInterrupt(u8 copy_u8IntNumber)
{
    if (copy_u8IntNumber <=31)
    {
        NVIC_ISER0 = (1 << copy_u8IntNumber);
    }
    else if (copy_u8IntNumber <=59)
    {
        copy_u8IntNumber -= 32;
        NVIC_ISER1 = (1 << copy_u8IntNumber);
    }
    else
    {
        /*! \todo Add Error message */
    }   
}


void MNVIC_voidDisableInterrupt(u8 copy_u8IntNumber)
{
    if (copy_u8IntNumber <=31)
    {
        NVIC_ICER0 = (1 << copy_u8IntNumber);
    }
    else if (copy_u8IntNumber <=59)
    {
        copy_u8IntNumber -= 32;
        NVIC_ICER1 = (1 << copy_u8IntNumber);
    }
    else
    {
        /*! \todo Add Error message */
    }
}


void MNVIC_voidSetPendingFlag(u8 copy_u8IntNumber)
{
    if (copy_u8IntNumber <=31)
    {
        NVIC_ISPR0 = (1 << copy_u8IntNumber);
    }
    else if (copy_u8IntNumber <=59)
    {
        copy_u8IntNumber -= 32;
        NVIC_ISPR1 = (1 << copy_u8IntNumber);
    }
    else
    {
        /*! \todo Add Error message */
    }   
}


void MNVIC_voidClearPendingFlag(u8 copy_u8IntNumber)
{
    if (copy_u8IntNumber <=31)
    {
        NVIC_ICPR0 = (1 << copy_u8IntNumber);
    }
    else if (copy_u8IntNumber <=59)
    {
        copy_u8IntNumber -= 32;
        NVIC_ICPR1 = (1 << copy_u8IntNumber);
    }
    else
    {
        /*! \todo Add Error message */
    }     
}

u8 MNVIC_u8GetActiveFlag(u8 copy_u8IntNumber)
{
    u8 local_u8ActiveFlage;
    if (copy_u8IntNumber <=31)
    {
        local_u8ActiveFlage = GET_BIT(NVIC_IABR0, copy_u8IntNumber);   
    }
    else if (copy_u8IntNumber <=59)
    {
        copy_u8IntNumber -= 32;
        local_u8ActiveFlage = GET_BIT(NVIC_IABR1, copy_u8IntNumber);
    }
    else
    {
        /*! \todo Add Error message */
    }     
    return local_u8ActiveFlage;
}