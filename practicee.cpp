#include<iostream>
#include<string.h>
using namespace std;
class data
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
else{
return (fibbo(n-1)+fibbo(n-2));
}
}
};
int main()
{
data t;
t.enter();
for(int i=0;i<t.n;i++)
{
cout<<t.fibbo(i)<<" ";
}
return 0;
}
