/*
 ============================================================================
 Name        : C_Pointers_Codes.c
 Author      : ashraf mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pointers_with_structures.h"
#include "compare_voidpointer.h"
#include "pointer_to_function.h"



int main(void) {

	// pointer casting

	/*
	long long int rand_address=0x00000000ffffaaaa;
	printf("rand address=%llx\n",rand_address);

	char *paddress1=0x00000000ffffaaaa;
    printf("paddress1=%llx\n",paddress1);

	char *paddress2=(char*)0x00000000ffffaaaa;
    printf("paddress2=%llx",paddress2);
	 */





	//lab average of weights
	/*
	int sum =0;
	int x[5];
	int *px=x;


	int i;
	for(i=0;i<(sizeof(x)/sizeof(int));i++)
	{
		printf("\n");
		fflush(stdout);
		fflush(stdin);
		scanf("%d",px+i);

	}
	printf("printing the values\n");
	for(i=0;i<(sizeof(x)/sizeof(int));i++)
	{

		printf("%d \n",*(px++)); //-> *(px++)they are equivalent (*px++)
	}

	px=x;
	for(i=0;i<(sizeof(x)/sizeof(int));i++,++px)
	{

		sum+=*px;
	}

	printf("\n the sum is %d",sum);
	 */


	//pointers and arrays

	/*
	int x[10]={1,2,3,4,5,6,7,8,9,10};
	int *px=x;
	int i;

	for(i=0;i<10;i++)
	{
		printf("%d\t",px[i]);
	}

	printf("\n");

	for(i=0;i<10;i++)
	{
		printf("%d\t",*(px+i));
	}

	printf("\n");

	for(i=0;i<10;i++)
	{
		printf("%d\t",x[i]);
	}

	printf("\n");

	for(i=0;i<10;i++)
	{
		printf("\n");
		fflush(stdout);fflush(stdin);
		scanf("%d",px+i);

	}

	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",px[i]);
	}

	printf("\n");

	for(i=0;i<10;i++)
	{
		printf("%d\t",*(px+i));
	}

	printf("\n");

	for(i=0;i<10;i++)
	{
		printf("%d\t",x[i]);
	}


	 */

	//pointers with structures code1

	/*
	struct Sdataset data;
	data.d1=0x11;
	data.d2=0xffffccbb;
	data.d3=0x55;
	data.d4=0x45f9;
	print_memory_range(&data,sizeof(data));

	char *p=&data;
	struct Sdataset* p2=&data;

	printf("p+8=%x\n",(unsigned char)*(p+8));
	printf("p+8=%x\n",(unsigned char) p2->d3);
	 */

	//pointers with structures code2

	/*
	struct Sperson manager={"ashraf mohammed",100,25,50e3,70.0};
    int i;
    struct Sperson employees[]={
    		{"samy eid",10,24,30e3,79.9},
			{" basem wagdy",20,23,25e3,67.5},
			{"omar fouad",30,22,20e3,89.8}
    };

    struct Sperson *p=&manager;

    printf("manager :%s\nid_no:%d\nage:%d\nsalary:%d\nweight:%f\n\n",p->m_name,
    		p->m_id,p->m_age,p->m_salary,p->m_weight);
    p->m_salary=60e3;
    printf("manager :%s\nid_no:%d\nage:%d\nsalary:%d\nweight:%f\n\n",manager.m_name,
    		manager.m_id,manager.m_age,manager.m_salary,manager.m_weight);

    p=employees;

    for(i=0;i<(sizeof(employees)/sizeof(struct Sperson));i++)
    {

    	printf("employee %d\nemployee name :%s\nid_no:%d\nage:%d\nsalary:%d\nweight:%f\n\n",i+1,
    			p->m_name,
    			p->m_id,p->m_age,p->m_salary,p->m_weight);

    p++;

    }
	 */



	//pointers with unknown type

//code1
	/*

	int x=3;
	double y=6.790;
	void *p;
    p=&x;
    *(int *)p=7;
    printf("%d\n",x);
    p=&y;
    *(double*)p=94.8573;
    printf("%lf",y);

    */

	//code2
	/*
	int x1=4,x2=5,x3=4;
	double y1=5.5,y2=6.5,y3=5.5;

	printf("compare x1 and x2 gives %d\n",compare(&x1,&x2,1));//-1
	printf("compare x1 and x3 gives %d\n",compare(&x1,&x3,1));//0
	printf("compare x2 and x3 gives %d\n",compare(&x2,&x3,1));//1
	printf("compare y1 and y2 gives %d\n",compare(&y1,&y2,2));//-1
	printf("compare y1 and y3 gives %d\n",compare(&y1,&y3,2));//0
	printf("compare y2 and y3 gives %d\n",compare(&y2,&y3,2));//1
	 */


	//code3
	//In C, it is permissible to assign a void * pointer to any other type of pointer. It
	//is also permissible to assign any other type of pointer to a void * pointer
	/*
	int x=7;
	int *p=&x;
	void* px;
	px=p;
	*(int *)px=99;
	printf("%d\n",x);

	int y=70;
	int*p1;
	void*py=&y;
    p1=py;
    *p1=678;
    printf("%d",y);
	*/



	//pointer to function code 1

	/*
	print_hello();
	GP_FUN=print_hello;
	(GP_FUN)();

	 */

	//pointer to function code 2
	/*
	char s1[10];
	char s2[10];
	int(*p)(char *,char *);
	p=strcmp;
	printf("enter two strings\n");

	fflush(stdin);
	fflush(stdout);
	scanf("%s",s1);

	fflush(stdin);
	fflush(stdout);
	scanf("%s",s2);

    check(s1,s2,p);
    */


	//Pointers on Embedded C
/*
	char x[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	unsigned int *y=(unsigned int*)x;
	unsigned short *z= (unsigned short*)x;
	unsigned long long *d=(unsigned long long*)x;

	printf("y=0x%x \n",*y);
	y++;
	printf("y=0x%x \n",*y);
	y++;
	printf("y=0x%x \n",*y);
	y++;
	printf("y=0x%x \n",*y);


	printf("z=0x%x \n",*z);
	z++;
	printf("z=0x%x \n",*z);
	z++;
	printf("z=0x%x \n",*z);
	z++;
	printf("z=0x%x \n",*z);



	printf("d=0x%llx \n",*d);
	d++;
	printf("d=0x%llx \n",*d);

*/


	//Interview Tricks: Pointer vs Array in C

	/*
	char *p="now is the time";
	printf("%s\n",p);
	p++;
	printf("%s\n",p);
	int x=sizeof(p);
	printf("%d \n",x);
	*p='s';
	printf("%s\n",p);
    */

	//null pointer
	/*
	int *ptr=NULL;
	printf("%d",ptr);
	*/



	return 0;
}
