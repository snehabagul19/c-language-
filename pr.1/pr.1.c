// Q1. Develop a program that converts temperature from degrees Celsius to Fahrenheit using the
//formula: °F = (9/5 × °C) + 32
#include<stdio.h>
#include<conio.h>



void main()
{
	float f,c;
	
	printf("value of  Celsius : ");
	scanf("%f",&c);
	
	f = (9/5*c)+32;
	
	printf("Fahrenheit : %.2f",f);
	
}
