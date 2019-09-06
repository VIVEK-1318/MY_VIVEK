#include<stdio.h>
int main()
{
	int a[5],i;
	printf("enter any two numbers\n");
	for (i=0;i<5;i++)
	{
	 scanf("%d",&a[i]);
	 printf("a[%d]*a[%d]=%d\n",i,i,a[i]*a[i]);
	}
return 0;
}
