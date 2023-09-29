/*
 * compare_voidpointer.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */


int compare(void*val1,void*val2,int type)
{
	int r;
	switch(type)
	{
	case 1://integer
		if(*(int*)val1==*(int*)val2)
			r=0;
		else if(*(int*)val1>*(int*)val2)
			r=1;
		else
			r=-1;
	    break;
	case 2://double
		if(*(double*)val1==*(double*)val2)
			r=0;
		else if(*(double*)val1>*(double*)val2)
			r=1;
		else
			r=-1;
		break;
	}

return r;
}
