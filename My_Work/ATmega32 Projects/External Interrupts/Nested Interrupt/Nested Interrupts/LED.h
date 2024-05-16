/*
 * LED.h
 *
 * Created: 16/09/2021 16:06:51
 *  Author: ashraf
 */ 


#ifndef LED_H_
#define LED_H_

//All functions tested.
/*
	Function Name        : LED_vInit
	Function Returns     : void
	Function Arguments   : unsigned char portname,unsigned char pinnumber
	Function Description : Initialize the pin as an output pin to connect the led.
*/
void LED_vInit(unsigned char portname,unsigned char pinnumber);


/*
	Function Name        : LED_vTurnOn
	Function Returns     : void
	Function Arguments   : unsigned char portname,unsigned char pinnumber
	Function Description : Turn on the led connected to the given pin and port.
*/
void LED_vTurnOn(unsigned char portname,unsigned char pinnumber);


/*
	Function Name        : LED_vTurnOff
	Function Returns     : void
	Function Arguments   : unsigned char portname,unsigned char pinnumber
	Function Description : Turn off the led connected to the given pin and port.
*/
void LED_vTurnOff(unsigned char portname,unsigned char pinnumber);


/*
	Function Name        : LED_vToggle
	Function Returns     : void
	Function Arguments   : unsigned char portname,unsigned char pinnumber
	Function Description : Toggle the led connected to the given pin and port.
*/
void LED_vToggle(unsigned char portname,unsigned char pinnumber);

/*
	Function Name        : LED_u8Status
	Function Returns     : unsigned char
	Function Arguments   : unsigned char portname,unsigned char pinnumber
	Function Description : Returns the status of the led 1 if it is on zero else.
*/
unsigned char  LED_u8Status(unsigned char portname,unsigned char pinnumber);


/*
	Function Name        : LED8_vInitialize
	Function Returns     : void
	Function Arguments   : unsigned char portname,unsigned char pinnumber
	Function Description : Initializes the whole port as output to serve 8 Led s.
*/
void LED8_vInitialize(unsigned char portname,unsigned char direction);


#endif /* LED_H_ */