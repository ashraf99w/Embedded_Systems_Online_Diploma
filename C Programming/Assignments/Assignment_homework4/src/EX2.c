/*
 * EX2.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */


int factorial_recursion(int num)
{
	static int fact=1;
	if(num>1)
	{
		fact=fact*num;
		num--;
		factorial_recursion(num);
	}


	return fact;
	}
