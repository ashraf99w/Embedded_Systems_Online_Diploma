/*
 * ReadWrite_EEPROM.c
 *
 * Created: 08/05/2024 02:38:58 م
 * Author : ashraf
 */ 

#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "EEPROM.h"
#include "LED.h"


int main(void)
{
	LED_vInit('a',0);
	
    EEPROM_vWRITE(0x55,0x23);
	EEPROM_vWRITE(0x56,0x25);
	EEPROM_vWRITE(0x57,0x30);
	unsigned char x,y,z;
	
	x=EEPROM_vREAD(0x55);
	y=EEPROM_vREAD(0x56);
	z=EEPROM_vREAD(0x57);
	
	if (x==0x23 && y==0x25 && z==0x30)
	{
		LED_vTurnOn('a',0);
	}
	
	
    while (1) 
    {
    }
}

