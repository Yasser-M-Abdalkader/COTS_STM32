/**************************************************************************************************
 * @file        MSYSTICK_prog.c
 * @author      Yasser M. Abdalkader (m.abdelkader.yasser@gmail.com)
 * @brief       STSTICK Driver - MCAL Layer
 * @version     0.1
 * @date        2022-05-19
 * @copyright   Copyright (c) 2022
 **************************************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "MSYSTICK_interface.h"
#include "MSYSTICK_private.h"
#include "MSYSTICK_config.h"

static void (*MSTSTICK_voidSetCallBackFunc)(void) = NULL;

static u8 MSYSTICK_ConversionFlag = NoConversion;

void MSYSTICK_voidInit(void)
{
/* Choose Source Clock */
#if (MSYSTICK_CLKSOURCE == CLKSOURCE_AHB_DIV_8)
    CLR_BIT(STK->CTRL, CLKSOURCE);
#elif (MSYSTICK_CLKSOURCE == CLKSOURCE_AHB_DIV_8)
    SET_BIT(STK->CTRL, CLKSOURCE);
#else
#error "Wrong Clock source selection"
#endif

    /* Disable Interrupt */
    CLR_BIT(STK->CTRL, TICKINT);

    /* Disable Counter */
    CLR_BIT(STK->CTRL, ENABLE);
}

void MSYSTICK_voidSetBusyWait(u32 copy_u32Ticks)
{
    /* Set Start Value */
    STK->LOAD = copy_u32Ticks;

    /* Enable Counter */
    SET_BIT(STK->CTRL, ENABLE);

    /* wait till counter counts to zero */
    while (GET_BIT(STK->CTRL, COUNTFLAG) == 0)
        ;

    /* Disable Counter */
    CLR_BIT(STK->CTRL, ENABLE);
}

void MSYSTICK_voidSetIntervalSingle(u32 copy_u32Ticks, void (*copy_ptrFunc)(void))
{
    if ((copy_ptrFunc != NULL) && (MSYSTICK_ConversionFlag == NoConversion))
    {
        /* Set Start Value */
        STK->LOAD = copy_u32Ticks;

        /* Set Notification Function */
        MSTSTICK_voidSetCallBackFunc = copy_ptrFunc;

        /* Enable Interrupt */
        CLR_BIT(STK->CTRL, TICKINT);

        MSYSTICK_ConversionFlag = SingleConversion;
        /* Enable Counter */
        CLR_BIT(STK->CTRL, ENABLE);
    }
}

void MSYSTICK_voidSetIntervalPeriodic(u32 copy_u32Ticks, void (*copy_ptrFunc)(void))
{
    if ((copy_ptrFunc != NULL) && (MSYSTICK_ConversionFlag == NoConversion))
    {
        /* Set Start Value */
        STK->LOAD = copy_u32Ticks;

        /* Set Notification Function */
        MSTSTICK_voidSetCallBackFunc = copy_ptrFunc;

        /* Enable Interrupt */
        CLR_BIT(STK->CTRL, TICKINT);

        MSYSTICK_ConversionFlag = PeriodicConversion;
        /* Enable Counter */
        CLR_BIT(STK->CTRL, ENABLE);
    }
}

void MSYSTICK_voidStopTimer(void)
{
    /* Disable Interrupt */
    CLR_BIT(STK->CTRL, TICKINT);

    /* Disable Counter */
    CLR_BIT(STK->CTRL, ENABLE);
}

/* Systick interrupt handler */
void SysTick_Handler(void)
{
    switch (MSYSTICK_ConversionFlag)
    {
    case SingleConversion:
        STK->LOAD = 0;
        MSTSTICK_voidSetCallBackFunc();
        break;
    case PeriodicConversion:
        MSTSTICK_voidSetCallBackFunc();
        break;
    }
    MSYSTICK_ConversionFlag = NoConversion;
}