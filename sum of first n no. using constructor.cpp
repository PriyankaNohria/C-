#include<iostream>
using namespace std;
class data
{
int a;
public:
data();
void display()
{
int i=0,sum=0;
while(i<=a)
{
sum=sum+i;
i++;
}
cout<<"The sum is : "<<sum;
}
};
data:: data()
{
cin>>a;
}
int main()
{
data t;
t.display();
return 0;
}
