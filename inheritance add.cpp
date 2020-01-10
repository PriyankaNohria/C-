#include<iostream>
using namespace std;
class A
{
int a;
public:
void get_a(int);
int get_aa();
};
class B:public A
{
int b,c;
public:
void get_b(int);
void add();
void display();
};
void A:: get_a(int x)
{
a=x;
}
int A:: get_aa()
{
return a;
}
void B:: get_b(int x)
{
b=x;
}
void B:: add()
{
c=get_aa();
c=c+b;
}
void B:: display()
{
cout<<c;
}
int main()
{
B obj;
int x,y;
cin>>x>>y;
obj.get_a(x);
obj.get_b(y);
obj.add();
obj.display();
return 0;
}
