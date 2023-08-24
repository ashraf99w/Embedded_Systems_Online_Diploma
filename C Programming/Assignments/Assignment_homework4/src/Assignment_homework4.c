/*
 ============================================================================
 Name        : Assignment_homework4.c
 Author      : ashraf mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "EX1.h"
#include "EX2.h"
#include "EX3.h"
#include "EX4.h"





int main(void) {


	/*EX1*/

	/*
	int n1,n2,i,flag;
	printf("enter two numbers(intervals) : ");
	fflush(stdout);	fflush(stdin);
	scanf("%d %d",&n1,&n2);
	for(i=n1+1;i<n2;++i)
	{
		flag=check_prime(i);
		if(flag == 0)
			printf("%d ",i);

	}
	 */

	/*EX2*/
	/*
	int n1,n2;
	printf("enter a number: ");
	fflush(stdout);	fflush(stdin);
	scanf("%d ",&n1);
	n2=factorial_recursion(n1);
	printf("\nthe factorial of %d is %d",n1,n2);
	 */


	/*EX3*/
	/*
	printf("enter a sentences : ");
	fflush(stdin);fflush(stdout);
	reverse();
	 */





	/*EX4*/
	/*
	int base,power,ANSWER;
	printf("enter base number : ");
	fflush(stdout);	fflush(stdin);
	scanf("%d",&base);
	printf("\nenter power number(positive integer) : ");
	fflush(stdout);	fflush(stdin);
	scanf("%d",&power);

	ANSWER=Power_Of_Num(base,power);

	printf("\n%d^%d=%d",base,power,ANSWER);

	 */



	return 0;

}
