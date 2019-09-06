#include<stdio.h>
void main()
{
	int n;
	printf("enter a numbr between 1to  5");
	scanf("%d",&n);
	switch(n)
	{
	case 1: 
		printf("dhoni is not the captain");
		break;
	case 2:
		printf("virat is the  captain");
		break;
	case 3:
		printf("rohit is not the captain");
		break;
	case 4:
		printf("hardhik is not the captain");
		break;
	case 5:
		printf("kuldeep is not the captain");
		break;
	default :
		printf("please enter a correct number");
	}
}
