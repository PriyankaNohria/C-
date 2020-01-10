#include<iostream>
using namespace std;
class B;
class C;
class A
{
char name[50];
public:
void enter1()
{
cin>>name;
}
friend void display(A,B,C);
};
class B
{
int roll;
public:
void enter2()
{
cin>>roll;
}
friend void display(A,B,C);
};
class C
{
int mark;
public:
void enter3()
{
cin>>mark;
}
friend void display(A,B,C);
};
void display(A a,B b,C c)
{
cout<<"NAME : "<<a.name<<endl;
cout<<"ROLL NO. : "<<b.roll<<endl;
cout<<"MARKS : "<<c.mark<<endl;
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
