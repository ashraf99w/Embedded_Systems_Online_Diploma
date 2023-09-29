/*
 * pointer_to_function.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */
#include <stdio.h>
#include <stdlib.h>
//for code 1
void print_hello()
{
 printf("hello\n");
}

void check(char *a,char *b, int (* p_fun)(char *,char *))
{

	printf("checking equality\n");

	if(!p_fun(a,b))
		printf("they are equal\n");
	else
		printf("they are not equal\n");

}
