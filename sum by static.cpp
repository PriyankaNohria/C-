#include<iostream>
using namespace std;
class data
{
static int sum;
int m1,m2,m3,m4,m5;
public:
void enter()
{
cin>>m1>>m2>>m3>>m4>>m5;
}
void add()
{
sum=m1+m2+m3+m4+m5;
}
void display()
{
cout<<"The sum is : "<<sum;
}
};
int data:: sum;
int main()
{
data t1,t2;
t1.enter();
t1.add();
t2.display();
return 0;
}
