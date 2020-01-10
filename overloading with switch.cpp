#include<iostream>
using namespace std;
int area(int l,int b)
{
int res;
res=l*b;
return res;
}
int area(int a)
{
int res;
res=3.14*a*a;
return res;
}
int area(int b,float p)
{
float res;
res=0.5*b*p;
return res;
}
int main()
{
int a,b,res,choice;
float c;
cin>>a>>b;
cin>>c;
cin>>choice;
switch(choice)
{
case 1: {
res=area(a);
cout<<res;
break;
}
case 2:{
res=area(a,b);
cout<<res;
break;
}
case 3:{
res=area(a,c);
cout<<res;
break;
}}
return 0;
}
