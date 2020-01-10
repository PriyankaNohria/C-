#include<iostream>
using namespace std;
class test
{
public:
static int count;
int n;
void getdata(int a)
{
n=a;
count++;
}
void putdata()
{
cout<<count<<endl;
}
};
int test:: count=1;
int main()
{
test t1;
t1.putdata();
t1.putdata();
t1.getdata(10);
t1.getdata(20);
t1.putdata();
t1.putdata();
return 0;
}
