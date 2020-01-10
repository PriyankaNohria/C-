#include<iostream>
using namespace std;
int main()
{
int num,temp,i=0,pow=1;
cin>>num;
while(i!=num)
{
temp=i;
for(int j=0;j<2;j++)
{
pow=pow*temp;
}
}
