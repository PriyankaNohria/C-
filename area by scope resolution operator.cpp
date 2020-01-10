#include<iostream>
using  namespace std;
class area
{
int a,b,t;
public:
void enter();
void circle();
void rectangle();
void triangle();
};
void area:: enter()
{
cin>>a>>b;
}
void area:: circle()
{
cout<<"Area of circle :"<<3.14*a*a<<endl;
}
void area:: rectangle()
{
cout<<"Area of rectangle :"<<a*b<<endl;
}
void area:: triangle()
{
    t=0.5*a*b;
cout<<"Area of triangle :"<<t;
}
int main()
{
area a;
a.enter();
a.circle();
a.rectangle();
a.triangle();
return 0;
}
