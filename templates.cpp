#include<iostream>
using namespace std;
template<typename t1,typename t2,typename t3>
t2 add(t1 a,t2 b,t3 c)
{
    return a*b*c;
}
int main()
{
int a;
float b;
double c;
char ch[5]="A";
cin>>a>>b>>c;
cout<<add(a,b,c)<<endl;
cout<<add(a,ch,b);
return 0;
}
