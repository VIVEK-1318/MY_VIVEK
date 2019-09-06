#include<stdio.h>
int main()
{
	int i,j,rows;
	int stars,spaces;
	printf("enter rows to print");
	scanf("%d",&rows);

	stars =1;
	spaces= rows-1;
	for(i=1;i<rows*2;i++)
	{
		for(j=1;j<spaces*2;j++)	
		printf(" ");
		for(j=1;j<stars;j++)
		printf("*");
		printf("\n");
		if(i<rows)
		{
			spaces--;
			stars++;
		}
	}
return 0;
}

