#include<iostream>
using namespace std;
class A
{
    public:
int a[50],n;
public:
A()
{
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
}
int vla1()
{
return n;
}
};
class B:public A
{
int n1,b[50]={0};
public:
B(){
{

    int temp;
for(int i=0;i<n-1;i++)
{
for(int j=0;j<(n-1)-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}
for(int i=0;i<n;i++)
{
b[a[i]]++;
}
for(int i=0;i<n;i++)
{
if(b[a[i]]>0)
{
cout<<a[i];
b[i]=0;
}
}
}
void dis()
{
for(int i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
}
};
int main()
{
B obj;
obj.dis();
return 0;
}
