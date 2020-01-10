#include<iostream>
using namespace std;
int reverse(int);
int main()
{
int num,res;
cin>>num;
res=reverse(num);
cout<<res;
return 0;
}
int reverse(int num)
{
int rem,rev=0;
while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
return rev;
}
