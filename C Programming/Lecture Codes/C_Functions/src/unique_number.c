/*
 * unique_number.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */


int unique_num(int a[],int size)
{
	int result=0,i;
	for(i=0;i<size;i++)
	{
		result=result^a[i];
	}
return result;

}
