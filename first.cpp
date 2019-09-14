#include<iostream>
using namespace std;
int main()
{
  int num1,num2;
  cout<<"enter two numbers for finding greater num";
  cin>>num1>>num2;
  if(num1==num2)
   cout<<num1<<"is equal to\n"<<num2;
  if(num1!=num2)
   cout<<num1<<"is not equal to\n"<<num2;
  if(num1<num2)
   cout<<num1<<"smaller than\n "<<num2;
  if(num1>num2)
   cout<<num1<<"gretaer than\n"<<num2;
  return 0;
}
