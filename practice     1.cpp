#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
class fibbonacci
{
public:
int n;
public:
void enter()
{
cin>>n;
}
int fibbo(int n)
{
if(n==0)
{
return 0;
}
else if(n==1)
{
return 1;
}
else
{
return (fibbo(n-1)+fibbo(n-2));
}
}
};
int main()
{
int a;
fibbonacci t;
t.enter();
for(int i=0;i<t.n;i++)
{
a=t.fibbo(i);
cout<<a<<" ";
}
return 0;
}
