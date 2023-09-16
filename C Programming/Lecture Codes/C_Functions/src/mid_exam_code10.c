/*
 * mid_exam_code10.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */
#include <stdio.h>
#include <stdlib.h>

//the code is working but anta mesh fahem
int countNO_ONES(int num)
{
	int count=0;

while(num!=0)
{

	num=num &(num<<1);
	count++;

}

	return count;
}
