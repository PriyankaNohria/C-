#include<iostream>
using namespace std;
class student
{
int m;
public:
student()
{
cout<<"Constructor of class Student : ";
cin>>m;
}
void put_m()
{
cout<<"Marks in Student class : ";
cout<<m;
}
};
class teachers:public student
{
int mark;
public:
teachers():student()
{
cout<<"Constructor of class Teachers : ";
cin>>mark;
}
void put_m()
{
cout<<"Marks in Teachers class : ";
cout<<mark;
}
};
int main()
{
teachers t;
t.put_m();
return 0;
}
