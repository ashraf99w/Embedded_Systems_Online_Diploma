/*
 * slide_3.c
 *
 * Created: 20/09/2021 14:02:56
 * Author : ashraf
 */ 
#include <avr/io.h>
#define  F_CPU 8000000UL
#include <util/delay.h>
#include "Button.h"
#include "Seven Segment.h"
#include "Dio.h"

int main(void)
{
	//#define first_code
	//#define secound_code
	//#define third_code
	#define fourth_code
	
	
	
	//writing from 0 to f
	 #ifdef first_code
	
     	Seven_Seg_vinit('D');
	    unsigned char counter=0;
	
     #endif
	
	//writing from 0 to f each button press
	 #ifdef  secound_code
	 
		 button_vInit('a',1);
		 Seven_Seg_vinit('d');
		 unsigned char counter=0;
		 unsigned char previus_value=0;
		 unsigned char x;
	 
     #endif
	 
	 
	 #ifdef  third_code
	 
		 Seven_Seg_vinit_BCD_HighNibble('c');
		 unsigned int counter;
	 
	 #endif
	 
	 #ifdef  fourth_code
	 
		 Seven_Seg_vinit_BCD_LowNibble('c');
		 unsigned int counter;
	 
	 #endif
	 

    while (1) 
    {
		
		 //writing from 0 to f
		 #ifdef first_code
		 
			 for(counter=0;counter<=15;counter++)
			 {
			 
				 Seven_Seg_vWrite('D',counter);
				 _delay_ms(600);
			 }
		 
		 #endif
		 
		 //writing from 0 to f each button press
		 #ifdef  secound_code
		 
			x=button_u8read_pin('a',1);
			
			if((1==x )    &&   ( 0== previus_value))
			{
				counter++;
				previus_value=1;
			}
			else if(0==x)
			{
				previus_value=0;
			}
			
			if(counter>15)
			{
				counter=0;
			}
			Seven_Seg_vWrite('d',counter);
		 
		 
		 
		 #endif
		 
		 
		 #ifdef  third_code
		 
			for(counter=0;counter<10;counter++)
			{
				
				Seven_Seg_vWrite_BCD_HighNibble('c',counter);
				_delay_ms(600);
			}
		 
		 #endif
		 
		 #ifdef  fourth_code
		 
			for(counter=0;counter<10;counter++)
			{
				
				Seven_Seg_vWrite_BCD_LowNibble('c',counter);
				_delay_ms(600);
			}
		 
		 
		 #endif
		
	
	}
	
	
}

