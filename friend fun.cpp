#include<iostream>
using namespace std;
class data
{
int a,b;
public:
void enter()
{
cin>>a>>b;
}
friend int sum(data);
};
int sum(data t)
{
int c;
c=t.a+t.b;
}
int main()
{
int res;
data t;
t.enter();
res=sum(t);
cout<<"the sum is : "<<res;
return 0;
}
