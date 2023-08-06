/*
 ============================================================================
 Name        : Assignment_homework3.c
 Author      : ashraf mohamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//example on break statement
	/*
	int i,n;
	float average,num,sum=0;
	printf("Enter the maximum no. of inputs:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("\nenter n%d :",i);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&num);
		if(num < 0)
			break;
		sum=sum+num;
	}

	if(i==(n+1))
		average=sum/n;
	else
		average=sum/(i-1);

	printf("the average of the numbers is %f",average);
*/


/*
 write a c program to find the product of 4 integers entered by the user
if the user enters 0 skip it.
*/
	/*
	int i,num,product=1;
	printf("enter 4 integers");
	for(i=1;i<=4;i++)
	{
		printf("\nenter integer%d : ",i);
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&num);
		if(num==0)
			continue;
		product *=num;
	}
	printf("the product is %d ",product);
*/

//example on multidimensional arrays in C
	/*
	float a[2][2],b[2][2],c[2][2];
	int i,j;
	printf("Enter the elements of the 1st matrix");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nenter a[%d][%d]: ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}

	printf("\nthe elements of the 1st matrix");
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		printf("\na[%d][%d]: %f ",i+1,j+1,a[i][j]);

    	}
    }

    printf("\nEnter the elements of the 2nd matrix");
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		printf("\nenter b[%d][%d]: ",i+1,j+1);
    		fflush(stdin);
    		fflush(stdout);
    		scanf("%f",&b[i][j]);
    	}
    }
    printf("\nthe elements of the 2nd matrix");
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		printf("\nb[%d][%d]: %f ",i+1,j+1,b[i][j]);

    	}
    }


    for(i=0;i<2;i++)
       {
       	for(j=0;j<2;j++)
       	{
       	   c[i][j]=a[i][j]+b[i][j];
       	}
       }

    printf("\nthe sum of matrix");
    for(i=0;i<2;i++)
          {
          	for(j=0;j<2;j++)
          	{
          	   printf("\nc[%d][%d] = %f",i+1,j+1,c[i][j]);
          	}
          }
*/


	//C program for calculating the average using arrays
	/*
	int i,n;
	float sum=0,num;
	printf("enter the number of data: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
    float a[n];
	for(i=0;i<n;i++)
	{
		printf("\n%d. enter number :",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&num);
		a[i]=num;

	}

	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("the average is %f",sum/n);
	printf("\n %d",sizeof(a));
*/


// c program to find transpose of a matrix
	/*
	int r,c,i,j;

	printf("Enter the no. of rows: ");
	fflush(stdout);fflush(stdin);
	scanf("%i",&r);

	printf("Enter the no. of columns: ");
	fflush(stdout);fflush(stdin);
	scanf("%i",&c);

	int matrix[r][c];

	printf("Enter the elements of matrix :");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
			{
			printf("\nEnter element matrix[%i][%i]: ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%i",&matrix[i][j]);

			}
	}

	printf("\nthe entered matrix :\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%i\t",matrix[i][j]);

		}
		printf("\n");
	}

	printf("the transpose\n");

	for(i=0; i<c; i++)
	{
		for(j=0; j<r; j++)
		{
			printf("%i\t",matrix[j][i]);

		}
		printf("\n");
	}

*/

	// C program to insert an element in an array
/*
	int i ,s,inserted_element,location;
	printf("enter the no. of elements :");
	fflush(stdin);fflush(stdout);
	scanf("%i",&s);
	int array[s];
	printf("\n");
	for(i=0; i<s; i++)
	{
		fflush(stdin);fflush(stdout);
		scanf("%i",&array[i]);
	}

	printf("\nenter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%i",&inserted_element);

	printf("\nenter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%i",&location);
	array[location-1]=inserted_element;

	printf("\n");
	for(i=0; i<s; i++)
		{
			printf("%i ",array[i]);
		}

*/
	// c program to search an element in an array
/*
	    int i ,s,searched_element,location;
		printf("enter the no. of elements :");
		fflush(stdin);fflush(stdout);
		scanf("%i",&s);
		int array[s];
		printf("\n");
		for(i=0; i<s; i++)
		{
			fflush(stdin);fflush(stdout);
			scanf("%i",&array[i]);
		}
		printf("\nenter the element to be searched :");
		fflush(stdin);fflush(stdout);
		scanf("%i",&searched_element);

		for(i=0; i<s; i++)
		{
			if(array[i]==searched_element)
			{
				location=i;
				break;
			}
		}

		if(i==s)
		{
			printf("the element not found");
		}
		else
		{
			printf("the element found in location %i",location+1);
		}
*/

	//C Program to find the frequency of characters in string
	/*
	char text[100],x;
	int i,count=0;
	printf("enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(text);
	printf("\nenter character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	for(i=0;text[i]!='\0';i++)
	{
		if(text[i]==x)
			count++;
	}
	printf("\n character %c repeated %i",x,count);
	*/


 //C program to find the length of string
   /*
	char text[30];
	int i,count=0;
    printf("enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(text);

	for(i=0;text[i]!='\0';i++)
	{
		++count;
	}
	printf("\nthe length is:%i ",count);
*/

// C program to reverse a string without using libirary function
/*
	char text[30],text_rev[30];
	int i,count=0;
	printf("enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(text);
	for(i=0;text[i]!='\0';i++)
		{
			++count;
		}
	for(i=0;i<count;i++)
	{
		text_rev[i]=text[(count-1)-i];
	}

	text_rev[count]='\0';
	printf("th reverse is: %s",text_rev);

*/




	return 0;
}
