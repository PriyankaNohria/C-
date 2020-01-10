#include<iostream>
using namespace std;
class data
{
public:
int a,b;
public:
data()
{
a=0;
b=0;
}
data(int x,int y)
{
a=x;
b=y;
}
data operator +(data t)
{
data temp;
temp.a=a+t.a;
temp.b=b+t.b;
return temp;
}
void display()
{
cout<<a<<endl<<b;
}
};
int main()
{
int x,y,x1,y1;
cout<<"obj1 : "<<endl;
cin>>x>>y;
cout<<"obj2 : "<<endl;
cin>>x1>>y1;
data t1(x,y);
data t2(x1,y1),t3;
t3=t1+t2;
cout<<"The Sum Is : "<<endl;
t3.display();
return 0;
}
