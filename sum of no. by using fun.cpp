#include<iostream>
#include<math.h>
using namespace std;
int fact(int);
int main()
{
int n,num,deno;
float res=0.0;
cin>>n;
for(int i=1;i<=n;i++)
{
num=pow(i,i);
deno=fact(i);
res=res+(float)num/deno;
}
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
