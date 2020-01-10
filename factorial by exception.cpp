#include<iostream>
using namespace std;
int main()
{
int a,f=1;
cin>>a;
try
{
if(a>0)
{
for(int i=1;i<=a;i++)
{
f=f*i;
}
cout<<"Factorial = "<<f;
}
else
{
throw a;
}
}
catch(int a)
{
cout<<"Factorial is not possible";
}
cout<<endl<<"Next statement";
return 0;
}
