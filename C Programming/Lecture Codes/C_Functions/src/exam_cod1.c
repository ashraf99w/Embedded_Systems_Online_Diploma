/*
 * exam_cod1.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */

#include <stdio.h>
#include <stdlib.h>

void adding_digits(void)
{
	int n,digit,sum=0;
	    printf("Please enter a positive integer: ");
	    fflush(stdin);fflush(stdout);
	    scanf("%d",&n);
	    while (n>0)
	    {
	        digit=n%10;
	        sum=sum+digit;
	        n=n/10;
	    }

printf ("%d",sum);
}
