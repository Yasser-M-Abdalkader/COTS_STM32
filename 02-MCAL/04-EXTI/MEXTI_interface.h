
/*********************************************************************************
 * @file        MEXTI_interface.h
 * @author      Yasssr Mustafa
 * @brief       EXTI Driver - MCAL
 * @version     0.1
 * @date        2022-05-16
 * @copyright   Copyright (c) 2022
 *********************************************************************************/
#ifndef MEXTI_INTERFACE_H
#define MEXTI_INTERFACE_H

void MEXTI_voidinit(void);
void MEXTI_voidEnable(u8 copy_u8line);
void MEXTI_voidDisnable(u8 copy_u8line);
void MEXTI_voidSwTrigger(u8 copy_u8line);
void MEXTI_voidSetSignalLatch(u8 copy_u8Line, u8 copy_u8Mode);

/* Choose External interrupt line [0: 15] */
#define MEXTI_LINE LINE00
#define MEXTI_MODE MEXTI_ON_CHANGE
#endif