#include<iostream>
using namespace std;
class box
{
int len,br,hi;
public:
box(double l=2.0,double b=2.0,double h=7.0)
{
cout<<"Constructor called : "<<endl;
len=l;
br=b;
hi=h;
}
double volume()
{
return len*br*hi;
}
int compare(box box)
{
return this->volume()>box.volume();
}
};
int main()
{
box b1(3.3,1.2,1.5);
box b2(8.5,6.0,2.0);
if(b1.compare(b2))
{
cout<<"b2 is Smaller";
}
else{
cout<<"b2 is equal or large than b1";
}
return 0;
}
