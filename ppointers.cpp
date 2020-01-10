#include<iostream>
using namespace std;
int main()
{
int a=1,*ptr;
ptr=&a;
*ptr++;
cout<<a;
return 0;
}
