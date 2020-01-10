#include<iostream>
using namespace std;
class base
{public:
int a[10];
};
class b1:public base
{};
class b2:public base
{};
class derived:public b1,public b2
{
};
int main()
{
derived d;
cout<<sizeof(d);
return 0;
}
