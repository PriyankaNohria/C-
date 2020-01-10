#include<iostream>
using namespace std;
int main()
{
int num,i=0,rem,digit=0;
cin>>num;
while(num!=0)
{
rem=num%10;
digit++;
num=num/10;
}
cout<<digit;
return 0;
}
