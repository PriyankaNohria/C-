#include<iostream>
using namespace std;
class data
{
int a;
public:
data(int a)
{
this->a=a;
}
operator int()
{
return (*this).a;
}
};
int main()
{
data t(9);
int x=t;
cout<<x;
return 0;
}
