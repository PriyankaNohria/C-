#include<iostream>
using namespace std;
class A
{
int a,b;
public:
void enter()
{
cin>>a>>b;
}
int get_a()
{
return a;
}
int get_b()
{
return b;
}
};
class B:public A
{
int c;
public:
void add()
{
c=get_a()+get_b();
}
void dis()
{
cout<<c;
}
};
int main()
{
B obj;
obj.enter();
obj.add();
obj.dis();
return 0;
}
