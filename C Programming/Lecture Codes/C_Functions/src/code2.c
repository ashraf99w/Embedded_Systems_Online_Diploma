/*
 * code2.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */


int calcMin(int values[], int n)
{

	int i,min=values[0];
	for(i=1;i<n;i++)
	{
		if(min>values[i])
			min=values[i];
	}
	return min;
}
