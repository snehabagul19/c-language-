#include<stdio.h>
#include<conio.h>

void main()
{
	int sum=0,n;
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
		sum=sum+a[i];

	}
	printf("%d",sum); 
}
