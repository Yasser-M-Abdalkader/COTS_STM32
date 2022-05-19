/**************************************************************************************************
 * @file        MSYSTICK_interface.h
 * @author      Yasser M. Abdalkader (m.abdelkader.yasser@gmail.com)
 * @brief       STSTICK Driver - MCAL Layer
 * @version     0.1
 * @date        2022-05-19
 * @copyright   Copyright (c) 2022
 **************************************************************************************************/
#ifndef MSYSTICK_INTERFACE_H
#define MSYSTICK_INTERFACE_H

/*  Applies Clock choice from configuration file
    disable systic interrupt
    Disable Systic 
*/
void MSYSTICK_voidInit(void);


void MSYSTICK_voidSetBusyWait(u32 copy_u32Ticks); /* Synch */

void MSYSTICK_voidSetIntervalSingle(u32 copy_u32Ticks, void (* copy_ptrFunc)(void)); /* Non-synch */

void MSYSTICK_voidSetIntervalPeriodic(); /* nons-synch */

void MSYSTICK_voidStopTimer(void);


#endif