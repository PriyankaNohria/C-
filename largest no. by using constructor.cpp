#include<iostream>
using namespace std;
class data
{
int a[50],n;
public:
data()
{
n=0;
}
data(int b)
{
n=b;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
}
void display()
{
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}
int larg()
{
int l;
l=a[0];
for(int i=1;i<n;i++)
{
if(l<a[i])
{
l=a[i];
}
}
return l;
}
};
int main()
{
    int res,n;
    cin>>n;
data t(n);
t.display();
res=t.larg();
cout<<endl<<res;
return 0;
}
