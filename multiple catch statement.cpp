#include<iostream>
using namespace std;
test(int x)
{
try
{
if(x>0)
{
throw(x);
}
else
{
throw('A');
}
}
catch(int y)
{
cout<<"x = "<<x<<endl;
}
catch(char ch)
{
cout<<"x = "<<ch<<endl;
}
cout<<"Next Statement";
}
int main()
{
int a;
cout<<"Enter the Value of a : ";
cin>>a;
test(a);
return 0;
}
