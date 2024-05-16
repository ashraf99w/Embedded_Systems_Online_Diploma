/*
 * Seven_Segment.h
 *
 * Created: 20/09/2021 16:45:17
 *  Author: ashraf
 */ 


#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_

/*
	Function Name        : Seven_Seg_vinit
	Function Returns     : void
	Function Arguments   : unsigned char portname
	Function Description : define the given port as output to help us working with seven segment
*/
void  Seven_Seg_vinit(unsigned char portname);


/*
	Function Name        : Seven_Seg_vWrite
	Function Returns     : void
	Function Arguments   : unsigned char portname, unsigned char number
	Function Description : write numbers from 0 to F work with common cathode 
*/
void  Seven_Seg_vWrite(unsigned char portname,unsigned char number);



/*
	Function Name        : Seven_Seg_vinit_BCD_LowNibble
	Function Returns     : void
	Function Arguments   : unsigned char portname
	Function Description : Initialize the low nibble of the given port as output
*/
void  Seven_Seg_vinit_BCD_LowNibble(unsigned char portname);



/*
	Function Name        : Seven_Seg_vinit_BCD_HighNibble
	Function Returns     : void
	Function Arguments   : unsigned char portname
	Function Description : Initialize the high nibble of the given port as output
*/
void  Seven_Seg_vinit_BCD_HighNibble(unsigned char portname);



/*
	Function Name        : Seven_Seg_vWrite_BCD_LowNibble
	Function Returns     : void
	Function Arguments   : unsigned char portname,unsigned char value
	Function Description : displays numbers from 0--->9 by the help of the low nibble of the port
*/
void  Seven_Seg_vWrite_BCD_LowNibble(unsigned char portname,unsigned char value);



/*
	Function Name        : Seven_Seg_vWrite_BCD_HighNibble
	Function Returns     : void
	Function Arguments   : unsigned char portname,unsigned char value
	Function Description : displays numbers from 0--->9 by the help of the high nibble of the port
*/
void  Seven_Seg_vWrite_BCD_HighNibble(unsigned char portname,unsigned char value);

#endif /* SEVEN SEGMENT_H_ */