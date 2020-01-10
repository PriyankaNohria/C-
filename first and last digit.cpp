#include<iostream>
using namespace std;
int main()
{
int num,last,first;
cin>>num;
last=num%10;
while(num!=0)
{
num=num/10;
first=num/10;
num=first/10;
}
cout<<"FIRST : "<<first<<endl<<"LAST : "<<last;
return 0;
}
