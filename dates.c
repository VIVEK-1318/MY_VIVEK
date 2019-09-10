#include<stdio.h>
 void main()
 {
   char *name[]={"rave","ravindra","ravindra lala"};
   printf("%s",(name+1));
   printf(*(name+2)+2);
 }
