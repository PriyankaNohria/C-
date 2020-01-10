#include<iostream>
using namespace std;
class A
{
public:
A()
{
cout<<"Constructor A Called"<<endl;
}
};
class B
{
public:
B()
{
cout<<"Constructor B Called"<<endl;
}
};
class C:public A,public B
{
    int x;
public:
C(int a):A(),B()
{
    x=a;
cout<<"Constructor C is called"<<x;
}
};
int main()
{
C c(1);
return 0;
}
