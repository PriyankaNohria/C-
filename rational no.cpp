#include<iostream>
using namespace std;
class data
{
int num,deno;
public:
void enter()
{
cout<<"Enter the num : ";
cin>>num;
cout<<"Enter the deno : ";
cin>>deno;
}
void simplify()
{
int commondiv;
commondiv=GCD(num,deno);
num=num/commondiv;
deno=deno/commondiv;
cout<<num<<"/"<<deno;
}
int GCD(int a,int b)
{
    int res;
for(int i=1;i<a&&i<b;i++)
{
if((a%i==0)&&(b%i==0))
{
res=i;
}
}
return res;
}
};
int main()
{
data t;
t.enter();
t.simplify();
return 0;
}
