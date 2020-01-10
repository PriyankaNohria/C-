#include<iostream>
using namespace std;
int main()
{
int yrs;
cin>>yrs;
if(yrs%4==0||yrs%100==0)
{
cout<<"LEAP YEAR";
}
else if(yrs%4==0&&yrs%400==0)
{
cout<<"LEAP YEAR";
}
else{
cout<<"NOT LEAP YEAR";
}
return 0;
}
