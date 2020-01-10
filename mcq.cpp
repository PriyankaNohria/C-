#include<iostream>
using namespace std;
int main()
{
int a=3,b=5,c=3;
int *p[3];
p[0]=&a;
p[1]=&b;
p[2]=&c;
for(a=0;a<3;a++)
{
c+=*p[a];
}
cout<<c<<b<<a<<endl;
return 0;
}
