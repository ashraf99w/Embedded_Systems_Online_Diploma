/*
 * Nested Interrupts.c
 *
 * Created: 08/05/2024 01:33:15 م
 * Author : ashraf
 */ 

#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include <avr/interrupt.h>
#include "LED.h"
#include "External_Interrupt.h"
#include "Button.h"



int main(void)
{
	
	External_Interrupt_Initialize(0,'f');
	External_Interrupt_Initialize(1,'f');
	External_Interrupt_Initialize(2,'f');
	
    LED_vInit('a',0);
	LED_vInit('a',1);
	LED_vInit('a',2);
    while (1) 
    {
		//turning of all the leds
		LED_vTurnOff('a',0);
		LED_vTurnOff('a',1);
		LED_vTurnOff('a',2);
    }
}

ISR(INT0_vect)
{
	LED_vTurnOn('a',0);
	_delay_ms(2000);
	LED_vTurnOff('a',0);

	
	

}


ISR(INT1_vect)
{
	//enabling nested interrupt
	sei();
	LED_vTurnOn('a',1);
	_delay_ms(2000);
	LED_vTurnOff('a',1);
}

ISR(INT2_vect)
{
	LED_vTurnOn('a',2);
	_delay_ms(2000);
	LED_vTurnOff('a',2);
}