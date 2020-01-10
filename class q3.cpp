#include<iostream>
using namespace std;
class test
{
int x;
public:
test(int x=0)
{
this->x=x;
}
void change(test *t)
{
this=t;
}
void print()
{
 cout<<x;
}
};
int main()
{
test t(5);
test *ptr=newtest(10);
t.change(ptr);
 return 0;
}
