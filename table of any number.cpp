#include<iostream>
using namespace std;
class data
{
static int n;
public:
static int enter()
{
cin>>n;
return n;
}
void display()
{
int num,i,multi;
num=enter();
for(i=1;i<=10;i++)
{
multi=num*i;
cout<<num<<"*"<<i<<"="<<multi<<endl;
}
}};
int data:: n;
int main()
{
data t;
t.display();
return 0;
}
