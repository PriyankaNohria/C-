#include<iostream>
using namespace std;
int main()
{
int num,rem,reverse=0;
cin>>num;
int temp;
temp=num;
while(num!=0)
{
rem=num%10;
reverse=reverse*10+rem;
num=num/10;
}
if(temp==reverse)
{
cout<<"PALINDROME NO.";
}
else{
cout<<"NOT PALINDROME NO.";
}
return 0;
}
