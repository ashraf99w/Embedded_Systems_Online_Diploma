/*
 * External_Interrupt.h
 *
 * Created: 18/08/2022 12:44:18 ص
 *  Author: ashraf
 */ 


#ifndef EXTERNAL_INTERRUPT_H_
#define EXTERNAL_INTERRUPT_H_



/*
    >>>TESTED<<<
	Function Name        : External_Interrupt_Initialize
	Function Returns     : void
	Function Arguments   : unsigned char int_num, unsigned char trigger
	Function Description : The function takes the external interrupt number and according 
	                       to the trigger it determines when to sense interrupt
						   ((f,F):for falling edge trigger,(r,R):for rising edge trigger,
						   (l,L):for low level trigger and (h,H):for high level trigger)
*/
void External_Interrupt_Initialize(unsigned char int_num,unsigned char trigger);



#endif /* EXTERNAL_INTERRUPT_H_ */