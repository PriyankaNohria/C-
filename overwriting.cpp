#include<iostream>
using namespace std;
class data
{
public:
void get()
{
cout<<"Hello";
}
};
class test:public data
{
public:
void get()
{
cout<<"World";
}
};
int main()
{
test t;
t.get();
return 0;
}
