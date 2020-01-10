#include<iostream>
using namespace std;
class A
{
public:
A()
{
cout<<"Hello";
}
};
class B:public A
{
public:
void input()
{
cout<<"World";
}
};
int main()
{
B b;
b.input();
return 0;
}
