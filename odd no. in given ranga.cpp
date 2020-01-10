#include<iostream>
using namespace std;
int odd(int);
int main()
{
int num,i=0,res;
cin>>num;
while(i!=num)
{
res=odd(i);
if(res==1)
{
cout<<i<<"\n";
}
i++;
}
return 0;
}
int odd(int num)
{
if(num%2==0)
{
return 0;
}
else{
return 1;
}
}
