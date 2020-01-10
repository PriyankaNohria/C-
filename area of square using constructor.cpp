#include<iostream>
using namespace std;
class test
{
int a;
public:
test()
{
cin>>a;
}
void display()
{
cout<<"Area of square : "<<a*a;
}
};
int main()
{
test t;
t.display();
return 0;
}

