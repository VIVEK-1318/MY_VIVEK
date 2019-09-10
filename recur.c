#include<stdio.h>
int a(n)
{
 if(n>0)
  {
   a(n-1);
   printf("%d\n",n);
   a(n-1);
  }
}
int main()
{
 int j;
 printf("enter a number for j\n");
 scanf("%d",&j);
 printf(a(j));
}
