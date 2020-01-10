#include<iostream>
using namespace std;
class A
{
public:
virtual void disp()=0;
};
class B:public A
{
int a;
public:
B(int x)
{
a=x;
}
void disp()
{
cout<<"value of a in class B : "<<a<<endl;
}
};
class C:public A
{
int b;
public:
C(int x)
{
b=x;
}
void disp()
{
cout<<"value of b in class c : "<<b;
}
};
int main()
{
A *p[50];
B objb(100);
C objc(200);
p[0]=&objb;
p[1]=&objc;
p[0]->disp();
p[1]->disp();
return 0;
}
