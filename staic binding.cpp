#include<iostream>
using namespace std;
class base
{
public:
void show()
{
cout<<"Base"<<endl;
}
};
class derived:public base
{
public:
void show()
{
cout<<"Derived"<<endl;
}
};
int main()
{
base t,*p;
derived t1;
p=&t;
p->show();
p=&t1;
p->show();
return 0;
}
