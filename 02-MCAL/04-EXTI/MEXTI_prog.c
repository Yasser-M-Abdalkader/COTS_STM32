/************************************************************************************
 * @file        MEXTI_prog.c
 * @author      Yasssr Mustafa
 * @brief       EXTI Driver - MCAL
 * @version     0.1
 * @date        2022-05-16
 * @copyright   Copyright (c) 2022
 ************************************************************************************/
/************************************************************************************/
/* LIB Directives                                                                   */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
/************************************************************************************/
/* EXTI Directives                                                                  */
#include "MEXTI_interface.h"

#include "MEXTI_config.h"
#include "MEXTI_private.h"

/************************************************************************************/
void MEXTI_voidinit(void)
{
#if MEXTI_MODE == MEXTI_ON_CHANGE
    SET_BIT(MEXTI->RTSR, MEXTI_LINE);
    SET_BIT(MEXTI->FTSR, MEXTI_LINE);
#elif MEXTI_MODE == MEXTI_RISING_EDGE
    SET_BIT(MEXTI->RTSR, MEXTI_LINE);
#elif MEXTI_MODE == MEXTI_FALLING_EDGE
    SET_BIT(MEXTI->FTSR, MEXTI_LINE);
#else
#error "Wrong Mode and/or line choice"
#endif
    CLR_BIT(MEXTI->IMR, MEXTI_LINE);
}
void MEXTI_voidEnable(u8 copy_u8line)
{
    SET_BIT(MEXTI->IMR, copy_u8line);
}
void MEXTI_voidDisnable(u8 copy_u8line)
{
    CLR_BIT(MEXTI->IMR, copy_u8line);
}
void MEXTI_voidSwTrigger(u8 copy_u8line)
{
    SET_BIT(MEXTI->SWIER, copy_u8line);
}
void MEXTI_voidSetSignalLatch(u8 copy_u8Line, u8 copy_u8Mode)
{
    switch (copy_u8Mode)
    {
    case MEXTI_RISING_EDGE:
        SET_BIT(MEXTI->RTSR, MEXTI_LINE);
        break;
    case MEXTI_FALLING_EDGE:
        SET_BIT(MEXTI->FTSR, MEXTI_LINE);
        break;
    case MEXTI_ON_CHANGE:
        SET_BIT(MEXTI->RTSR, MEXTI_LINE);
        SET_BIT(MEXTI->FTSR, MEXTI_LINE);
        break;
    }
}