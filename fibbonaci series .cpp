#include<iostream>
using namespace std;
int fibbo(int);
int main()
{
int num,res;
cin>>num;
for(int i=0;i<num;i++)
{
res=fibbo(i);
cout<<res<<"\t";
}
return 0;
}
int fibbo(int n)
{
if(n==0){
return 0;
}
else if(n==1)
{
return 1;
}
else{
return (fibbo(n-1)+fibbo(n-2));
}
}
