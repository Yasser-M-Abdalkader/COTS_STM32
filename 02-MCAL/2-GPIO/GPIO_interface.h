/***********************************************************************************
 * @file       GPIO_interface.h
 * @author     Yasser M. Abdalkader (m.abdelkader.yasser@gmail.com)
 * @brief      GPIO Driver - MCAL
 * @version    0.1
 * @date       2022-02-15
 * @copyright  Copyright (c) 2022
 ***********************************************************************************/

#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

#define GPIO_HIGH       1
#define GPIO_LOW        0

#define GPIOA           0
#define GPIOB           1
#define GPIOC           2

#define GPIO_PIN0            0
#define GPIO_PIN1            1
#define GPIO_PIN2            2
#define GPIO_PIN3            3
#define GPIO_PIN4            4
#define GPIO_PIN5            5
#define GPIO_PIN6            6
#define GPIO_PIN7            7
#define GPIO_PIN8            8
#define GPIO_PIN9            9
#define GPIO_PIN10           10
#define GPIO_PIN11           11
#define GPIO_PIN12           12
#define GPIO_PIN13           13
#define GPIO_PIN14           14
#define GPIO_PIN15           15

#define GPIO_INPUT_ANALOG                0b0000
#define GPIO_INPUT_FLOATING              0b0100
#define GPIO_INPUT_PULL_UP               0b1000
#define GPIO_INPUT_PULL_DOWN             0b1000


#define GPIO_OUTPUT_SPEED_10MHZ_PP       0b0001
#define GPIO_OUTPUT_SPEED_10MHZ_OD       0b0101
#define GPIO_OUTPUT_SPEED_10MHZ_AFPP     0b1001
#define GPIO_OUTPUT_SPEED_10MHZ_AFOD     0b1101

#define GPIO_OUTPUT_SPEED_2MHZ_PP        0b0011
#define GPIO_OUTPUT_SPEED_2MHZ_OD        0b0110
#define GPIO_OUTPUT_SPEED_2MHZ_AFPP      0b1010
#define GPIO_OUTPUT_SPEED_2MHZ_AFOD      0b1110

#define GPIO_OUTPUT_SPEED_50MHZ_PP       0b0011
#define GPIO_OUTPUT_SPEED_50MHZ_OD       0b0111
#define GPIO_OUTPUT_SPEED_50MHZ_AFPP     0b1011
#define GPIO_OUTPUT_SPEED_50MHZ_AFOD     0b1111


void MGPIO_voidSetPinDirection(u8 copy_u8Port, u8 copy_u8Pin , u8 copy_u8Mode);

void MGPIO_voidSetPinValue(u8 copy_u8Port, u8 copy_u8Pin , u8 copy_u8Value);

u8 MGPIO_u8GetPinValue(u8 copy_u8Port, u8 copy_u8Pin);
#endif