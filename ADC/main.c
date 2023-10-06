/*
 * main.c
 *
 *  Created on: Oct 22, 2021
 *      Author: Eng Ahmed Tarek
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "MADC_Interface.h"
#include "MDIO_Interface.h"
#include "HLCD_Interface.h"
#include <avr/delay.h>

void main(void)
{
 MADC_voidInit();
 HLCD_VoidInit();
 u16 x=0,millivolt=0,temp=0;
while (1)
{
	x=MADC_ReadData(0);
 millivolt= (x*5000ul)/1024;
temp=millivolt/10;
 HLCD_SendNumber(temp);
 HLCD_VoidStringChar("c");
_delay_ms(100);
HLCD_VoidSendCommand(0b00000001);
}



}

