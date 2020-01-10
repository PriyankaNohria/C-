#include<iostream>
#include<string.h>
using namespace std;
class fibbonaci
{
public:
int n;
public:
void enter()
{
cin>>n;
}
int fibbo(int i)
{
if(i==0)
{
return 0;
}
else if(i==1)
{
return 1;
}
else
{
return (fibbo(i-1)+fibbo(i-2));
}
}
};
int main()
{
int a;
fibbonaci t;
t.enter();
for(int i=0;i<t.n;i++)
{
a=t.fibbo(i);
cout<<a<<" ";
}
return 0;
}
