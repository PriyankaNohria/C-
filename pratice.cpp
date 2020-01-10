#include<iostream>
using namespace std;
class data
{
static int count;
public:
void enter()
{
count++;
}
void dis()
{
cout<<count<<endl;
}
};
int data:: count;
int main()
{
data t;
t.dis();
t.enter();
t.dis();
t.enter();
return 0;
}
