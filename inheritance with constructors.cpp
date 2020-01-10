#include<iostream>
using namespace std;
class A
{
int a;
public:
A(int x)
{
a=x;
cout<<"Constructor A called"<<endl;
}
void dispa()
{
cout<<a<<endl;
}
};
class B
{
int b;
public:
B(int y)
{
b=y;
cout<<"Constructor B called"<<endl;
}
void dispb()
{
cout<<b<<endl;
}};
class C:public B,public A
{
int c;
public:
C(int x,int y,int z):A(x),B(y)
{
c=z;
cout<<"Constructor C called"<<endl;
}
void dispc()
{
cout<<c;
}
};
int main()
{
int x,y,z;
cin>>x>>y>>z;
C obj(x,y,z);
obj.dispa();
obj.dispb();
obj.dispc();
return 0;
}
