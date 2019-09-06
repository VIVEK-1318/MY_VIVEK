#include<stdio.h>
int main()
{
 int a[10][10],i,k,n;
printf("enter the order of matrix\n");
scanf("%d",&n);
printf("enter the matrix elements");
for(i=0;i<n;i++)
for(k=0;k<n;k++)
scanf("%d",&a[i][k]);
for(i=0;i<n;i++)
{
  for(k=0;k<n;k++)
   {
    if((i==k)||(i+k)==(n-1))
    printf("%3d",a[i][k]);
else
printf(" ");
   }
printf("\n");
  }
return 0;
}
