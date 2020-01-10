#include<iostream>
using namespace std;
int main()
{
int num,rem,flag=0,f=0,temp,i=0,reverse=0;
cin>>num;
while(i!=num)
{
for(int j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
temp=i;
while(temp!=0)
{
rem=temp%10;
reverse=reverse*10+rem;
temp=temp/10;
}
if(i==reverse)
{
f=1;
}
if(f==1&&flag==0)
{
cout<<i<<endl;
}
i++;
f=0;
flag=0;
reverse=0;
}
return 0;
}
