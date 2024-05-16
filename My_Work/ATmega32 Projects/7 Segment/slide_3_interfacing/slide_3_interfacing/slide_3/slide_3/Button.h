/*
 * Button.h
 *
 * Created: 17/09/2021 10:17:17
 *  Author: ashraf
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

void button_vInit(unsigned char portname,unsigned char pinnumber);


unsigned char button_u8read_pin(unsigned char portname,unsigned char pinnumber);



#endif /* BUTTON_H_ */