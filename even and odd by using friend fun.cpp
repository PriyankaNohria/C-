#include<iostream>
using namespace std;
class data
{
int a;
public:
void enter()
{
cout<<"Enter the no. : ";
cin>>a;
}
friend void num(data);
};
void num(data t)
{
if(t.a%2==0)
{
cout<<"EVEN";
}
else{
cout<<"ODD";
}
}
int main()
{
data t;
t.enter();
num(t);
return 0;
}
