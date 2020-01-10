#include<iostream>
using namespace std;
class test
{
int a,l,b;
public:
test(int x)
{
a=x;
}
test(int z,int y)
 {
 l=z;
 b=y;
 }
 void Sarea();
 void Rarea();
};
void test:: Sarea()
{
cout<<"Area of square : "<<3.14*a*a<<endl;
}
void test:: Rarea()
{
cout<<"Area of rectangle : "<<l*b<<endl;
}
int main()
{
test t1(2);
t1.Sarea();
test t2(2,3);
t2.Rarea();
return 0;
}
