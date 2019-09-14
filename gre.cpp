/*#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int maximum(int,int,int);
int main()
{
  int a,b,c;
  cout<<"enter three integers:";
  cin>>a>>b>>c;
  cout<<"maximum is:"<<maximum(a,b,c)<<endl;
  return 0;
}

int maximum(int x,int y,int z)
{
 int max =x;
 if(y>x)
  max=y;
 if(z>x)
  max=z;
 return max;
}*/
  

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::setw;
int max(int,int,int);
int main()
{
  int a,b,c;
  cout<<"enter 3 numbers";
  cin>>a>>b>>c;
  cout<<"max is:"<<max(a,b,c)<<endl;
  return 0;
}
int max(int x,int y,int z)
{
 int bignum;
 bignum=x>y?(x>z?x:z):(y>z?y:z);
 return bignum;
}
