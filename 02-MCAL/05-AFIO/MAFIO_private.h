/************************************************************************************
 * @file        MAFIO_private.h
 * @author      Yasssr M. Abdalkader (m.abdelkader.yasser@gmail.com)
 * @brief       AFIO Driver - MCAL
 * @version     0.1
 * @date        2022-05-16
 * @copyright   Copyright (c) 2022
 ************************************************************************************/
#ifndef MAFIO_PRIVATE_H
#define MAFIO_PRIVATE_H
typedef struct
{
    volatile u32 EVCR;
    volatile u32 MAPR;
    volatile u32 EXTICR[4];
    volatile u32 MAPR2;
} MAFIO_t;
#define MAFIO_BASE_ADDRESS ((MAFIO_t *)0x40010000) /* AFIO Base address */

#endif