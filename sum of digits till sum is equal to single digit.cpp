#include<iostream>
using namespace std;
int single(int);
int main()
{
int num,sum=0,rem;
cin>>num;
while(num!=0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
while(sum>=10){
 num=sum;
 sum=0;
while(num!=0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}  }
cout<<sum;
return 0;
}
