#include<iostream>
using namespace std;
int main()
{
int a[50],num,i;
cin>>num;
for(i=0;num>0;i++)
{
a[i]=num%16;
num=num/16;
}
for(i=i-1;i>=0;i--)
{
cout<<a[i];
}
return 0;
}
