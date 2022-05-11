/**
 * @file GPIO_prog.c
 * @author Yasser Mustafa
 * @brief GPIO Driver - MCAL
 * @version 0.1
 * @date 2022-02-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"

void MGPIO_voidSetPinDirection(u8 copy_u8Port, u8 copy_u8Pin , u8 copy_u8Mode)
{
    switch (copy_u8Port)
    {
    case GPIOA: 
                if (copy_u8Pin < 8)
                {
                   GPIOA_CRL &= ~((0b1111) << (copy_u8Pin * 4));
                   GPIOA_CRL |= ((copy_u8Mode) << (copy_u8Pin * 4));  
                }
                else if (copy_u8Pin < 16)
                {
                   copy_u8Pin -= 8;
                   GPIOA_CRH &= ~((0b1111) << (copy_u8Pin * 4));
                   GPIOA_CRH |= ((copy_u8Mode) << (copy_u8Pin * 4));  
                }
                break;
    case GPIOB:
                if (copy_u8Pin < 8)
                {
                   GPIOB_CRL &= ~((0b1111) << (copy_u8Pin * 4));
                   GPIOB_CRL |= ((copy_u8Mode) << (copy_u8Pin * 4));  
                }
                else if (copy_u8Pin < 16)
                {
                   copy_u8Pin -= 8;
                   GPIOB_CRH &= ~((0b1111) << (copy_u8Pin * 4));
                   GPIOB_CRH |= ((copy_u8Mode) << (copy_u8Pin * 4));  
                }
                break;
    case GPIOC:
                if (copy_u8Pin < 8)
                {
                   GPIOC_CRL &= ~((0b1111) << (copy_u8Pin * 4));
                   GPIOC_CRL |= ((copy_u8Mode) << (copy_u8Pin * 4));  
                }
                else if (copy_u8Pin < 16)
                {
                   copy_u8Pin -= 8;
                   GPIOC_CRH &= ~((0b1111) << (copy_u8Pin * 4));
                   GPIOC_CRH |= ((copy_u8Mode) << (copy_u8Pin * 4));  
                }
                break;    
    }
}

void MGPIO_voidSetPinValue(u8 copy_u8Port, u8 copy_u8Pin , u8 copy_u8Value)
{
    switch (copy_u8Port)
    {
    case GPIOA: 
                if (copy_u8Value == GPIO_HIGH)
                {
                   SET_BIT(GPIOA_ODR, copy_u8Pin);  
                }
                else if (copy_u8Value == GPIO_LOW)
                {
                   CLR_BIT(GPIOA_ODR, copy_u8Pin);  
                }
                break;
    case GPIOB: 
                if (copy_u8Value == GPIO_HIGH)
                {
                   SET_BIT(GPIOB_ODR, copy_u8Pin);  
                }
                else if (copy_u8Value == GPIO_LOW)
                {
                   CLR_BIT(GPIOB_ODR, copy_u8Pin);  
                }
                break;
    case GPIOC: 
                if (copy_u8Value == GPIO_HIGH)
                {
                   SET_BIT(GPIOC_ODR, copy_u8Pin);  
                }
                else if (copy_u8Value == GPIO_LOW)
                {
                   CLR_BIT(GPIOC_ODR, copy_u8Pin);  
                }
                break;
    }
}

u8 MGPIO_u8GetPinValue(u8 copy_u8Port, u8 copy_u8Pin)
{
    u8 local_u8PinValue = 0;
    switch (copy_u8Port)
    {
    case GPIOA: 
               local_u8PinValue = GET_BIT(GPIOA_IDR, copy_u8Pin);
               break;
    case GPIOB: 
               local_u8PinValue = GET_BIT(GPIOB_IDR, copy_u8Pin);
               break;
    case GPIOC: 
               local_u8PinValue = GET_BIT(GPIOC_IDR, copy_u8Pin);
               break;
    }
    return local_u8PinValue;
}