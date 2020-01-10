#include<iostream>
using namespace std;
int vol(int a)
{
int res;
res=a*a*a;
return res;
}
float vol(int a)
{
float res;
res=4/3*3.14*a*a*a;
return res;
}
int main()
{
int a,res;
float b;
cin>>a;
res=vol(a);
cout<<res<<"\n";
b=vol(a);
cout<<b;
return 0;
}
