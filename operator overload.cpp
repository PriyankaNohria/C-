#include<iostream>
using namespace std;
class test
{
int x;
public:
test()
{

}
test(int a)
{
x=a;
}
test operator +(test t)
{
    test t1;
t1.x=x-t.x;
return t1;
}
void display()
{
cout<<x<<endl;
}
};
int main()
{
test t2(5);
test t3;
test t4=t2+t3;
t4.display();

return 0;
}
