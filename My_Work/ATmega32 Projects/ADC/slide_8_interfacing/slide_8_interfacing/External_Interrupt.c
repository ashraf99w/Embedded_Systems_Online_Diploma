/*
 * External_Interrupt.c
 *
 * Created: 18/08/2022 12:45:10 ص
 *  Author: ashraf
 */
#include <avr/interrupt.h>
#include "Macros.h"
#include "Dio.h"


void External_Interrupt_Initialize(unsigned char int_num,unsigned char trigger)
{
	sei();
	switch(int_num)
	{
		case 0:
		    Set_bit(GICR,INT0);
			Dio_vSetPinDir('d',2,0);
			switch(trigger)
			{
				case 'R':
				case 'r':
				    Set_bit(MCUCR,ISC00);
					Set_bit(MCUCR,ISC01);
					break;
					
				case 'F':
				case 'f':
					Clear_bit(MCUCR,ISC00);
					Set_bit(MCUCR,ISC01);
					break;
				
				case 'L':
				case 'l':
					Clear_bit(MCUCR,ISC00);
					Clear_bit(MCUCR,ISC01);
					break;
				
				case 'A':
				case 'a':
					Set_bit(MCUCR,ISC00);
					Clear_bit(MCUCR,ISC01);
					break;
					
			}
		
		case 1:
			Set_bit(GICR,INT1);
			Dio_vSetPinDir('d',3,0);
			switch(trigger)
			{
				case 'R':
				case 'r':
					Set_bit(MCUCR,ISC10);
					Set_bit(MCUCR,ISC11);
					break;
				
				case 'F':
				case 'f':
					Clear_bit(MCUCR,ISC10);
					Set_bit(MCUCR,ISC11);
					break;
				
				case 'L':
				case 'l':
					Clear_bit(MCUCR,ISC10);
					Clear_bit(MCUCR,ISC11);
					break;
				
				case 'A':
				case 'a':
					Set_bit(MCUCR,ISC10);
					Clear_bit(MCUCR,ISC11);
					break;
				
			}
		
		case 2:
			Set_bit(GICR,INT2);
			Dio_vSetPinDir('b',2,0);
			switch(trigger)
			{
				case 'R':
				case 'r':
					Set_bit(MCUCSR,ISC2);
					break;
				
				case 'F':
				case 'f':
					Clear_bit(MCUCSR,ISC2);
					break;
			}
	}
} 
