#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int a[50],n,f;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i=0;i<n;i++)
{
 f=1;
for(int j=a[i];j>0;j--)
{
f=f*j;
}
cout<<"Factorial of "<<a[i]<<" is "<<f<<endl;
}
return 0;
}
