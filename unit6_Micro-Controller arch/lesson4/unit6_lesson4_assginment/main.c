/*
 * unit6_lesson4_assginment.c
 *
 * Created: 15/04/2024 07:46:29 ص
 * Author : ashraf
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
# define F_CPU 1000000UL
#include <avr/delay.h>
#include "External_Interrupt.h"
#include "Dio.h"



int main(void)
{
    External_Interrupt_Initialize(0,'a');
	External_Interrupt_Initialize(1,'r');
	External_Interrupt_Initialize(2,'f');
	
	Dio_vSetPinDir('d',5,1);//interrupt0
	Dio_vSetPinDir('d',6,1);//interrupt1
	Dio_vSetPinDir('d',7,1);//interrupt2
	
	
    while (1) 
    {
		DIO_vWrite_pin('d',5,0);//interrupt 0
		DIO_vWrite_pin('d',6,0);//interrupt 1
		DIO_vWrite_pin('d',7,0);//interrupt 2
    }
}

ISR(INT0_vect)
{
	DIO_vWrite_pin('d',5,1);
	_delay_ms(1000);
}



ISR(INT1_vect)
{
	DIO_vWrite_pin('d',6,1);
	_delay_ms(1000);
}



ISR(INT2_vect)
{
	DIO_vWrite_pin('d',7,1);
	_delay_ms(1000);
}