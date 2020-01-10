#include<iostream>
#include<string.h>
using namespace std;
class data
{
int a[50],n;
public:
void enter()
{
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
}
void fact()
{
int f=1;
for(int i=0;i<n;i++)
{
for(int j=a[i];j>0;j--)
{
f=f*j;
}
cout<<"factorial of "<<a[i]<<" is "<<f<<endl;
f=1;
}
}
};
int main()
{
data t;
t.enter();
t.fact();
return 0;
}
