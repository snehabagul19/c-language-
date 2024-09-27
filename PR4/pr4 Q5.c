//Q.5 Develop a program that prints the given Full Pyramid pattern using a nested for loop.
//5
//4 5 4
//3 4 5 4 3
//3 3 4 5 4 3 2
//1 2 3 4 5 4 3 2 1

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,l;
	
	for(i=5; i>=1; i--)
	{
		for(k=1; k<1; k++)
		{
			printf("  ");
		}
		for(j=1; j<=5; j++)
		{
			printf("%d",j);
		}
		for(l=4; l>=i; l--)
		{
			printf("%d",l);
		}
		printf("\n");
	} 
	
}
