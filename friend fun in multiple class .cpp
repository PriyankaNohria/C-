#include<iostream>
using namespace std;
class B;
class A
{
int a;
public:
void enter1()
{
cout<<"the value of a : ";
cin>>a;
}
friend int sum(A,B);
};
class B
{
int b;
public:
void enter2()
{
cout<<"the value of b : ";
cin>>b;
}
friend int sum(A,B);
};
int sum(A t1,B t2)
{
int c;
c=t1.a+t2.b;
return c;
}
int main()
{
int res;
A t;
B s;
t.enter1();
s.enter2();
res=sum(t,s);
cout<<"Sum : "<<res;
return 0;
}
