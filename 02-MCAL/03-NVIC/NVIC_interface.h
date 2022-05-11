/*************************************************************
 * @file NVIC_interface.h
 * @author Yasssr Mustafa
 * @brief   NVIC Driver - MCAL
 * @version 0.1
 * @date 2022-03-10
 * @copyright Copyright (c) 2022
*************************************************************/

#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_

/*************************************************************
 *  \fn     void MNVIC_voidEnableInterrupt(u8 copy_u8IntNumber) 
 *  \brief  Enable External Interrupts
 *  \param  copy_u8IntNumber 8-bit number representing External interrupt number from 0 to 59
 *  \return None
*************************************************************/
void MNVIC_voidEnableInterrupt(u8 copy_u8IntNumber);

/*************************************************************
 *  \fn     void MNVIC_voidDisableInterrupt(u8 copy_u8IntNumber) 
 *  \brief  Disable External Interrupts
 *  \param  copy_u8IntNumber 8-bit number representing External interrupt number from 0 to 59
 *  \return None
*************************************************************/
void MNVIC_voidDisableInterrupt(u8 copy_u8IntNumber);

/*************************************************************
 *  \fn     void MNVIC_voidSetPendingFlag(u8 copy_u8IntNumber) 
 *  \brief  Set Pending flag for external Interrupts    
 *  \param  copy_u8IntNumber 8-bit number representing External interrupt number from 0 to 59
 *  \return None
*************************************************************/
void MNVIC_voidSetPendingFlag(u8 copy_u8IntNumber);

/*************************************************************
 *  \fn     void MNVIC_voidClearPendingFlag(u8 copy_u8IntNumber) 
 *  \brief  Clear Pending flag for external Interrupts    
 *  \param  copy_u8IntNumber 8-bit number representing External interrupt number from 0 to 59
 *  \return None
*************************************************************/
void MNVIC_voidClearPendingFlag(u8 copy_u8IntNumber);

/*************************************************************
 *  \fn     u8 MNVIC_u8GetActiveFlag(u8 copy_u8IntNumber)
 *  \brief  Get Active flag status for external Interrupts    
 *  \param  copy_u8IntNumber 8-bit number representing External interrupt number from 0 to 59
 *  \return on Success, the funtion returns the Active flag status
*************************************************************/
u8 MNVIC_u8GetActiveFlag(u8 copy_u8IntNumber);
#endif