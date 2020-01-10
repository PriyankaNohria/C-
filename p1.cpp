#include<iostream>
using namespace std;
class t
{
int a;
public:
t()
{
a=0;
}
void show() const{
cout<<a+1;
}
};
int main()
{
t o;
o.show();
return 0;
}
