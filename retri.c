S#include<stdio.h>
void main()
{
 int n,i,j,k;
 printf("enter the number of rows and columns\n");
 scanf("%d\n",&n);
 for(i=1;i<=n;i++)
 {
  for(j=i;j<=n;j++)
  {
   printf(" ");
  }
  for(k=1;k<i;k++)
   {
    printf("%d",k);
   }
   printf("\n");
 }
}


