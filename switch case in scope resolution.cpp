#include<iostream>
using namespace std;
class fun
{
int a,b;
public:
void enter();
void sum();
void sub();
void mul();
void divd();
};
void fun:: enter()
{
cout<<"enter the value of a : ";
cin>>a;
cout<<"enter the value of b : ";
cin>>b;
}
void fun:: sum()
{
cout<<a+b;
}
void fun:: sub()
{
if(a>b)
{
cout<<a-b;
}
else{
cout<<b-a;
}
}
void fun:: mul()
{
cout<<a*b;
}
void fun:: divd()
{
cout<<a/b;
}
int main()
{
fun s;
int choice;
s.enter();
cout<<"enter choice :";
cin>>choice;
switch(choice)
{
case 1:
{
s.sum();
break;
}
case 2:{
s.sub();
break;
}
case 3:
{
s.mul();
break;
}
case 4:
{
s.divd();
break;
}
default :{
cout<<"Does not exit";
}
return 0;
}
}
