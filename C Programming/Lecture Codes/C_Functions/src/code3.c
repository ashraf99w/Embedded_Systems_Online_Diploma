/*
 * code3.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */
#include <stdio.h>
#include <stdlib.h>

int findName(char names[][14], int n, char name[])
{

	int i=0,answer=0;
	for(i=0;i<n;++i)
	{

		if(strcmp(name,names[i])== 0)
		{
			answer=1;
			break;

		}


	}
  return answer;
}

