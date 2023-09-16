/*

 * code1.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */



int fact(int x)
{
	int fact=1;

	for(;x>1;x--)
	{
		fact=fact*x;
	}
	return fact;
}


