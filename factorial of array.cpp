#include<iostream>
using namespace std;
class data
{
public:
int a[50],a2[50],n;
public:
void enter()
{
cin>>n;
cout<<"Enter the elements of an array : ";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
}
void factorial()
{
for(int i=0;i<n;i++)
{
int fact=1;
for(int j=a[i];j>0;j--)
{
fact=fact*j;
}
a2[i]=fact;
cout<<"factorial of "<<a[i] <<" = "<<a2[i]<<endl;
}
}
};
int main()
{
data t;
t.enter();
t.factorial();
return 0;
}
