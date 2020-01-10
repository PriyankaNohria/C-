#include<iostream>
using namespace std;
class Box
{
int len,br,hi;
public:
Box(double l=2.0,double b=2.0,double h=2.0)
{
cout<<"Constructor called"<<endl;
len=l;
br=b;
hi=h;
}
double volume()
{
return len*br*hi;
}
};
int main()
{
Box b1(3.3,1.2,1.0);
Box b2(8.5,6.5,7.2);
Box *ptrBox;
ptrBox=&b1;
cout<<"Volume is : "<<ptrBox->volume()<<endl;
ptrBox=&b2;
cout<<"Volume is : "<<ptrBox->volume()<<endl;
return 0;
}
