#include<iostream>
using namespace std;
class area
{
int a,b;
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
cout<<"The Area of circle is : "<<3.14*a*a;
}
void area:: rectangle()
{
cout<<"The Area of rectangle is : "<<a*b;
}
void area:: triangle()
{
cout<<"The Area of triangle is : "<<0.5*a*b;
}
int main()
{
area a;
int choice;
a.enter();
cout<<"Enter the Choice : ";
cin>>choice;
switch(choice)
{
case 1:
{
a.circle();
break;
}
case 2:{
a.rectangle();
break;
}
case 3:{
a.triangle();
break;
}
default:{
cout<<"Does Not Exit";
}
return 0;
}
}
