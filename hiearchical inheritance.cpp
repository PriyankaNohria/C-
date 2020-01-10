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
class B:public A
{
public:
void dispb()
{
cout<<"Square of a : "<<a*a<<endl;
}
};
class C:public A
{
public:
void dispc()
{
cout<<"Cube of a : "<<a*a*a;
}
};
int main()
{
B t;
C t1;
t.get_a();
t.dispb();
t1.get_a();
t1.dispc();
return 0;
}
