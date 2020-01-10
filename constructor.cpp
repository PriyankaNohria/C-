#include<iostream>
using namespace std;
class test
{
int a;
public:
test()
{
a=5;
}
void display()
{
cout<<a*a;
}
};
int main()
{
test t;
t.display();
return 0;
}
