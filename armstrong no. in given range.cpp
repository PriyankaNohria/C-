#include<iostream>
using namespace std;
int main()
{
int num,rem,sum=0,temp,i=0;
cin>>num;
while(i!=num)
{
temp=i;
while(temp!=0)
{
rem=temp%10;
sum=sum+rem*rem*rem;
temp=temp/10;
}
if(i==sum)
{
cout<<i<<endl;
}
i++;
sum=0;
}
return 0;
}
