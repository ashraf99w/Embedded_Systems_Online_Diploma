/*
 ============================================================================
 Name        : C_.c
 Author      : ashraf mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//debug this code
    /*
	int radius=5;
	float area;
	area=3.14*radius*radius;
	float x=1.2;
	int y=5;
	int z=0x878925;
	int a;
	char b;
	a=x;
	b=y;
	b=z;
	*/

	//code no. 2
	/*
	int i;
	float degrees[10];
	//scanning students degrees and store them in array
	for(i=0;i<10;i++)
	{
		printf("\n enter student %d degree :",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&degrees[i]);
	}

	//printing students degrees
	for(i=0;i<10;i++)
	{
		printf("\n student %d degree is : %f",i+1,degrees[i]);

	}
	*/


	//Lab:Calculate Polynomial
	//Value for a Set of Inputs
    /*
	float x[]={5,16,22,3.5,15};
	float y;
	for(int i =0; i<5 ;i++)
	{
		y= 5*x[i]*x[i] + 3*x[i] +2;
		printf("\n the value of y(%f)=%f ",x[i],y);
	}
    */



	//code shows how to use 2D arrays
/*
	int y,x=9;
	int degrees[4][6]= {
			{12,13,54,62,83,45},
			{34,45,51,62,85,97},
			{12,73,52,88,89,35},
			{12,13,66,69,81,75}};

	degrees[2][3]=x;

	printf("%d\n",degrees[2][3]);

	y=degrees[2][3];
	fflush(stdin);fflush(stdout);
	printf("%d\n",y);

	fflush(stdin);fflush(stdout);
	scanf("%d",&degrees[1][4]);
	printf("%d",degrees[1][4]);
*/


//Calculate and Print the Transpose of 3x3 Matrix
/*
	float a[3][3];
	int r,c;
	float t[3][3];

	//entering the values of the 2d array
	for(r = 0; r < 3; r++ )
	{
		for(c = 0; c < 3; c++ )
		{
			printf("\nEnter the item(%d,%d):  ",r,c);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[r][c]);
			printf("\n");
		}
	}

	//printing the values of 2d array
	printf("the matrix is\n");
	for(r = 0; r < 3; r++ )
	{
		for(c = 0; c < 3; c++ )
		{
			printf("%f\t",a[r][c]);

		}
		printf("\n");
	}


	//the transpose
	for(r = 0; r < 3; r++ )
	{
		for(c = 0; c < 3; c++ )
		{
			t[r][c]=a[c][r];

		}

	}
	//printing the transpose matrix


	printf("the transpose is\n");
	for(r = 0; r < 3; r++ )
	{
		for(c = 0; c < 3; c++ )
		{

			printf("%f\t",t[r][c]);

		}
		printf("\n");
	}
*/


//code to illustrate the string in c
/*
	char x[6];
	x[0]= 'h';
	x[1]= 'e';
	x[2]= '/0';// '/0' is equivalent to ascii of 0
	x[3]= 'l';
	x[4]= 'l';
	x[5]= NULL;
	printf("%s \n",x); //x equivalent to &x[0]
	printf("%s \n",&x[0]);
	printf("%s \n",&x[1]);
	printf("%s \n",&x[3]);
*/
/*
// code behaves as prints("%s",);
	char x[6];
	int i;
	x[0]= 'h';
	x[1]= 'e';
	x[2]= '0';// '/0' is equivalent to ascii of 0
	x[3]= 'l';
	x[4]= 'l';
	x[5]= 0;
	printf("%s \n",x);

	for (i=0; (i<sizeof(x) && x[i] !=0); i++)
	{
		printf("%c",x[i]);
	}
*/

//code array of strings
/*
	char names[5][16]={"ashraf mohamed","akmal mohamed","khadija mohamed",
			"malak mahmoud","ahmed sisi"};
	int i;

	for(i=0 ;i<5;i++)
	{
		printf("%s \n",&names[i]); //&names[i] eqivalent to names[i]
	}
*/

//Copy String to String
	/*
	char a [20]="ashraf mohamed";
    char b [20];
    int i=0;
    while(a[i] !=0)
    {
    	b[i]=a[i];
    	i++;
    }
	 b[i]=0;
	 printf("%s",b);
*/

//Copy String to String using strcpy
/*
	char a [20]="ashraf mohamed";
	char b [20];
	strcpy(b,a);
	printf("%s",b);
*/


//Changing String Case
// try to make the the functions your self
/*
	char a[]="ahmed";
	char b[]="AKMAL";
	strlwr(b);
	strupr(a);
	printf("%s\t%s",a,b);
*/


//Finding the String Length
	/*
	char a[]="ashraf mohamed ";
	printf("%d",strlen(a));
	*/


// string compare
/*
	char names[5][8] = {"ashraf","akmal","khadija","malak","ahmed"};
	char name[14];
	int i;
	printf("enter your name please :");
	fflush(stdin);
	fflush(stdout);
	scanf("%s",name);
    for(i=0;i<5;i++)
    {
    	if(stricmp(name,names[i])==0)
    	{
    		printf("your name is listed \n");
    		break;
    	}
    }
	if(i==5)
		printf("sorry,your name is not listed \n");
	*/


	return 0;
}
