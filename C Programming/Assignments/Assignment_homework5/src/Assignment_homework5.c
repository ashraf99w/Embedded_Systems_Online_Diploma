/*
 ============================================================================
 Name        : Assignment_homework5.c
 Author      : ashraf mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "conio.h"
#define __time__ "6:13"
//code1 and code4
struct Sstudent{
	char name[100];
	int mark;
	int roll_num;
};

//code2
struct Sdistance{

	float feet;
	float inch;
};

//code3
struct Sreal_number{
	  float real;
	  float imaginary;
};


//code3
struct Sreal_number add_complex(struct Sreal_number val1,struct Sreal_number val2)
{
	struct Sreal_number result;

	result.real=val1.real+val2.real;
	result.imaginary=val1.imaginary+val2.imaginary;

	return result;
	}
//code5
#define pi 3.14
#define area(r)  (pi*r*r)

int main(void) {


	//predefined macros in C language
	/*
      printf("%s",__time__);

	 */


	//code1_sol
/*
	struct Sstudent x;
	char y=0;
	do{

		y=0;
		printf("\nenter informations of a student:\n");
		printf("enter the name: ");
		fflush(stdin);fflush(stdout);
		scanf("%s",x.name);

		printf("\nenter roll_number: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x.roll_num);

		printf("\nenter mark: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x.mark);

		printf("displaying information :\n");
		printf("name: %s\nroll number: %d\nmark: %d",x.name,x.roll_num,x.mark);
		printf("\nto enter another student press 'a'");
		fflush(stdin);fflush(stdout);
		scanf("%c",&y);
	}while(y=='a');
*/


	//code2_sol
	/*
	struct Sdistance x,y;
	char count=0;
	float sum_inch=0.0;
	float sum_feet=0.0;

	printf("Enter Information For the First Distance\n");
	printf("Enter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x.feet);

	printf("\nEnter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x.inch);

	printf("\nEnter Information For the 2nd Distance\n");
	printf("Enter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&y.feet);

	printf("\nEnter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&y.inch);

	sum_inch=x.inch+y.inch;
	sum_feet=x.feet+y.feet;
	while(sum_inch>=12)
	{
		sum_inch-=12;
		count++;
	}
	sum_feet=sum_feet+count+(sum_inch*1/12);

	printf("\nsum of distances= (%f)",(sum_feet));
	*/


	//code3_sol
/*
	struct Sreal_number x,y,result;

	printf("for the first complex number\n enter real and imaginary respectively:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x.real,&x.imaginary);

	printf("\nfor the second complex number\n enter real and imaginary respectively:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&y.real,&y.imaginary);
	result=add_complex(x,y);
	printf("\nsum=%f+%fi",result.real,result.imaginary);
*/
	//code4_sol
/*
	struct Sstudent x[10];
	int i;
	char count=0,y=0;
	do{

		y=0;
		printf("\nenter informations of a student:\n");
		printf("enter the name: ");
		fflush(stdin);fflush(stdout);
		scanf("%s",x[count].name);

		printf("\nenter roll_number: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x[count].roll_num);

		printf("\nenter mark: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x[count].mark);

		count++;
		if(count==10)
			break;

		printf("\nto enter another student press 'a'");
		fflush(stdin);fflush(stdout);
		scanf("%c",&y);
	}while(y=='a');

	for(i=0;i<count;i++)
	{
		printf("\n name:%s\nrollnumber: %d\nmark :%d",x[i].name,
				x[i].roll_num,x[i].mark);
	}
*/

	//code5_sol
	float radius,area;
	printf("enter the radius:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&radius);
	area=area(radius);
	printf("\n%f",area);



	return 0;
}
