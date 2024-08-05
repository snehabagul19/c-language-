//Write a Program to find if a given number is neutral or not using a ladder if else.
#include<stdio.h>
#include<conio.h>

void main()
{
	int num1;
	
	printf("Enter value :  ");
	scanf("%d",&num1);
	
	if(num1>0)
	{
		printf("value is positive ");
	}
	else if(num1==0)
	{
		printf("value is neutral");
		
	}
	
	else
	{
		printf("value is negative ");
	}
	
}
