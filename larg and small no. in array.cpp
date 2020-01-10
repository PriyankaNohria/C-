#include<iostream>
using namespace std;
class array
{public:
int a[50],n,larg,small;
public:
void enter()
{
cin>>n;
cout<<"Enter the elements of an array : ";
for(int i=0;i<n;i++)
{
cin>>a[i];
}}
void largest()
{
larg=a[0];
for(int i=0;i<n;i++)
{
if(a[i]>larg)
{
larg=a[i];
}
}
cout<<"The Largest No. is : "<<larg<<endl;
}
void smallest()
{
small=a[0];
for(int i=0;i<n;i++)
{
if(a[i]<small)
{
small=a[i];
}
}
cout<<"The smallest No. is : "<<small<<endl;
}
};
int main()
{
array a;
a.enter();
a.largest();
a.smallest();
return 0;
}
