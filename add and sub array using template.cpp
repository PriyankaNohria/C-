#include<iostream>
using namespace std;
template<class type>
class arrays
{
type *arr;
int s;
public:
arrays(int n)
{
arr=new type[n];
s=n;
}
void read()
{
for(int i=0;i<s;i++)
{
cin>>arr[i];
}
}
void print()
{
for(int i=0;i<s;i++)
{
cout<<arr[i]<<" ";
}
cout<<endl;
}
void add(arrays t)
{
for(int i=0;i<s;i++)
{
arr[i]=arr[i]+t.arr[i];
}
}
void sub(arrays t)
{
for(int i=0;i<s;i++)
{
arr[i]=arr[i]-t.arr[i];
}
}
};
int main()
{
arrays<int>A(5);
A.read();
A.print();
arrays<int>B(5);
B.read();
B.print();
B.add(A);
cout<<"The addition is : "<<endl;
B.print();
B.sub(A);
cout<<"The Subtraction is : "<<endl;
B.print();
return 0;
}
