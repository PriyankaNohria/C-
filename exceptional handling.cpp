#include <iostream>
using namespace std;
int main()
{
int a,b;
cout<<"The values of a and b : "<<endl;
cin>>a>>b;
int x=(a-b);
try
{
if(x!=0)
{
cout<<"x = "<<a/x<<endl;
}
else
{
throw (x);
}
}
catch(int x)
{
cout<<"a is divide by zero"<<endl;
}
cout<<"Next Statement";
return 0;
}
