#include<iostream>
#include<algorithm>
using namespace std;
void show(int a[50],int n)
{
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
}
int main()
{
int a[50],n;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
sort(a,a+n);
show(a,n);
if(binary_search(a,a+n,2))
{
 cout<<"It is found";
}
else{
cout<<"It is not found";
}
return 0;
}
