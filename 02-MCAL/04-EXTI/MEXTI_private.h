
/*********************************************************************************
 * @file        MEXTI_private.h
 * @author      Yasssr Mustafa
 * @brief       EXTI Driver - MCAL
 * @version     0.1
 * @date        2022-05-16
 * @copyright   Copyright (c) 2022
 *********************************************************************************/
#ifndef MEXTI_PRIVATE_H
#define MEXTI_PRIVATE_H

typedef struct
{
    volatile u32 IMR;   /* Interrupt mask register */
    volatile u32 EMR;   /* Event mask register */
    volatile u32 RTSR;  /* Rising trigger selection register */
    volatile u32 FTSR;  /* Falling trigger selection register */
    volatile u32 SWIER; /* Software interrupt event register */
    volatile u32 PR;    /* Pending register */
} MEXT_t;

#define MEXTI ((volatile MEXT_t *)0x40010400) /* External Interrupt start address */

#define LINE00 1
#define LINE01 1
#define LINE02 1
#define LINE03 1
#define LINE04 1
#define LINE05 1
#define LINE06 1
#define LINE07 1
#define LINE08 1
#define LINE09 1
#define LINE10 1
#define LINE11 1
#define LINE12 1
#define LINE13 1
#define LINE14 1
#define LINE15 1

#define MEXTI_RISING_EDGE   1
#define MEXTI_FALLING_EDGE   2
#define MEXTI_ON_CHANGE     3



#endif