#include<iostream>
using namespace std;
class test
{
int a,b;
public:
test(int x,int y)
{
cout<<x<<endl<<y<<endl;
}
void display()
{
cout<<a<<endl<<b<<endl;
}
};
int main()
{
test t1(10,20);
t1.display();

test t2=t1;
t2.display();
return 0;
}
