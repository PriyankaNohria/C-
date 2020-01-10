
#include<iostream>
using namespace std;
void fun(int *ptr)
{
cout<<*ptr<<endl;
delete (ptr);
}
int main()
{
int *p1=new int(10);
int *p2=p1;
fun(p2);
cout<<*p1;
return 0;
}
