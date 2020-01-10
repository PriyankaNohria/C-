#include<iostream>
using namespace std;
template<class X>
class student
{
X m1,m2;
public:
void enter()
{
cin>>m1>>m2;
}
void total()
{
cout<<"Total Marks : "<<m1+m2<<endl;
}
};
int main()
{
student<int>t;
t.enter();
t.total();
student<float>t1;
t1.enter();
t1.total();
return 0;
}
