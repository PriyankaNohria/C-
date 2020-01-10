#include<iostream>
using namespace std;
class A
{
int a[50],n;
public:
void get_a(int*,int);
int get_a();
int get_m();
};
class B:public A
{
int *b,m,c;
public:
void get_b();
void show();
};
void A:: get_a(int s[50],int n1)
{
for(int i=0;i<n1;i++)
{
a[i]=s[i];
}}
int A:: get_m()
{
return n;
}
int A:: get_a()
{
return *a;
}
void B:: get_b()
{
b=new int[50];

m=get_m();
*b=get_a();
}
void B:: show()
{
for(int i=0;i<m;i++)
{
cout<<b[i]<<endl;
}}
int main()
{
B t;
int arr[50],n1;
cin>>n1;
for(int i=0;i<n1;i++)
{
cin>>arr[i];
}
t.get_a(arr,n1);
t.get_b();
t.show();
return 0;
}
