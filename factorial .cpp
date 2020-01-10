#include<iostream>
using namespace std;
int fact(int);
int main()
{
int num,res;
cin>>num;
res=fact(num);
cout<<res;
return 0;
}
int fact(int n)
{
int f=1;
for(int i=n;i>0;i--)
{
f=f*i;
}
return f;
}
