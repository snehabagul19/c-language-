#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	printf("select any num between 1 to 12");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1: printf("January");
		break;
		case 2: printf("Feb");
		break;
		case 3: printf("March");
		break;
		case 4: printf("April");
		break;
		case 5: printf("May");
		break;
		case 6: printf("June");
		break;
		case 7: printf("July");
		break;
		case 8: printf("Aug");
		break;
		case 9: printf("sep");
		break;
		case 10: printf("Oct");
		break;
		case 11: printf("nov");
		break;
		case 12: printf("Dec");
		break;
	}
}

