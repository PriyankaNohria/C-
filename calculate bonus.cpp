#include<iostream>
using namespace std;
int main()
{
int sal,bonus;
char gen;
cin>>sal>>gen;
if(gen=='M'||gen=='m')
{
bonus=0.05*sal;
}
else{
bonus=0.10*sal;
}
if(sal<10000)
{
bonus=bonus+0.02*sal;
}
sal=sal+bonus;
cout<<sal;
}
