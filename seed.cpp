#include<iostream>
using namespace std;
#include<ctime>
#include<cstdlib>
int rolldice(void);


int main()
{
 enum status{CONTINUE, WON,LOST};
 int sum,mypoint;
 status gamestatus;
 
 srand(time(0));
 sum=rolldice();
 
 switch(sum)
 {
  case 7:
  case 11:
    gamestatus = WON;
    break;
  case 2:
  case 3:
  case 12:
    gamestatus =LOST;
    break;
  default:
    gamestatusv= CONTINUE;
    mypoint = sum;
    cout<<"point is"<<mypoint<<endl;
    break;
 }
 while{gamestatus == CONTINUE}


if(gamestatus ==wow)
  couot<<"player wins"<<endl;
else
  <<"player  loses"<<endl;
return 0;
}
 
int rolldice(void)
{
 int die1,die2,worksum;
 die1 =1+ rand()%6;
 die2 +1+ rand()%6;
 worksum=die1+die2
 cout<<"player rolled"<<die1<<" +"<<die2<<""<<worksum<<endl;
 return worksum;
}
