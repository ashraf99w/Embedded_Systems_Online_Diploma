/*
 ============================================================================
 Name        : C_Basics_Codes.c
 Author      : ashraf mohammed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <conio.h>
int main(void) {
	//code1
	//------------------------------------------
	/*

	int x=5;
	float y =2.0;
	if(x/y == 2)
		{
			printf("int/float >>> int \n ");
		}
	else if(x/y == 2.5)
		{
			printf("int/float >>> float \n");
		}

	 */
	//-------------------------------------------



	//code2 example for an implicit casting
	//------------------------------------
	/*
	int x=10;
	char y='a'; //ascii of a is 97
	//y implicitly converted to int
	x=x+y;
	//x implicitly converted to float
	float z;
	z= x+ 1.0;
	printf("x=%d	z=%f", x,z);
	 */
	//--------------------------------------


	// code 3  program to demonstrate explicit type casting
	//---------------------------------------------------------

	/*
	double x=1.2;
	//explicit conversiom from double to int
	int sum = (int)x+1;
	printf("sum = %d",sum);
	 */
	//-----------------------------------------------------------


	//code 4 for printf and scanf
	//-----------------------------------------------------------
	/*
	int x;
    printf("Enter a number :");
    fflush(stdout);//without it you will find bug
    scanf("%d",&x);
    printf("number =%d",x);
	 */
	//-----------------------------------------------------------



	//code 5 for printf and scanf with float
	//-----------------------------------------------------------
	/*
		float x;
	    printf("Enter a number :");
	    fflush(stdout);//without it you will find bug
	    scanf("%f",&x);
	    printf("number =%f",x);
	 */
	//-----------------------------------------------------------



	//code 6 for calculating circle area or circumference
	//-----------------------------------------------------------
	/*
	float area,circumference,radius;
	char calc_type;
	printf("Enter the radius :");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&radius);
	printf("Enter a for area calculations \n and c for "
			"circumference calculations ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&calc_type);
	if(calc_type == 'a')
	{area= 3.14 *radius*radius;
	printf("%f",area);
	}
	else if(calc_type == 'c')
	{ circumference=2*3.14*radius;
	printf("%f",circumference);
	}
	else
	{
		printf("wrong entry");
	}
	 */
	//---------------------------------------------------



	//code 7 to find the largest value of 3 numbers
	//-----------------------------------------------------------
	/*
	int a,b,c;
	printf("Enter three values:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("the largest is a");
		else
			printf("the largest is c");

	}
	else
	{
		if(b>c)
			printf("the largest is b");
		else
			printf("the largest is c");
	}



	 */

	//-----------------------------------------------------------


	//code 8 for bitwise operators
	//-------------------------------------------------------
	/*
	        unsigned char Register=0b10000010;
			Register|=(1<<4)|(1<<5);
			printf("%d \n",Register);
			Register&= ~(1<<7);
			printf("%d \n",Register);
			Register^= (1<<2)|(1<<3);
			printf("%d \n",Register);
	 */
	//-----------------------------------------------------------


	//code 9 for calculating minimum using inline condition
	//-----------------------------------------------------------
	/*
            int a,b,minimum;
		    printf("Enter two numbers :");
		    fflush(stdin); fflush(stdout);
		    scanf("%d %d",&a,&b);
		    minimum=(b<a)?b:a;
		    printf("minimum is %d",minimum);
	 */
	//-----------------------------------------------------------



	//code 10 for calculating minimum using inline condition
	//---------------------------------------------------
	/*
	            int a,b;
			    printf("Enter two numbers :");
			    fflush(stdin); fflush(stdout);
			    scanf("%d %d",&a,&b);
			    printf("minimum is %d",(b<a)?b:a);
	 */
	//--------------------------------------------------------



	//code 11 for calculating area and circumference of circle using switch
	//-----------------------------------------------------------
	/*
	char choice;
	float radius,circumference, area;
	printf("Enter the radius of the circle :");
	fflush(stdin); fflush(stdout);
	scanf("%f",&radius);

	printf("Enter a to calc area c to calc circumference");
	fflush(stdin); fflush(stdout);
	scanf("%c",&choice);
	switch(choice)
	{
	case 'a':
	case 'A':
	{
		area = 3.14*radius*radius;
		printf("%f \n",area);
	}
	break;

	case 'C':
	case 'c':
	{
		circumference= 3.14*radius*2;
		printf("%f \n",circumference);
	}
	break;

	default:
	{	printf("wrong choice \n ");}
	}

	 */
	//----------------------------------------------------


	//	code no.12 for loop one line body ex. for loop
	//-------------------------------------------------------
	/*
	int i;
	for (i=0; i<10; i++)
		printf(" %d hello \n",i);
	 */
	//-------------------------------------------------------



	//	code no.13 for loop (summation from 1 to 99) ex. for loop
	//-------------------------------------------------------
	/*
		int i,sum=0;
		for (i=1; i<=99;i++)
		{
		                       //--> sum=0+1
		                       //--> sum=1+2
		                       //--> sum=3+3
		                      // --> sum=6+4

			sum=sum+i;
		}
		printf("%d",sum);
	 */
	//-------------------------------------------------------

	//	code no.14 for loop (average of students degree's)
	//ex. for loop
	//-------------------------------------------------------

	/*
	int i,students_number;
	float sum,degree;
	printf("Enter the number of students :");
	fflush(stdin);
	fflush(stdout);
    scanf("%d",&students_number);
    for(i=1,sum=0;i<=students_number;i++)
    {
    	printf("Enter the degree of %d student :",i);
    		fflush(stdin);
    		fflush(stdout);
    	scanf("%f",&degree);
    	sum= sum+degree;
    }
    printf("average is %f",sum/students_number);

	 */
	//-------------------------------------------------------



	//	code no.15 for calculating the sum off odd values (between 1 to 99)
	//ex.on while
	//-------------------------------------------------------
	/*
	int number=1,sum=0;

	          while(number<=99)
	          {
	        	  sum +=number;
	        	  number+=2;
	          }
	          printf("the sum off odd values (between 1 to 99) = %d",sum);
			//-------------------------------------------------------
	 */

	//	code no.16 for calculating average students degrees ex.(break statement)
	//-------------------------------------------------------

	/*
float sum=0,degree;
int student_number=0;

//you should to start with 0
//to get out from the iteration
//with the right number of students the user entered

printf("enter -ve degree to stop \r\n");
while(1)
{

	printf("enter the student (%d) degree \r\n",student_number+1);
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&degree);
	if(degree<0)
		break;
	sum +=degree;
	student_number++;
}
printf("the average of the students degree's is %f",sum/student_number);


	 */
	//-------------------------------------------------------



	//	code no.17 for calculating polynomial value exam on (do while)
	//-------------------------------------------------------
	/*
	float x,y;
	do
	{
	printf("Enter x value : \n");
	fflush(stdin);
	scanf("%f",&x);
	y=5*x*x +3*x + 2;
	printf("y of (%f) = (%f)",x,y);
	printf(" \n if you want to evaluate again press 'y'\n ");
	}
	while(getche()=='y');
	 */
	//-------------------------------------------------------


	//	code no.18 for calculating polynomial value ex. on goto statement
	//-------------------------------------------------------
	/*
		float x,y;

		evaluate_again:
		printf("Enter x value : \n");
		fflush(stdin);
		scanf("%f",&x);
		y=5*x*x +3*x + 2;
		printf("y of (%f) = (%f)",x,y);
		printf("\n if you want to evaluate again press 'y'\n ");

		if(getche()=='y')
			goto evaluate_again;
	 */
	//-------------------------------------------------------


	//	code no.19  ex. on break statement
	//-------------------------------------------------------
	/*
	int i;
	for (i=0;i<10;i++)
	{
		if (i==5)
			break;
		printf("%d \t",i);// 0	1	2	3	4
	}
	 */
	//-------------------------------------------------------



	//	code no.20  ex. continue statement
	//-------------------------------------------------------
	/*
	int i;
	for (i=0;i<10;i++)
	{
		if(i==5||i==7)
		{
			printf("\nskip printing %d using continue statement \n",i);
			continue;
		}
		printf("%d",i);

//		01234
//		skip printing 5 using continue statement
//		6
//		skip printing 7 using continue statement
//		89


	}
	 */
	//-------------------------------------------------------



	//	code no.21  ex. nested loop
	//-------------------------------------------------------
	/*
	int i =0,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",j+1);
		}
		printf("\n");

//		1	2	3
//		1	2	3
//		1	2   3
	}
	 */

	//-------------------------------------------------------


	//	code no.22  ex. nested loop assignment
	//-------------------------------------------------------
	/*
	  int i,j;
      for(i=0;i<10;i++)
      {
    	  for (j=0+i;j<10;j++)
    	  {
    		  printf("%d ",j);
    	  }
    	  printf("\n");
      }

//
//      01234556789
//      123456789
//      23456789
//      3456789
//      456789
//      56789
//      6789
//      789
//      89
//      9


	//-------------------------------------------------------



	 */


	return 0;
}
