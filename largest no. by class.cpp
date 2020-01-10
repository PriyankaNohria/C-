#include<iostream>
using namespace std;
class large
{
int a,b,l;
public:
void enter()
{
cin>>a>>b;
}
void largest()
{
l=larg();
cout<<"Largest No. is : "<<l;
}
int larg()
{
if(a>b){
return a;}
else {
return b;}
}
};
int main()
{
large t;
t.enter();
t.largest();
return 0;
}
