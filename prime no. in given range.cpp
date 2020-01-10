#include<iostream>
using namespace std;
int main()
{
int num,flag=0;
cin>>num;
for(int i=0;i<num;i++)
{
if(i==0||i==1)
{
i++;
}
else{
for(int j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag=1;
break;}
}
if(flag==0)
{
cout<<i<<endl;
}
flag=0;
}
}
return 0;
}
