#include<iostream>
using namespace std;
int main()
{
int num,temp,i=0,rem,reverse=0;
cin>>num;
while(i!=num)
{
temp=i;
while(temp!=0)
{
rem=temp%10;
reverse=reverse*10+rem;
temp=temp/10;
}
if(i==reverse)
{
cout<<i<<endl;
}
i++;
reverse=0;
}
return 0;
}
