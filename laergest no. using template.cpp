#include<iostream>
using namespace std;
template<typename X>
X large(X a,X b)
{
if(a>b)
{
return a;
}
else{
return b;
}
}
int main()
{
int a,b;
cout<<"int value : ";
cin>>a>>b;
float m1,m2;
cout<<"float value : ";
cin>>m1>>m2;
char c1,c2;
cout<<"character value : ";
cin>>c1>>c2;
cout<<"Greater no. in int: "<<large(a,b)<<endl<<"Greater no. in float: "<<large(m1,m2)<<endl<<"Greater no. in char by ASCII value: "<<large(c1,c2);
return 0;
}
