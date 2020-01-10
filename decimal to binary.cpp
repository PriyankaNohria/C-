#include<iostream>
using namespace std;
int main()
{
int num,a[10],i=0;
cin>>num;
for(i=0;num>0;i++)
{
a[i]=num%2;
num=num/2;
}
for(i=i-1;i>=0;i--)
{
cout<<a[i];
}
return 0;
}
