#include<iostream>
using namespace std;
class data
{
int a,b;
public:
data(int x,int y)
{
a=x;
b=y;
}
void display()
{
cout<<a<<endl<<b<<endl;
}
};
int main()
{
data t(10,20);

t.display();
data t1(t);
t1.display();
}
