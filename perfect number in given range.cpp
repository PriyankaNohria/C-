#include<iostream>
using namespace std;
int main()
{
int num,sum=0,rem,i=0,temp;
cin>>num;
while(i!=num)
{
temp=i;
for(int j=1;j<temp;j++)
{
if(temp%j==0)
{
sum=sum+j;
}
}
if(sum==i)
{
cout<<i<<endl;
}
i++;
sum=0;
}
return 0;
}
