#include<iostream>
using namespace std;
class data
{
int a[50],n,b[50]={0},c[50]={0};
public:
void enter()
{
cout<<"Total no. are : ";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
}
void miss()
{
 cout<<"Missing terms form 0 to 10 are : "<<endl;
for(int i=0;i<n;i++)
{
b[a[i]]++;
}int j=0;
for(int i=0;i<10;i++)
{
if(b[i]==0)
{
 c[j]=i;
 j++;
cout<<i<<endl;
}
}
}
void largmiss()
{
int larg=c[0];
 for(int i=0;i<n;i++)
{
if(larg<c[i])
{
larg=c[i];
}
}
cout<<"Largest missing no. is : "<<larg;
}
};
int main()
{
data t;
t.enter();
cout<<"*********************"<<endl;
t.miss();
t.largmiss();
return 0;
}
