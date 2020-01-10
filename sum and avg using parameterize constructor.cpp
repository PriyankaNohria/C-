#include<iostream>
using namespace std;
class data
{
int marks[50],n1;
public:
data(int a[50],int n)
{
n1=n;
for(int i=0;i<n1;i++)
{
marks[i]=a[i];
}
}
void sum()
{   float avg;
    int sum=0;
 for(int i=0;i<n1;i++)
 {
 sum=sum+marks[i];
 }
 cout<<"Sum of marks : "<<sum<<endl;
 avg=(float)sum/n1;
 cout<<"The average is : "<<avg<<endl;
}
};
int main()
{
    int a[50],n;
    cout<<"Total subjects : ";
    cin>>n;
    cout<<"Marks of Subjects : "<<endl;
    for(int i=0;i<n;i++)
    {
     cin>>a[i];
    }
data t(a,n);
t.sum();
return 0;
}
