/*
 * mid_exam_code5.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */

#include <stdio.h>
#include <stdlib.h>
void count_ones_InBinary(void)
{
	unsigned int num;
	int i,counter=0;
	printf("enter an integer :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	for(i=31;i>=0;i--)
	{
		if((num>>i)&1)
			counter++;
	}
	//or
	/*
	for(i=0;i<=31;i++)
		{
			if(num& (1<<i))
				counter++;
		}
	*/
	printf("\n%d",counter);

}
