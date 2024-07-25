// Q3 Write a program to find the third angle of a right triangle when two other angles are given.

#include<stdio.h>
#include<conio.h>

void main()

{
	int t1,t2,t3,t4;
	
	printf("Angle 1 =");
	scanf("%d, &t1");
	
	printf("Angle 2 =");
	scanf("%d, &t2");
	
	t3=t1+t2;
	t4=180-t3;
	printf("Angle 3");
	scanf("%d, &t3");
}
