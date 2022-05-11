/************************************************************************************************
 * @file RCC_interface.h
 * @author Yasser M. Abdalkader (m.abdelkader.yasser@gmail.com) 
 * @brief RCC Driver - MCAL
 * @version 0.1
 * @date 2022-02-14
 * @copyright Copyright (c) 2022
 ************************************************************************************************/

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

#define RCC_AHB     0
#define RCC_APB1    1
#define RCC_APB2    2

/************************************************************************************************
 * \fn      RCC_voidInitSysClock
 * \brief   Initiate System Clock
************************************************************************************************/
void RCC_voidInitSysClock(void);

/************************************************************************************************
 * \fn      RCC_voidEnableClock
 * \brief   Enable peripheral Clock
 * \param   copy_u8BusId    u8 Bus ID. it can have the following values
 * \li      \c RCC_AHB      AHB Bus
 * \li      \c RCC_APB1     APB1 Bus
 * \li      \c RCC_APB2     APB2 Bus
 * \param   copy_u8PerID    u8 Peripheral ID. it takes values from 0 - 31. 
************************************************************************************************/
void RCC_voidEnableClock(u8 copy_u8BusId, u8 copy_u8PerID);

/************************************************************************************************
 * \fn      RCC_voideDisableClock
 * \brief   Disable peripherals Clock
 * \param   copy_u8BusId    u8 Bus ID. it can have the following values
 * \li      \c RCC_AHB      AHB Bus
 * \li      \c RCC_APB1     APB1 Bus
 * \li      \c RCC_APB2     APB2 Bus
 * \param   copy_u8PerID    u8 Peripheral ID. it takes values from 0 - 31. 
************************************************************************************************/
void RCC_voideDisableClock(u8 copy_u8BusId, u8 copy_u8PerID);

#endif