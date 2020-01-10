#include<iostream>
using namespace std;
class complex1
{
int a,b;
public:
complex1()
{
a=0;
b=0;
}
complex1(int x)
{
a=x;
b=0;
}
void show()
{
cout<<a<<endl<<b;
}
};
int main()
{
complex1 c1;
int x;
cin>>x;
c1=x;
 c1.show();
return 0;
}
