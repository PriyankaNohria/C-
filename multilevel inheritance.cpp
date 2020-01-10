#include<iostream>
using namespace std;
class stu
{
protected:
int roll;
public:
void get_roll(int);
void put_roll();
};
void stu:: get_roll(int x)
{
roll=x;
}
void stu:: put_roll()
{

cout<<"Roll : "<<roll<<endl;
}
class test:public stu
{
protected:
float m1,m2;
public:
void get_m(float,float);
void put_m();
};
void test:: get_m(float x,float y)
{
m1=x;
m2=y;
}
void test:: put_m()
{
cout<<"Marks : "<<m1<<" "<<m2<<endl;
}
class result:public test
{
int total;
public:
void show();
};
void result:: show()
{
total=m1+m2;
put_roll();
put_m();
cout<<"Total : "<<total<<endl;
}
int main()
{
result r;
r.get_roll(10);
r.get_m(93.5,94.5);
r.show();
return 0;
}
