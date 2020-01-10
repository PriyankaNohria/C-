#include<iostream>
using namespace std;
int arm(int);
int main()
{
int num,res;
cin>>num;
res=arm(num);
if(res==1)
{
cout<<"ARMSTRONG NUMBER";
}
else{
cout<<"NOT ARMSTRONG NUMBER";
}
return 0;
}
int arm(int num)
{
int rem,temp,sum=0;
temp=num;
while(num!=0)
{
rem=num%10;
sum=sum+rem*rem*rem;
num=num/10;
}
if(temp==sum)
{
return 1;
}
else{
return 0;
}
}
