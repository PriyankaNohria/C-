#include<iostream>
using namespace std;
class data
{
public:
data()
{
cout<<"HELLO";
}
};
class test:public data
{
public:
test()
{
cout<<"WORLD";
}
};
int main()
{
test t;
return 0;
}
