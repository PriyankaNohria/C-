#include<iostream>
using namespace std;
int main()
{
int mark;
cin>>mark;
switch(mark)
{
case 100:
{
cout<<"A+";
break;
}
case 90:
{
cout<<"A";
break;
}
case 80:
{
cout<<"B+";
break;
}
case 70:
{
cout<<"B";
break;
}
case 60:
{
cout<<"C+";
break;
}
default:
    {
cout<<"PASS";
break;    }
}
return 0;
}
