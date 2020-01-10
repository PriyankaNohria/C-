#include<iostream>
using namespace std;
class add
{
public:
int a1,a2,a3,a4,a5;
public:
void enter()
{
cin>>a1>>a2>>a3>>a4>>a5;
}
private:
int sum()
{
return a1+a2+a3+a4+a5;
}
public:
void avg(int n)
{
cout<<n/5;
}
};
int main()
{
 add d1;
 d1.enter();
 d1. =sum();
 d1.avg();
 return 0;
}
