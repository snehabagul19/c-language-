//Q.6 Develop a program that prints the given Custom numeric pattern using a nested for loop.
//1 1
//1 2 2 1
//1 2 3 3 2 1
//1 2 3 4 4 3 2 1
//1 2 3 4 5 5 4 3 2 1

#include<stdio.h>
#include<stdio.h>

void main()
{
	int i,j,k,l,m;
	for(i=1; i<=5; i++)
	{
		
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		for(k=i; k<=4; k++)
		{
			printf("  ",k);
		}
		for(m=i; m<=4; m++)
		{
			printf("  ",m);
		}
		for(l=i; l>=1; l--)
		{
			printf("%d ",l);
		}
		
		
		printf("\n");
	}
}
