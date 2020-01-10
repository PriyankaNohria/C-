#include<iostream>
using namespace std;
class A
{
int a;
public:
void enter1()
{
cin>>a;
}
};
class B
{
int b;
public:
void enter2()
{
cin>>b;
}
};
class C
{
int c;
public:
void enter3()
{
cin>>c;
}
};
int main()
{
A a;
B b;
C c;
a.enter1();
b.enter2();
c.enter3();
return 0;
}
