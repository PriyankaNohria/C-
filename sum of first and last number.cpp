#include<iostream>
using namespace std;
int main()
{
int num,last,first,sum=0;
cin>>num;
last=num%10;
while(num!=0)
{
num=num/10;
first=num/10;
num=first/10;
}
sum=first+last;
cout<<"first number : "<<first<<endl<<"last number : "<<last<<endl<<"sum of first and last number is : "<<sum;
return 0;
}
