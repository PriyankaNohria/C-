#include<iostream>
using namespace std;
//class B;
class A
{
int a;
public:
void enter()
{
cout<<"The Value of a : ";
cin>>a;
}
friend class B;
};
class B
{
public:
void display(A t)
{
cout<<"THE VALUE OF A : "<<t.a;
}
};
int main()
{
A a;
B b;
a.enter();
b.display(a);
return 0;
}
