#include<iostream>
#include<array>
using namespace std;
int main()
{
array<int,5>a1{1,2,3,4,5};
a1.fill(10);
for(int i=0;i<5;i++)
{
cout<<a1[i]<<endl;
}
return 0;
}
