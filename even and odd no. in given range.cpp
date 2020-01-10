#include<iostream>
using namespace std;
int main()
{
int num,even=0,odd=0;
cin>>num;
for(int i=0;i<=num;i++)
if(i%2==0)
{
even++;
}
else{
odd++;
}
cout<<"EVEN NO. : "<<even<<endl<<"ODD NO. : "<<odd;
return 0;
}
