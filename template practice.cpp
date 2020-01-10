#include<iostream>
using namespace std;
template<class X1,class X2,class X3>
class student1
{
X1 a;
X2 b;
X3 c,d;
public:
void enter()
{
cin>>a>>b>>c>>d;
}
void total()
{
cout<<a+b+c+d;
}
};
template<class X1,class X2,class X3>
class student2
{
X1 a1;
X2 b1;
X3 c1,d1;
public:
void enter_()
{
cin>>a1>>b1>>c1>>d1;
}
void total_();
};
template<class X1,class X2,class X3>
void student2<X1,X2,X3>:: total_()
{
cout<<a1+b1+c1+d1;
}
int main()
{
student1<int,float,double>A;
A.enter();
A.total();
student2<int,float,double>B;
B.enter_();
B.total_();
return 0;
}
