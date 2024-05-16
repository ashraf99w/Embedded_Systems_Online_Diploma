/*
 * slide_8_interfacing.c
 *
 * Created: 28/09/2021 10:45:54
 * Author : ashraf
 */ 
#include <avr/interrupt.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "LED.h"
#include "Dio.h"
#include "Macros.h"
#include "ADC.h"
#include "External_Interrupt.h"

int main(void)
{   
	
	//#define  potentiometer_external_INT0
	#define adc_interrupt
	//#define trick_code
	
	#ifdef potentiometer_external_INT0
	
		ADC_vinit(1,1,0,0);
		LED8_vInitialize('C',0xff);
		LED_vInit('b',0);
		LED_vInit('b',1);
		External_Interrupt_Initialize(0,'r');
		unsigned short x;
    #endif	

	#ifdef adc_interrupt
	
		unsigned short x;
		ADC_vinit(1,0,0,1);
		LED8_vInitialize('C',0XFF);
		LED_vInit('b',2);
		LED_vInit('b',0);
		LED_vInit('b',1);
		
	#endif	
	
	#ifdef trick_code
	
		ADC_vinit(1,0,0,0);
		sei();
		Set_bit(ADCSRA,ADIE);
		LED_vInit('b',6);
		LED_vInit('b',7);
		
    #endif
	
    while (1) 
    {
		#ifdef potentiometer_external_INT0
		
			x=ADC_u16Read_EXTERNAL_INTERRUPT0();
			PORTC=x;
			PORTB=(x>>8);
			
        #endif
		
        #ifdef adc_interrupt
	   
		   LED_vTurnOff('B',2);
		   _delay_ms(1000);
		   x=ADC_u16Read();
		   PORTC=x;
		   PORTB=(x>>8);
		   
		 #endif 
		
		#ifdef trick_code
		
			Set_bit(ADCSRA,ADSC);//1/f_adc*13=104us to finish conversion
		//	_delay_ms(1); //solve of problem try comment this line and see output
			PORTB=0X40;// 30us maybe
			_delay_ms(1000);
		
		#endif
		
    }
}

	#ifdef adc_interrupt

		ISR(ADC_vect)
		{
			LED_vTurnOn('B',2);
			_delay_ms(1000);
		}
		
    #endif

	#ifdef trick_code
	
		ISR(ADC_vect)
		{
			PORTB=0X80;
			_delay_ms(1000);
		}
	#endif
	


