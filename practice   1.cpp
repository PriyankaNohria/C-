#include<iostream>
using namespace std;
template<class T>
class Array
{
T *a;
int n;
public:
Array(int m)
{
a=new T[m];
n=m;
}
void enter()
{
for(int i=0;i<n;i++)
{
cin>>a[i];
}
}
void print();
};
template<class T>
void Array<T>:: print()
{
for(int i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
}
int main()
{
Array<int> A(5);
A.enter();
A.print();
Array<char> B(7);
B.enter();
B.print();
return 0;
}
