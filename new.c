#include<stdio.h>
int fact(int n)
{
	if(n==0||n==1)
	{
	return 1;
	}
	else
	{
	return(n*fact(n-1));
	}
}
int main()
{
	int i,j;
	printf("enter a number\n");
	scanf("%d",&i);
	if(i<0)
		{
		printf("enter a valid number\n");
		}
	else
		{
		j=fact(i);
		printf("the factorial  of %d is %d \n",i,j);
		}
		
	printf("%d",i);
	return 0;
}

