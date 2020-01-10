#include<iostream>
using namespace std;
class one
{
public :
void enter();
};
void one:: enter()
{
cout<<"Hello";
}
int main()
{
one o;
o.enter();
return 0;
}
