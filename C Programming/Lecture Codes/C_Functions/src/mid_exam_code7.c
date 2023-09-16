/*
 * mid_exam_code7.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */


int Sum(int x)
{
  static  int sum=0;

  if(x>0)
  {
	  sum=sum+x;
	  --x;
	  Sum(x);
  }
//or
  /*
  if(x>0)
   {
 	  Sum(x-1);
 	  sum=sum+x;
   }
*/

return sum;
}
