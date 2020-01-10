#include<iostream>
using namespace std;
class data
{
public:
int a;
public:
    data()
    {
        a=0;
    }
data(int x)
{
a=x;
}
data operator -()
{
data tt;

tt.a=-a;
return tt;
}
void display()
{
cout<<a<<endl;
}
};
{
data t(5),t1;int main()

-t;
t.display();
t1=-t;
t1.display();
return 0;
}
