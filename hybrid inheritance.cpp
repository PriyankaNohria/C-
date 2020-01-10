#include<iostream>
using namespace std;
class student
{
int roll;
public:
void get_r(int x)
{
roll=x;
}
void put_r()
{
cout<<roll<<endl;
}
};
class test:public student
{
protected:
float m1,m2;
public:
void get_m(float x,float y)
{
m1=x;
m2=y;
}
void put_m()
{
cout<<m1<<" "<<m2<<endl;
}
};
class sports
{
protected:
float sp;
public:
void get_sp(float x)
{
sp=x;
}
void put_sp()
{
cout<<sp<<endl;
}
};
class result:public test,public sports
{
float total;
public:
void add()
{
total=m1+m2+sp;
}
void show()
{
put_r();
put_m();
put_sp();
cout<<total;
}
};
int main()
{
result r;
r.get_r(10);
r.get_m(93.5,94.6);
r.get_sp(95.5);
r.add();
r.show();
return 0;
}
