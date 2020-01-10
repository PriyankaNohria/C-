#include<iostream>
using namespace std;
class IntNew
{
int num;
public:
void getvalue()
{
cin>>num;
}
IntNew operator -()
{
num=-num;
}
friend void show(IntNew);
};
void  show(IntNew t)
{
cout<<t.num<<endl;
}
int main()
{
IntNew x;
x.getvalue();
show(x);
-x;
show(x);
return 0;
}
