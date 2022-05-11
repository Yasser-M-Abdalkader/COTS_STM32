/*
* HLCD_interface.h
* 
* Created on   : Jan 5, 2022
* Author	   : Yasser Mustafa Ahmed
* Program      : Intensive Code Camp
* Organization : ITI Alex
 */
#ifndef _BIT_MATH_H
#define _BIT_MATH_H

#define SET_BIT(VAR,BITNO) (VAR) |=  (1 << (BITNO))
#define CLR_BIT(VAR,BITNO) (VAR) &= ~(1 << (BITNO))
#define TOG_BIT(VAR,BITNO) (VAR) ^=  (1 << (BITNO))
#define GET_BIT(VAR,BITNO) (((VAR) >> (BITNO)) & 0x01)
#define SET_BYTE(VAR,BITNO) (VAR = BITNO)

#define CONC_BIT(b7, b6, b5, b4, b3, b2, b1, b0) 	CONC_help(b7, b6, b5, b4, b3, b2, b1, b0)
#define CONC_help(b7, b6, b5, b4, b3, b2, b1, b0) 	0b##b7##b6##b5##b4##b3##b2##b1##b0


#endif
