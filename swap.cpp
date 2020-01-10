#include<iostream>
#include<array>
using namespace std;
int main()
{
array<int,5>a1={1,2,3,4,5};
array<int ,5>a2={11,22,33,44,55};
a1.swap(a2);
cout<<"ARRAY 1 : ";
for(int i=0;i<5;i++)
{
cout<<a1[i]<<" ";
}
cout<<endl<<"ARRAY 2 : ";
for(int i=0;i<5;i++)
{
cout<<a2[i]<<" ";
}
return 0;
}
