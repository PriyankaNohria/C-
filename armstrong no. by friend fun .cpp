#include<iostream>
#include<math.h>
using namespace std;
class data
{
int num;
public:
void enter()
{
cout<<"Enter any number : ";
cin>>num;
}
friend void arm(data);
};
void arm(data t)
{
int n=0,temp=0,rem,sum=0;
temp=t.num;
while(t.num!=0)
{

t.num=t.num/10;
n++;
}
cout<<n;
t.num=temp;
while(t.num!=0)
{
rem=t.num%10;
sum=sum+pow(rem,n);
t.num=t.num/10;
}
if(temp==sum)
{
cout<<"Armstrong number";
}
else{
cout<<"Not Armstrong Number";
}
}
int main()
{
data t;
t.enter();
arm(t);
return 0;
}
