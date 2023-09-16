/*
 * mid_exam_code4.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */
#include <stdio.h>
#include <stdlib.h>

void reverse_digits(void)
{
    char arr[10];
    int i=0,j;
	printf("enter a digit :");
	fflush(stdin); fflush(stdout);
	scanf("%s",arr);
	while(arr[i]!='\0')
	{
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%c",arr[j]);
	}
}
