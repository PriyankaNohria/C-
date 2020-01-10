#include<iostream>
using namespace std;
int add(int);
int main()
{
int num,res;
cin>>num;
res=add(num);
cout<<res;
return 0;
}
int add(int num)
{
int sum=0;
for(int i=0;i<num;i++)
{
if(i%2==0)
{
sum=sum+i;
}
}
return sum;
}
