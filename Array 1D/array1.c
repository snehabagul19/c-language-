#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	int a[n];
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter the of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] : %d",i,a[i]);
		printf("\n");
	}
	
}
