/************************************************************************************
 * @file        MAFIO_prog.c
 * @author      Yasssr M. Abdalkader (m.abdelkader.yasser@gmail.com)
 * @brief       AFIO Driver - MCAL
 * @version     0.1
 * @date        2022-05-16
 * @copyright   Copyright (c) 2022
 ************************************************************************************/
#include "STD_TYPES.h"
#include "MAFIO_interface.h"
#include "MAFIO_private.h"
#include "MAFIO_config.h"

void MAFIO_voidSetEXTIConfig(u8 copy_u8Line, u8 copy_u8PortMap)
{
    u8 local_u8RegisterIndex = copy_u8Line / 4;
    copy_u8Line %= 4;
    MAFIO_BASE_ADDRESS->EXTICR[0] &= ~((0b1111) << (copy_u8Line * 4));
    MAFIO_BASE_ADDRESS->EXTICR[0] |= ((copy_u8PortMap) << (copy_u8Line * 4));
}