#include<iostream>
using namespace std;
class complex1
{
int a;
public:
complex1()
{}
complex1(int x)
{
a=x;
}
void show()
{
cout<<a;
}
};
int main()
{
complex1 c1;
int x=10;
c1=x;
c1.show();
return 0;
}

