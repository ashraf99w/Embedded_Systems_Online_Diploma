#include <avr/interrupt.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "LED.h"
#include "button.h"


int main(void)
{
	LED_vInit('D',7);  // intialize led
	button_vInit('D',2);
	sei();  // to open global interrupt bit (I-bit)
	MCUCR |= (1<<ISC01)|(1<<ISC00);  // to select rising edge mode
	GICR|=(1<<INT0);// to enable interrupt 0

	while(1)
	{
		LED_vTurnOff('D',7); // dim the led
	}
}

ISR(INT0_vect)
{
	LED_vTurnOn('D',7); // light up the led
	_delay_ms(1000);  //delay 1 sec
}

