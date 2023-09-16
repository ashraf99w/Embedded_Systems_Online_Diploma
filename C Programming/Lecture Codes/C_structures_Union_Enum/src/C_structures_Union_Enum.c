/*
 ============================================================================
 Name        : C_structures_Union_Enum.c
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
struct Semployee{
	char m_Name[100];
	int m_birthDateDay;
	int m_birthDateMonth;
	int m_birthDateYear;
	unsigned int m_salary;
};



int main(void) {
	//1st code
	/*
	struct Semployee X,y;
	strcpy(X.m_Name,"ashraf mohamed");
	X.m_birthDateDay=7;
	X.m_birthDateMonth=8;
	X.m_birthDateYear=1999;
	X.m_salary=50000;
	printf("%s\t(%d/%d/%d) %d\n",X.m_Name,
			X.m_birthDateDay,X.m_birthDateMonth,
			X.m_birthDateYear,X.m_salary);
	 y=X;
	 printf("%s\t(%d/%d/%d) %d\n",y.m_Name,
	 			y.m_birthDateDay,y.m_birthDateMonth,
	 			y.m_birthDateYear,y.m_salary);

	 */


	//2nd code
	/*
	struct Semployee employees[100],tempEmployee;
	int i,j,count=0;
	char first_name[100],second_name[100];
	do
	{

		printf("\nenter the first name: ");
		fflush(stdin);fflush(stdout);
		scanf("%s",first_name);

		printf("\nenter the second name: ");
		fflush(stdin);fflush(stdout);
		scanf("%s",second_name);

		strcpy(employees[count].m_Name,first_name);
		strcat(employees[count].m_Name," ");
		strcat(employees[count].m_Name,second_name);


		printf("\nenter your birth date as(7/8/1999): ");
		fflush(stdin);fflush(stdout);
		scanf("(%d/%d/%d)",&employees[count].m_birthDateDay,
				&employees[count].m_birthDateMonth,
				&employees[count].m_birthDateYear);
		printf("\nenter the salary: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&employees[count].m_salary);

		count++;
		if(count==100)
			break;
		printf("\nif you want to enter another employee info press y:");
		fflush(stdin);fflush(stdout);

	}while(getch()=='y');


	for(i=0;i<count-1;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(employees[i].m_birthDateYear > employees[j].m_birthDateYear
			||(employees[i].m_birthDateYear == employees[j].m_birthDateYear
			&&employees[i].m_birthDateMonth > employees[j].m_birthDateMonth)
			||(employees[i].m_birthDateYear == employees[j].m_birthDateYear
			&&employees[i].m_birthDateMonth == employees[j].m_birthDateMonth
			&&employees[i].m_birthDateDay > employees[j].m_birthDateDay))
			{
				tempEmployee=employees[i];
				employees[i]=employees[j];
				employees[j]=tempEmployee;
			}

		}


		for(i=0;i<count;i++)
		{
		printf("%s\t(%d/%d/%d) %d\n",employees[i].m_Name,
				employees[i].m_birthDateDay,employees[i].m_birthDateMonth,
				employees[i].m_birthDateYear,employees[i].m_salary);

		}
	}
	*/
	return 0;
}
