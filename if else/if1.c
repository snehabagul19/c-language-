//Write a Program to find the minimum number from the given 2 numbers using if else.
#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2;
	
	printf("Enter num 1 : ");
	scanf("%d",&num1);
	printf("Enter num 2 : ");
	scanf("%d",&num2);
	
	if (num1<num2)
	{ 
	    printf("The num1 is minimum");	
 }
 else  
 {
 	printf("num 2 is minimum");
 }
}
