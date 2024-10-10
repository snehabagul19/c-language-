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
	printf("Even number  :");
	for(i=0; i<n; i++)
	{
	 if(a[i]%2==0){
	 	printf("%d ",a[i]);
	 }
	 
	}
	
}
