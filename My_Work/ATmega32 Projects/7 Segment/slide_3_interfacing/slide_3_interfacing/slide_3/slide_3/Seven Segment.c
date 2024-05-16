/*
 * Seven_Segment.c
 *
 * Created: 20/09/2021 16:47:03
 *  Author: ashraf
 */ 


#include "DIO.h"
void Seven_Seg_vinit(unsigned char portname)
{
	DIO_set_port_direction(portname,0xFF);
}

void Seven_Seg_vWrite(unsigned char portname,unsigned char number)
{
	unsigned char arr[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F,0x77,0x7c,0x39,0x5e,0x79,0x71};

	DIO_write_port(portname,arr[number]);
}



void  Seven_Seg_vinit_BCD_LowNibble(unsigned char portname)
{
	Dio_vSetPinDir(portname,0,1);
	Dio_vSetPinDir(portname,1,1);
	Dio_vSetPinDir(portname,2,1);
	Dio_vSetPinDir(portname,3,1);
}

void  Seven_Seg_vinit_BCD_HighNibble(unsigned char portname)
{
		Dio_vSetPinDir(portname,4,1);
		Dio_vSetPinDir(portname,5,1);
		Dio_vSetPinDir(portname,6,1);
		Dio_vSetPinDir(portname,7,1);
}



void  Seven_Seg_vWrite_BCD_LowNibble(unsigned char portname,unsigned char value)
{
    write_low_nibble(portname,value);
}
void  Seven_Seg_vWrite_BCD_HighNibble(unsigned char portname,unsigned char value)
{
	write_high_nibble(portname,value);
}