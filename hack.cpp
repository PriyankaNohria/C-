#include<iostream>
using namespace std;
class test
{
static int a;
public:
void dis()
{
cout<<"a="<<a++;
}
};
int test:: a=0;
int main()
{
test t;
cout<<sizeof(t);
return 0;
}
