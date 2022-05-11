/************************************************************************************************
 * @file        RCC_config.h
 * @author      Yasser M. Abdalkader (m.abdelkader.yasser@gmail.com)
 * @brief       RCC Driver - MCAL
 * @version     0.1
 * @date        2022-02-14
 * @copyright   Copyright (c) 2022
 ************************************************************************************************/

#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H

/************************************************************************************************
 * \brief   Choose Clock Type. The Following options are available:
 * \li      \c RCC_HSE_CRYSTAL
 * \li      \c RCC_HSE_RC
 * \li      \c RCC_HSI
 * \li      \c RCC_PLL
 ************************************************************************************************/
#define RCC_CLOCK_TYPE RCC_PLL

/************************************************************************************************
 * \note    Only Choose if PLL is chosen as Clock Type
 * \brief   Choose PLL input Clock. The Following options are available
 *          for RCC_PLL_INPUT:
 * \li      \c RCC_PLL_IN_HSI_DIV_2
 * \li      \c RCC_PLL_IN_HSE_DIV_2
 * \li      \c RCC_PLL_IN_HSE
 ************************************************************************************************/
#if RCC_CLOCK_TYPE == RCC_PLL
#define RCC_PLL_INPUT RCC_PLL_IN_HSI_DIV_2
#endif

/************************************************************************************************
 * \brief If PLL is Selected, Choose PLL multiplication factor.
 ************************************************************************************************/
#if RCC_CLOCK_TYPE == RCC_PLL
#define RCC_PLL_MUL_VAL 2

#endif

#endif