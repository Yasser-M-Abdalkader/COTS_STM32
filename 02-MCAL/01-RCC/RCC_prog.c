/************************************************************************************************
 * @file RCC_prog.c
 * @author Yasser M. Abdalkader (m.abdelkader.yasser@gmail.com) 
 * @brief RCC Driver - MCAL
 * @version 0.1
 * @date 2022-02-14
 * @copyright Copyright (c) 2022
 ************************************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h" 
#include "RCC_private.h"
#include "RCC_config.h"

void RCC_voidInitSysClock(void)
{
    #if     RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL
        RCC_CR      = 0x00010000; /*Enable HSE with no bypass*/
        RCC_CFGR    = 0x00000001; /*Select HSE as system clock*/
        
    #elif   RCC_CLOCK_TYPE == RCC_HSE_RC
        RCC_CR      = 0x00050000; /*Enable HSE with bypass*/
        RCC_CFGR    = 0x00000001; /*Select HSE as system clock*/

    #elif   RCC_CLOCK_TYPE == RCC_HSI
        RCC_CR      = 0x00000001; /*Enable HSI*/
        RCC_CFGR    = 0x00000000; /*Select HSI as system clock*/

    #elif   RCC_CLOCK_TYPE == RCC_PLL
        #if     RCC_PLL_INPUT == RCC_PLL_IN_HSI_DIV_2
            RCC_CFGR = 0x00020000;

        #elif   RCC_PLL_INPUT == RCC_PLL_IN_HSE_DIV_2
            RCC_CFGR = 0x00030000;

        #elif   RCC_PLL_INPUT == RCC_PLL_IN_HSE
            RCC_CFGR = 0x00010000;
            
        #else
            #error ("Not A valid PLL input")

        #endif

    #else
            #error  ("You chose Wrong Clock Type")

    #endif
}

void RCC_voidEnableClock(u8 copy_u8BusId, u8 copy_u8PerID)
{
    if (copy_u8PerID <= 31)
    {
        switch (copy_u8BusId)
        {
        case RCC_AHB    : SET_BIT(RCC_AHBENR, copy_u8PerID);    break;
        case RCC_APB1   : SET_BIT(RCC_APB1ENR, copy_u8PerID);   break;  
        case RCC_APB2   : SET_BIT(RCC_APB2ENR, copy_u8PerID);   break;
        /*default       : Return Error                          break;*/
        }       
    }
    else
    {
        /* Return Error*/
    }
    
}

void RCC_voideDisableClock(u8 copy_u8BusId, u8 copy_u8PerID)
{
    if (copy_u8PerID <= 31)
    {
        switch (copy_u8BusId)
        {
        case RCC_AHB    : CLR_BIT(RCC_AHBENR, copy_u8PerID);    break;
        case RCC_APB1   : CLR_BIT(RCC_APB1ENR, copy_u8PerID);   break;  
        case RCC_APB2   : CLR_BIT(RCC_APB2ENR, copy_u8PerID);   break;
        /*default       : Return Error                      break;*/
        }       
    }
    else
    {
        /* Return Error*/
    }
    
}

