#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int a,b;
int ch;
cin>>a>>b;
cin>>ch;
switch(ch)
{
case 1:
{
cout<<a+b;
break;
}
case 2:{
cout<<a-b;
break;
}
case 3:{
cout<<a*b;
break;
}
case 4:
{
cout<<a/b;
break;
}
}
return 0;
}
