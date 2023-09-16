/*
 * mid_exam_code2.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */
#include <stdio.h>
#include <stdlib.h>
void printing_prime_numbers(void)
{
	int i,j,a,b;
		printf("enter two number to check the prime numbers between them:");
		fflush(stdin);fflush(stdout);
		scanf("%d%d",&a,&b);
		if(a==1)
			printf("%d ",1);
		char flag=0;
		for (i=a;i<b;i++)
		{
			for (j=1;j<=i;j++)
			{
				if(i%j ==0)
				{
					flag++;
				}
			}
			if (flag==2)
				printf("%d ",i);
		flag=0;
	}
}
