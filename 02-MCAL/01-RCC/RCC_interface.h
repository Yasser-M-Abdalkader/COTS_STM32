/**
 * @file RCC_interface.h
 * @author Yasser Mustafa 
 * @brief RCC Driver - MCAL
 * @version 0.1
 * @date 2022-02-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

#define RCC_AHB     0
#define RCC_APB1    1
#define RCC_APB2    2

void RCC_voidInitSysClock(void);
void RCC_voidEnableClock(u8 copy_u8BusId, u8 copy_u8PerID);
void RCC_voideDisableClock(u8 copy_u8BusId, u8 copy_u8PerID);

#endif