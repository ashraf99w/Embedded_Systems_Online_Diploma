/*
 * EX4.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */

int Power_Of_Num(int b,int p)
{
	static int answer=1;
	if(p>0)
	{
		answer*=b;
		--p;
		Power_Of_Num(b,p);
	}

	return answer;

}
