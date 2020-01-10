#include<iostream>
using namespace std;
template<class T>
class array
{
T *arr;
int n;
public:
array(int s)
{
arr=new T[s];
n=s;
}
void enter()
{
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
}
void print();
};
template<class T>
void array<T>:: print()
{
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
cout<<endl;
}
int main()
{
array<int> a(5);
a.enter();
a.print();
array<char> b(5);
b.enter();
b.print();
return 0;
}
