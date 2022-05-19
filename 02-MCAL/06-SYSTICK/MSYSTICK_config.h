/**************************************************************************************************
 * @file        MSYSTICK_config.h
 * @author      Yasser M. Abdalkader (m.abdelkader.yasser@gmail.com)
 * @brief       STSTICK Driver - MCAL Layer
 * @version     0.1
 * @date        2022-05-19
 * @copyright   Copyright (c) 2022
 **************************************************************************************************/
#ifndef MSYSTICK_CONFIG_H
#define MSYSTICK_CONFIG_H

/**************************************************************************************************
 * \def MSYSTICK_CLKSOURCE
 *      Select the clock source. The following options are available
 * \li  \c CLKSOURCE_AHB_DIV_8  /* AHB/8 
 * \li  \c CLKSOURCE_AHB        /* Processor clock (AHB)
 **************************************************************************************************/
#define MSYSTICK_CLKSOURCE  CLKSOURCE_AHB_DIV_8
#endif