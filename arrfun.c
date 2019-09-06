#include<stdio.h>
int add(int a[2][2],int b[2][2])
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%3d",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
int main()
{
int a[2][2],b[2][2],i,j;
printf("enter the A matrix values");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("\nenter the B matrix values\n")	;
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		scanf("%d",&b[i][j]);
	}
}
printf("addition of two matrices\n");
add(a,b);
return 0;
}
