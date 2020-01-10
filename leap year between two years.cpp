#include<iostream>
using namespace std;
class data
{
int yrs1,yrs2;
public:
void enter()
{
cout<<"Enter the starting year : ";
cin>>yrs1;
cout<<"Enter the ending year : ";
cin>>yrs2;
}
void leap()
{
cout<<"LEAP YEAR"<<endl;
for(int i=yrs1;i<yrs2;i++)
{
if((i%4==0)&&(i%100!=0)||(i%400==0))
{
cout<<i<<endl;
}
}
}
};
int main()
{
data t;
t.enter();
t.leap();
return 0;
}
