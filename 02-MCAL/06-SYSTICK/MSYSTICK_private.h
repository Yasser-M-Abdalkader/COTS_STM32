/**************************************************************************************************
 * @file        MSYSTICK_private.h
 * @author      Yasser M. Abdalkader (m.abdelkader.yasser@gmail.com)
 * @brief       STSTICK Driver - MCAL Layer
 * @version     0.1
 * @date        2022-05-19
 * @copyright   Copyright (c) 2022
 **************************************************************************************************/
#ifndef MSYSTICK_PRIVATE_H
#define MSYSTICK_PRIVATE_H

typedef struct
{
    u32 CTRL;  // SysTick control and status register
    u32 LOAD;  // SysTick reload value register
    u32 VAL;   // SysTick current value register
    u32 CALIB; // SysTick calibration value register
} MSTK_t;

#define STK ((volatile MSTK_t*)0xE000E010)

/* Clock Sources  */
#define CLKSOURCE_AHB_DIV_8 1 /* AHBDivided by 8 */
#define CLKSOURCE_AHB 2       /* Processor clock (AHB) */

/* BITS: SysTick control and status register (STK_CTRL) */
#define COUNTFLAG   16
#define CLKSOURCE   2
#define TICKINT     1
#define ENABLE      0


/* Conversion flags. Indicates which asynch Conversion (Single or periodic) is excuting  */
enum conversion_t{NoConversion, SingleConversion, PeriodicConversion};
#endif