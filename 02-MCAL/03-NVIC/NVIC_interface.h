/*********************************************************************************
 * @file        NVIC_interface.h
 * @author      Yasssr Mustafa
 * @brief       NVIC Driver - MCAL
 * @version     0.1
 * @date        2022-03-10
 * @copyright   Copyright (c) 2022
*********************************************************************************/

#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_

/*********************************************************************************
 *  \fn     void MNVIC_voidEnableInterrupt(u8 copy_u8IntNumber) 
 *  \brief  Enable External Interrupts
 *  \param  copy_u8IntNumber External interrupt number [0 : 59]
 *  \return None
*********************************************************************************/
void MNVIC_voidEnableInterrupt(u8 copy_u8IntNumber);

/*********************************************************************************
 *  \fn     void MNVIC_voidDisableInterrupt(u8 copy_u8IntNumber) 
 *  \brief  Disable External Interrupts
 *  \param  copy_u8IntNumber External interrupt number [0 : 59]
 *  \return None
*********************************************************************************/
void MNVIC_voidDisableInterrupt(u8 copy_u8IntNumber);

/*********************************************************************************
 *  \fn     void MNVIC_voidSetPendingFlag(u8 copy_u8IntNumber) 
 *  \brief  Set Pending flag for external Interrupts    
 *  \param  copy_u8IntNumber External interrupt number [0 : 59]
 *  \return None
*********************************************************************************/
void MNVIC_voidSetPendingFlag(u8 copy_u8IntNumber);

/*********************************************************************************
 *  \fn     void MNVIC_voidClearPendingFlag(u8 copy_u8IntNumber) 
 *  \brief  Clear Pending flag for external Interrupts    
 *  \param  copy_u8IntNumber External interrupt number [0 : 59]
 *  \return None
*********************************************************************************/
void MNVIC_voidClearPendingFlag(u8 copy_u8IntNumber);

/*********************************************************************************
 *  \fn     u8 MNVIC_u8GetActiveFlag(u8 copy_u8IntNumber)
 *  \brief  Get Active flag status for external Interrupts    
 *  \param  copy_u8IntNumber External interrupt number [0 : 59]
 *  \return on Success, the funtion returns the Active flag status
*********************************************************************************/
u8 MNVIC_u8GetActiveFlag(u8 copy_u8IntNumber);

void MNVIC_voidSetPriority(s8 copy_s8IntNumber,u8 copy_u8GroupPriority, u8 copy_u8SubGroupPriority, u32 copy_u3GroupHierarcy);

#define NVIC_PRIORITY_HIERARCHY0  0x05FA0300    /* Groups: 16   | SubRoups: None    */
#define NVIC_PRIORITY_HIERARCHY1  0x05FA0400    /* Groups: 8    | SubRoups: 2       */
#define NVIC_PRIORITY_HIERARCHY2  0x05FA0500    /* Groups: 4    | SubRoups: 4       */
#define NVIC_PRIORITY_HIERARCHY3  0x05FA0600    /* Groups: 2    | SubRoups: 8       */
#define NVIC_PRIORITY_HIERARCHY4  0x05FA0700    /* Groups: None | SubRoups: 16      */
#endif