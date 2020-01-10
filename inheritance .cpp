#include<iostream>
using namespace std;
class base
{
public:
void show()
{
cout<<"abcd";
}
};
class derived: public base
{
public:
void show()
{
cout<<"aaaaa";
}
};
int main()
{
base b;
derived d;
b.show();
d.show();
return 0;
}
