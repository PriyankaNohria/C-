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
cout<<"Enter 1 no. : ";
cin>>a;
}
friend void larg(A,B,C);
};
class B
{
int b;
public:
void enter2()
{
cout<<"Enter 2 no. : ";
cin>>b;
}
friend void larg(A,B,C);
};
class C
{
int c;
public:
void enter3()
{
cout<<"Enter 3 no. : ";
cin>>c;
}
friend void larg(A,B,C);
};
void larg(A a,B b,C c)
{
if((a.a>b.b)&&(a.a>c.c))
{
cout<<"Largest No. is : "<<a.a;
}
else if((a.a<b.b)&&(b.b>c.c))
{
cout<<"Largest No. is : "<<b.b;
}
else
{
cout<<"Largest No. is : "<<c.c;
}
}
int main()
{
A a;
B b;
C c;
a.enter1();
b.enter2();
c.enter3();
larg(a,b,c);
return 0;
}
