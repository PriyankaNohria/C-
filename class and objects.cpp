#include<iostream>
using namespace std;
class add
{
private:
int a,b;
public:
void enter()
{
cin>>a>>b;
}
void display()
{
cout<<a<<endl<<b<<endl;
}
};
int main()
{
add d1;
d1.enter();
d1.display();


return 0;
}
