#include<iostream>
using namespace std;
int greate(int,int);
int main()
{
int a,b,res;
cin>>a>>b;
res=greate(a,b);
if(res==0)
{
cout<<"Both are equal";
}
else if(res>0)
{
cout<<"a is Greater than b";
}
else
{
cout<<"a is less than b";
}
return 0;
}
int greate(int a,int b)
{
if(a>b)
{
return 1;
}
else if(a==b)
{
return 0;
}
else{
return -1;
}
}
