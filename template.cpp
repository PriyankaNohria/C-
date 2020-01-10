#include<iostream>
using namespace std;
template<class type>
class arrays
{
type *arr;
int s;
public:
arrays(int m)
{
arr=new type[m];
s=m;
}
void read()
{
for(int i=0;i<s;i++)
{
cin>>arr[i];
}
}
void print();
};
template<class type>
void arrays<type>:: print()
{
for(int i=0;i<s;i++)
{
cout<<arr[i]<<"\t";
}
}
int main()
{
arrays<int>A(5);
A.read();
A.print();
arrays<char>B(7);
B.read();
B.print();
return 0;
}
