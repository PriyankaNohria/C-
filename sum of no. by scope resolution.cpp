#include<iostream>
using namespace std;
class sum
{
int a,b;
public:
void enter();
void add();
};
void sum:: enter()
{
cin>>a>>b;
}
void sum:: add()
{
cout<<"The sum of numbers is :"<<a+b;
}
int main()
{
sum s;
s.enter();
s.add();
return 0;
}
