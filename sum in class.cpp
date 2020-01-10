#include<iostream>
using namespace std;
class sum
{
int a,b,t;
public:
void getdata();
void putdata();
};
int main()
{
sum d1;
d1.getdata();
d1.putdata();
return 0;
}
void sum::getdata()
{
cout<<"enter a and b :";
cin>>a>>b;
}
void sum::putdata()
{
t=a+b;
cout<<"the sum of"<<a<<"and"<<b<<"is :"<<t;
}
