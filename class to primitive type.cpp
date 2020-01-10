#include<iostream>
using namespace std;
class complex1
{
int a,b;
public:
void get(int x,int y)
{
a=x;
b=y;
}
operator int()
{
return 3;
}
void show()
{
cout<<a<<" "<<b<<endl;
}
};
int main()
{
complex1 c1;
c1.get(10,20);
c1.show();
int x;
x=c1;
cout<<x;
return 0;
}
