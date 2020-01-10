#include<iostream>
using namespace std;
class data
{
int a[50],n,even,odd;
public:
data(int b)
{
n=b;
even=0;
odd=0;
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
}}
void countt()
{
for(int i=0;i<n;i++)
{
if(a[i]%2==0)
{
even++;
}
else{
odd++;
}
}
cout<<endl<<"No. of even : "<<even<<endl<<"No. of odd : "<<odd;
}
};
int main()
{
int n;
cin>>n;
data t(n);
t.display();
t.countt();
return 0;
}
