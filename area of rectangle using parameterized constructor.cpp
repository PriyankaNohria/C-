#include<iostream>
using namespace std;
class data
{
int a,b;
public:
data(int x,int y)
{
a=x;
b=y;
}
void display()
{
cout<<"Area : "<<a*b;
}
};
int main()
{
data t(5,4);
t.display();
return 0;
}
