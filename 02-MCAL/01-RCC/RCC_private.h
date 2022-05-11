/**
 * @file RCC_private.h
 * @author Yasser Mustafa 
 * @brief RCC Driver - MCAL
 * @version 0.1
 * @date 2022-02-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H


 /** @brief Register Definitions*/
#define RCC_CR                  *((u32*)(0x40021000 + 0x00))
#define RCC_CFGR                *((u32*)(0x40021000 + 0x04))
#define RCC_CIR                 *((u32*)(0x40021000 + 0x08))
#define RCC_APB2RSTR            *((u32*)(0x40021000 + 0x0C))
#define RCC_APB1RSTR            *((u32*)(0x40021000 + 0x010))
#define RCC_AHBENR              *((u32*)(0x40021000 + 0x14))
#define RCC_APB2ENR             *((u32*)(0x40021000 + 0x18))
#define RCC_APB1ENR             *((u32*)(0x40021000 + 0x1C))
#define RCC_BDCR                *((u32*)(0x40021000 + 0x20))
#define RCC_CSR                 *((u32*)(0x40021000 + 0x24))


#define RCC_HSE_CRYSTAL         0
#define RCC_HSE_RC              1
#define RCC_HSI                 2
#define RCC_PLL                 3

#define RCC_PLL_IN_HSI_DIV_2    0
#define RCC_PLL_IN_HSE_DIV_2    1
#define RCC_PLL_IN_HSE          2




#endif