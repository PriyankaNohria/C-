#include<iostream>
using namespace std;
class B;
class C;
class A
{
int a;
public:
void enter1()
{
cin>>a;
}
friend void display(A,B,C);
};
class B
{
int l,b;
public:
void enter2()
{
cin>>l>>b;
}
friend void display(A,B,C);
};
class C
{
int s;
public:
void enter3()
{
cin>>s;
}
friend void display(A,B,C);
};
void display(A a,B b,C c)
{
cout<<"Area of circle : "<<3.14*a.a*a.a<<endl;
cout<<"Area of rectangle : "<<b.l*b.b<<endl;
cout<<"Area of Square : "<<c.s*c.s;
}
int main()
{
A a;
B b;
C c;
a.enter1();
b.enter2();
c.enter3();
display(a,b,c);
return 0;
}
