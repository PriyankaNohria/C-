#include<iostream>
using namespace std;
class A
{
protected:
int a;
public:
void get_a()
{
cin>>a;
}
};
class B
{
protected:
int b;
public:
void get_b()
{
cin>>b;
}
};
class C:public A,public B
{
int c;
public:
void display()
{
c=a+b;
cout<<c;
}
};
int main()
{
C t;
t.get_a();
t.get_b();
t.display();
return 0;
}
