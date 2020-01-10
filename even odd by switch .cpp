#include<iostream>
using namespace std;
int main()
{
int num;
cin>>num;
switch(num%2)
{
case 0:
{
cout<<"EVEN";
break;
}
default :
{
cout<<"ODD";
break;
}
}
return 0;
}
