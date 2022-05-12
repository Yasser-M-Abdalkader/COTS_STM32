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
/************************************************************************************/
#define GPIO_HIGH                       1   /* GPIO OutPut High                     */
#define GPIO_LOW                        0   /* GPIO OutPut Low                      */
/************************************************************************************/
#define GPIOA                           0   /* GPIO Port A                          */
#define GPIOB                           1   /* GPIO Port B                          */
#define GPIOC                           2   /* GPIO Port C                          */
/************************************************************************************/
#define GPIO_PIN0                       0   /* GPIO Pin 0                           */
#define GPIO_PIN1                       1   /* GPIO Pin 1                           */
#define GPIO_PIN2                       2   /* GPIO Pin 2                           */
#define GPIO_PIN3                       3   /* GPIO Pin 3                           */
#define GPIO_PIN4                       4   /* GPIO Pin 4                           */
#define GPIO_PIN5                       5   /* GPIO Pin 5                           */
#define GPIO_PIN6                       6   /* GPIO Pin 6                           */
#define GPIO_PIN7                       7   /* GPIO Pin 7                           */
#define GPIO_PIN8                       8   /* GPIO Pin 8                           */
#define GPIO_PIN9                       9   /* GPIO Pin 9                           */
#define GPIO_PIN10                      10  /* GPIO Pin 10                          */
#define GPIO_PIN11                      11  /* GPIO Pin 11                          */
#define GPIO_PIN12                      12  /* GPIO Pin 12                          */
#define GPIO_PIN13                      13  /* GPIO Pin 13                          */
#define GPIO_PIN14                      14  /* GPIO Pin 14                          */
#define GPIO_PIN15                      15  /* GPIO Pin 15                          */
/************************************************************************************/
/* Input Configuration modes                                                        */
/************************************************************************************/
#define GPIO_INPUT_ANALOG               0b0000 /* Input Analog                      */
#define GPIO_INPUT_FLOATING             0b0100 /* Input floating                    */
#define GPIO_INPUT_PULL_UP              0b1000 /* Input pull-down                   */
#define GPIO_INPUT_PULL_DOWN            0b1000 /* Input pull-up                     */
/************************************************************************************/
/* Output Configuration modes                                                       */
/************************************************************************************/
/* Maximum output speed 10 MHz                                                      */
#define GPIO_OUTPUT_SPEED_10MHZ_PP      0b0001 /* Output Push-pull                  */
#define GPIO_OUTPUT_SPEED_10MHZ_OD      0b0101 /* Output Open-drain                 */
#define GPIO_OUTPUT_SPEED_10MHZ_AFPP    0b1001 /* Alternate Function Push-pull      */
#define GPIO_OUTPUT_SPEED_10MHZ_AFOD    0b1101 /* Alternate Function Open-drain     */
/************************************************************************************/
/* Maximum output speed 2 MHz                                                       */
#define GPIO_OUTPUT_SPEED_2MHZ_PP       0b0011 /* Output Push-pull                  */
#define GPIO_OUTPUT_SPEED_2MHZ_OD       0b0110 /* Output Open-drain                 */
#define GPIO_OUTPUT_SPEED_2MHZ_AFPP     0b1010 /* Alternate Function Push-pull      */
#define GPIO_OUTPUT_SPEED_2MHZ_AFOD     0b1110 /* Alternate Function Open-drain     */
/************************************************************************************/
/* Maximum output speed 50 MHz                                                      */
#define GPIO_OUTPUT_SPEED_50MHZ_PP      0b0011 /* Output Push-pull                  */
#define GPIO_OUTPUT_SPEED_50MHZ_OD      0b0111 /* Output Open-drain                 */
#define GPIO_OUTPUT_SPEED_50MHZ_AFPP    0b1011 /* Alternate Function Push-pull      */
#define GPIO_OUTPUT_SPEED_50MHZ_AFOD    0b1111 /* Alternate Function Open-drain     */
/************************************************************************************/

u8 MGPIO_voidSetPinDirection(u8 copy_u8Port, u8 copy_u8Pin , u8 copy_u8Mode);

u8 MGPIO_voidSetPinValue(u8 copy_u8Port, u8 copy_u8Pin , u8 copy_u8Value);

u8 MGPIO_u8GetPinValue(u8 copy_u8Port, u8 copy_u8Pin, u8* copy_pu8PinValue);

void MGPIO_voidLockPin(u8 copy_u8Port, u8 copy_u8Pin);
#endif