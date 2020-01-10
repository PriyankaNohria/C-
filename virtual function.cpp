#include<iostream>
using namespace std;
class base
{
public:
void disp()
{
cout<<"Base disp"<<endl;
}
virtual void show()
{
cout<<"Base show"<<endl;
}
};
class derived:public base
{
public:
void disp()
{
cout<<"Derived disp"<<endl;
}
void show()
{
cout<<"Derived show"<<endl;
}
};
int main()
{
base t,*p;
derived t1;
p=&t;
p->disp();
p->show();
p=&t1;
p->disp();
p->show();
}
