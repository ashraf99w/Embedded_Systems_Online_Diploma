/*
 * EEPROM.c
 *
 * Created: 22/09/2021 13:31:55
 *  Author: ashraf
 */ 


#include <avr/io.h>
#include "Macros.h"


void EEPROM_vWRITE(unsigned short address,unsigned char data)
{
	/*set up address register*/
	EEARL=(char)address;
	EEARH=(char)(address>>8);
	/*set up data register*/
	EEDR=data ;
	/*write logical one to EEMWE*/
	Set_bit(EECR,EEMWE);
	/*start EEPROM write by setting EEWE*/
	Set_bit(EECR,EEWE);
	/* wait for completion of  write operation */
	while(Read_bit(EECR,EEWE)==1);

}
unsigned char EEPROM_vREAD(unsigned short address)
{
	/*set up address register*/
	EEARL=(char)address;
	EEARH=(char)(address>>8);
	/*start EEPROM read by setting EERE*/
	Set_bit(EECR,EERE);
	/*return data from data register*/
	return EEDR ;

}