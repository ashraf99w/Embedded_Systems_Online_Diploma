/*
 * lec_assginment.c
 *
 * Created: 17/04/2024 05:15:21 ص
 * Author : ashraf
 */ 

#include <avr/io.h>
#define F_CPU 1000000
#include <util/delay.h>
#include "Dio.h"

/*
 Write An embedded C Code
To toggle 3 Led on sequential way
*/

int main(void)
{
    Dio_vSetPinDir('a',0,1);
	Dio_vSetPinDir('a',1,1);
	Dio_vSetPinDir('a',2,1);
	
    while (1) 
    {
		DIO_vWrite_pin('A',0,1);
		DIO_vWrite_pin('A',2,0);
		_delay_ms(1000);
		DIO_vWrite_pin('A',0,0);
		DIO_vWrite_pin('A',1,1);
		_delay_ms(1000);
		DIO_vWrite_pin('A',1,0);
		DIO_vWrite_pin('A',2,1);
		_delay_ms(1000);
		
    }
}

