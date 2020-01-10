#include<iostream>
#include<string.h>
using namespace std;
class data
{
public:
int n;
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
else if(n==2)
{
return 1;
}
else
{
return (fibbo(n-1)+fibbo(n-2)+fibbo(n-3));
}
}
};
int main()
{
    int a;
data t;
t.enter();
for(int i=0;i<t.n;i++)
{
a=t.fibbo(i);
cout<<a<<" ";
}
return 0;
}
