#include<iostream>
using namespace std;
int main()
{
int num,flag=0,rem,temp,reverse=0,f=0;
cin>>num;


for(int i=2;i<=num/2;i++)
{
if(num%i==0)
{
flag=1;
break;
}
}
temp=num;
while(temp!=0)
{
rem=temp%10;
reverse=reverse*10+rem;
temp=temp/10;
}
if(num==reverse)
{
f=1;
}
if(f==1&&flag==0)
{
cout<<"Given number is palindrome prime";
}
else{
cout<<"Given number is not palindrome prime";
}
return 0;
}
