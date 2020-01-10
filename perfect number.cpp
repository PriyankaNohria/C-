#include<iostream>
using namespace std;
int main()
{
int num,sum=0;
int temp;
cin>>num;
temp=num;
for(int i=1;i<num;i++)
{
if(num%i==0)
{
sum=sum+i;
}
}
if(temp==sum)
{
cout<<"PERFECT NUMBER";
}
else{
cout<<"NOT PERFECT NUMBER";
}
return 0;
}
