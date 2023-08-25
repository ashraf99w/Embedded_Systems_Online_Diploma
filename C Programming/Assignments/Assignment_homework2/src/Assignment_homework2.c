/*
 ============================================================================
 Name        : Assignment_homework2.c
 Author      : ashraf mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	// EX1:Write C Program To Check Whether a Number is Even or Odd
	/*1st solution*/
	/*
	int num;

	printf("Enter an Integer you want to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);

	if((num % 2)==0)
		printf("%d is even\n",num);

	else
		printf("%d is odd\n",num);
	 */

	/*2nd solution*/
	/*
	int num;

	printf("Enter an Integer you want to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);

	((num % 2)==0)?printf("%d is even",num):printf("%d is odd",num);
	 */

	// EX2:Write C Program To Check Vowel or Consonant
	/*
	char alphabet;
	printf("Enter an alphabet: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&alphabet);

	switch(alphabet)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("\n%c is Vowel",alphabet);
		break;
	default:
		printf("\n%c is Consonant",alphabet);
		break;

	}
	 */

	// EX3:Write C Program To Find The Largest Number Among Three Numbers
	/*
	int num1,num2,num3;
	printf("Enter Three Numbers :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d\n%d\n%d",&num1,&num2,&num3);

	if(num1>num2)
	{
		if(num1 > num3)
			printf("%d is the largest :",num1);
		else
			printf("%d is the largest :",num3);
	}
	else
	{
		if(num2 > num3)
			printf("%d is the largest ",num2);
		else
			printf("%d is the largest ",num3);

	}
	 */



	// EX4:Write C Program To check Whether the Number is Positive or Negative
	/*
		int num;
		printf("Enter a Number :");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&num);

	if(num > 0)
		printf("%d is positive ",num);
	else if(num ==0)
		printf("you entered 0");
	else
		printf("%d is negative ",num);

	 */

	// EX5:Write C Program To check Whether a Character is Alphabet or not
	/*
	char alphabet;
	printf("Enter a Character :");
	fflush(stdin);
    fflush(stdout);
	scanf("%c",&alphabet);

	if(((alphabet >= 65)&&(alphabet <= 90))||((alphabet >= 97)&&(alphabet <= 122)))
		printf("\n%c is an alphabet",alphabet);
	else
		printf("\n%c is not an alphabet",alphabet);

	 */


	// EX6:Write C Program To Calculate the sum of Natural Numbers
	/*
	int n,i=1,sum=0;
    printf("please enter an integer :");
    fflush(stdin);
    fflush(stdout);
	scanf("%d",&n);

	for(i=1;i<=n;i++)

    {

//		sum =0+1
//		sum =1+2
//		sum =3+3

		sum += i;

	}
	printf("sum = %d",sum);

	 */


	// EX7:Write C Program To Calculate Factorial of a  Number
/*
	int n,i=1,factorial=1;
	printf("please enter an integer :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);

	if(n ==0)
		printf("Factorial %d is 1",n);

	else if(n<0)
		printf("Error Factorial of Negative Number Dosen't exist");

	else
	{
		for(i=1;i<=n;i++)

		{



			factorial*= i;

		}
		printf("factorial = %d",factorial);

	}

	*/

// EX8:Program to Make a Simple Calculator To Add,Subtract,Multiply,or
	//Dvide Using Switch..Case

/*
	char operation;
	float num1,num2,result=0;
	printf("Enter Two Numbers : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&num1,&num2);

	printf("Enter the operation :");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&operation);

	switch(operation)
	{
	case '+':
	{
		result=num1+num2;

	}
	break;

	case '-':
	{
		result=num1-num2;

	}
	break;

	case '*':
	{
		result=num1*num2;

	}
	break;

	case '/':
	{
		if(num2==0)
			printf("error can't divide by zero");
		else
			result=num1/num2;


	}
	break;

		default:
		{
			printf("wrong operation");

		}
		break;


    }

	printf("\nresult is %f ",result);
*/
	return EXIT_SUCCESS;
}
