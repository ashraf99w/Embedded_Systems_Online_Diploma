/*
 * EX3.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */



void reverse(void)
{
	char c;

	scanf("%c",&c);
	if(c!='\n')
	{
		reverse();
		printf("%c",c);
	}


}

