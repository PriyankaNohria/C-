#include<iostream>
using namespace std;
template<class T,class U,class V>
class A
{
T x;
U y;
V z;
static int c;
};
int main()
{
A<int,double,int>a;
A<char,double,char>b;
cout<<sizeof(a)<<endl<<sizeof(b);
return 0;
}
