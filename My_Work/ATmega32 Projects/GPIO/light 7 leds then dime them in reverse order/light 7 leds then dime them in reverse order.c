

#define F_CPU 8000000UL
#include <util/delay.h>
#include "LED.h"
#include "DIO.h"
int main(void)
{
	DIO_set_port_direction('D',0xFF);//Set Port D As Output
	signed  char i;
    while(1)
    {
      for (i=0;i<=7;i++)
      {
		  LED_vTurnOn('D',i);
		  _delay_ms(1000);
      }
	  for (i=7;i>=0;i--)
	  {
		  LED_vTurnOff('D',i);
		  _delay_ms(1000);
	  }
    }
}