/**
 * @file RCC_config.h
 * @author Yasser Mustafa 
 * @brief RCC Driver - MCAL
 * @version 0.1
 * @date 2022-02-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H

/**
 * @note choose the following:
 * @param               RCC_HSE_CRYSTAL
 * @param               RCC_HSE_RC
 * @param               RCC_HSI
 * @param               RCC_PLL 
 * 
 */
#define RCC_CLOCK_TYPE  RCC_PLL


/**
 * @note choose the following:
 * @param               RCC_PLL_IN_HSI_DIV_2
 * @param               RCC_PLL_IN_HSE_DIV_2
 * @param               RCC_PLL_IN_HSE
 * 
 */
/** @note only choose if PLL is chosen as input clock sourse */
#if RCC_CLOCK_TYPE == RCC_PLL
    #define RCC_PLL_INPUT   RCC_PLL_IN_HSI_DIV_2

#endif

/**
 * @param 2-16
 * 
 */
#if RCC_CLOCK_TYPE == RCC_PLL
    #define RCC_PLL_MUL_VAL     2 

#endif

#endif