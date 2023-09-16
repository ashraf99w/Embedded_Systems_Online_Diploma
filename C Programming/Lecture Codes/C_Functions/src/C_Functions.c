/*
 ============================================================================
 Name        : C_Functions.c
 Author      : ashraf mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "code1.h"
#include "code2.h"
#include "code3.h"
#include "code4.h"
#include "exam_cod1.h"
#include "mid_exam_code2.h"
#include "mid_exam_code3.h"
#include "mid_exam_code4.h"
#include "mid_exam_code5.h"
#include "mid_exam_code7.h"
#include "mid_exam_code8.h"
#include "mid_exam_code9.h"
#include "unique_number.h"
int main(void) {

	//code 1 Calculate the Factorial
	/*
	int y = 5,z;
    z=fact(y);
	printf("the factorial of %d is :%d ",y,z);
	*/

	//code 2 Calculate the Minimum Value of any Given Array
	/*
	int first_array[]={2,55,4,3,66,0,3,4};
	int secound_array[]={1,53,4,63,66,5,6,4,55};
	int third_array[]={1,5,4,3,66,4,5,6,3,2};

	printf("the minimum value of the first arr is: %d\n",calcMin(first_array,8));
	printf("the minimum value of the secound is: %d\n",calcMin(secound_array,9));
	printf("the minimum value of the third arr is: %d",calcMin(third_array,10));
	 */




	//code 3 Finding a Name in a Set of Names
	/*
	char name[14];
	char names[5][14] = {"Alaa","Osama", "Mamdouh","Samy", "Hossain"};
	puts("Enter your first name:");
	fflush(stdin);fflush(stdout);
	gets(name);
	if(findName(names, 5, name)==1)
	puts("Welcome");
	else
	puts("Goodby");
	 */


	//code 4 Write a program that produces the following output
	/*
	print_triangle();
*/

	//getting the unique number
	/*
int a[]={4,2,4};
int size=sizeof(a)/sizeof(a[0]);

printf("the unique number is %d",unique_num(a,size));
*/

	//reversing two words
/*
char a[50];
int size;
printf("enter a string of two words :");
fflush(stdin);fflush(stdout);
scanf("%s",a);
size=strlen(a);
revers_words_section_sol(a,size);
*/

	return 0;
}

