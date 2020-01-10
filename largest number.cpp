#include<iostream>
using namespace std;
void larg(int a,int b)
{
if(a>b){
cout<<a;
}
else{
cout<<b;
}
}
int main()
{
int a,b;
cin>>a>>b;
larg(a,b);
return 0;
}
