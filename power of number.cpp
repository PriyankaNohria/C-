#include<iostream>
using namespace std;
int main()
{
int num,pow=1;
cin>>num;
for(int i=0;i<2;i++)
{
pow=pow*num;
}
cout<<"POWER OF GIVEN NUMBER IS : "<<pow;
return 0;
}
