/*
 * EX1.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */

#include <stdio.h>
#include <stdlib.h>

int check_prime(int x)
{
   int j,flag=0;
   for(j=2;j<=(x/2);++j)
   {
	   if(x%j==0)
	   {
		   flag=1;
		   break;
	   }

   }
   return flag;
}
