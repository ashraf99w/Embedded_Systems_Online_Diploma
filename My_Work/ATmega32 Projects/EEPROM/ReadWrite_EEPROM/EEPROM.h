/*
 * EEPROM.h
 *
 * Created: 22/09/2021 13:32:16
 *  Author: ashraf
 */ 


#ifndef EEPROM_H_
#define EEPROM_H_


/*
Function Name        : EEPROM_vWRITE
Function Returns     : void
Function Arguments   : unsigned short address, unsigned  char data
Function Description : write one byte to the given  address.
*/
void EEPROM_vWRITE(unsigned short address,unsigned char data);


/*
Function Name        : EEPROM_vREAD
Function Returns     : unsigned char
Function Arguments   : unsigned  short address
Function Description : read one byte from the given  address.
*/
unsigned char EEPROM_vREAD(unsigned short address);


#endif /* EEPROM_H_ */