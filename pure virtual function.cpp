#include<iostream>
using namespace std;
class base
{
public:
virtual void disp()=0;
};
class derived:public base
{
    public:
void disp()
{
cout<<"Derived class";
}
};
int main()
{
base *p;
derived obj;
p=&obj;
p->disp();
return 0;
}
