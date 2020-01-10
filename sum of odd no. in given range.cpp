#include<iostream>
using namespace std;
int odd(int);
int main()
{
int num,res;
cin>>num;
res=odd(num);
cout<<res;
return 0;
}
int odd(int num)
{
int sum=0;
for(int i=0;i<num;i++)
{
if(i%2!=0)
{
sum=sum+i;
}
}
return sum;
}
