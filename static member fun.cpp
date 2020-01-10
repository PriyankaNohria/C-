#include<iostream>
using namespace std;
class test
{
public:
static int a;
public:
 void fun()
{
cout<<a++<<endl;
}
};

int test::a=1;
int main()
{
void test:: fun();
return 0;
}
