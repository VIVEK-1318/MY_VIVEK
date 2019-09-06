#include<stdio.h>
int add(int a[2],int b[2])
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		 printf("%2d",a[i],b[j]);
		}
		 printf("\n");
	}
}
void main()
{
 int a[2],b[2],i,j;
 printf("\nenter the numbers for A\n");
 for(i=0;i<2;i++)
	{
	 for(j=0;j<2;j++)
	 {
		scanf("%d",a[i]);
	 }
	}
printf("\neter the values for B\n")
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	 scanf("%d",b[2]);
	}
}
}
