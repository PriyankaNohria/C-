#include<iostream>
using namespace std;
class data
{
public:
int a,b;
public:
void enter()
{
cin>>a>>b;
}
int swaping(int &,int &);
};
int data:: swaping(int &a,int &b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<a<<endl<<b<<endl;
}
int main()
{
data t;
int res;
t.enter();
res=t.swaping(t.a,t.b);
cout<<"in main : "<<t.a<<endl<<t.b;
return 0;
}
