/*
 * mid_exam_code8.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */

#include <stdio.h>
#include <stdlib.h>

void reverse_elements(int arr[],int n)
{
	int i,j,temp;

	for (i=0,j=n-1;j>i;i++,j--)
	{
		temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
	}

	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}



}
