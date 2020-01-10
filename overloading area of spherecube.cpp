#include<iostream>
using namespace std;
int vol(int a)
{
int res;
res=a*a*a;
return res;
}
int vol(int a,int b,int c)
{
int res;
res=a*b*c;
return res;
}
int main()
{
int a,b,c,res;
cin>>a>>b>>c;
res=vol(a);
cout<<"volume of cube : "<<res<<"\n";
res=vol(a,b,c);
cout<<"volume of cuboid : "<<res;
return 0;
}
