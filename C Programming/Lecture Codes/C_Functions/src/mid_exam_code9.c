/*
 * mid_exam_code9.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
void revers_words(void){
 char a[100];
 char b[100];
 int i=0,j,k;
 printf("enter a sentences of two words :");
 fflush(stdin);fflush(stdout);
 gets(a);
 while(a[i] != ' ')
 { i++;}
 k=i;
 //putting 1st word in b
 for(j=0;j<i;j++)
 { b[j]=a[j];}
 b[j]='\0';
 //putting 2nd word in a
 for(j=i+1,i=0;a[j]!='\0';j++,i++)
 {a[i]=a[j];}
 a[i]=' ';
 for(j=k+1;a[j]!='\0';j++)
 { a[j]='\0'; }
 strcat(a,b);
 printf("%s",a);
}


//not working

void revers_words_section_sol(char a[],int size)
{
	int i,j,k=0;
	char b[50];
	for(i=size-1; i>=0; i--)
	{

		if(a[i] ==' ')
		{

			for(j=k-1; j>=0; j--)
			{
				printf("%c",b[j]);
			}
			printf(" ");
			k=0;
		}

		else
		{
			b[k]=a[i];
			k++;
		}


	}
	if(k!=0)
			{
				for(j=k-1; j>=0; j--)
				{
					printf("%c",b[j]);
				}
			}
}
