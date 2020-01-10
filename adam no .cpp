#include<iostream>
#include<math.h>
using namespace std;
class data
{
 int num;
 public:
void enter()
{
cout<<"Enter any no. : ";
cin>>num;
}
void logic()
{
int rem,temp,reverse=0,n,n1,rev=0,rem1;
temp=num;
while(num!=0)
{
rem=num%10;
reverse=reverse*10+rem;
num=num/10;
}
num=temp;
n=pow(num,2);
n1=reverse*reverse;
while(n1!=0)
{
rem1=n1%10;
rev=rev*10+rem1;
n1=n1/10;
}
if(rev==n)
{
cout<<"Adam No.";
}
else{
cout<<"Not Adam No.";
}
}
};
int main()
{
data t;
t.enter();
t.logic();
return 0;
}
