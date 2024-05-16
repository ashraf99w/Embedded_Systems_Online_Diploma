
#include "LED.h"
#include "button.h"
#define F_CPU 8000000UL
#include <util/delay.h>
int main(void)
{
	button_vInit('D',0);
	LED_vInit('D',1);
	unsigned char return_val;
	unsigned char prev_val=0;
	
    while(1)
    {
		/* toggling only when the button pushed (pull-down) */
         return_val=button_u8read('D',0);
		 if ((return_val==1) && (prev_val==0))
		 {
			 LED_vToggle('D',1);
			 prev_val=1;
		 }
		 else if(return_val==0)
		 {
			prev_val=0; 
		 }
		 _delay_ms(50);
    }
}