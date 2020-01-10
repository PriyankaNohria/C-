#include<iostream>
using namespace std;
class data
{
int a[50],n;
public:
data();
display()
{
for(int i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
}};
data:: data()
{
cout<<"total no. elements in array : ";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
}
int main()
{
data t;
t.display();
return 0;
}
