


#include "LED.h"
#include "button.h"
int main(void)
{
	button_vInit('D',0);//Configure Pin As Input
	LED_vInit('D',1);//Configure Pin As Output
	unsigned char z;
    while(1)
    {
       z=button_u8read('D',0);//Reading The Value On Pin
	   if (z==1)
	   {
		   LED_vTurnOn('D',1);//ON
	   }
	   else
	   {
		   LED_vTurnOff('D',1);//Off
	   }
    }
}