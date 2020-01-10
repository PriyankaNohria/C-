
#include<iostream>
using namespace std;
class data
{
int a;
public:
data(int);
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
data:: data(int x)
{
a=x;
}
int main()
{
int x;
cin>>x;
data t(x);
t.display();
return 0;
}
