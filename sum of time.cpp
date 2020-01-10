#include<iostream>
using namespace std;
class time
{
static int sec;
static int mint;
static int hrs;
int h1,m1,s1,h2,m2,s2;
public:
void enter()
{
cout<<"Hours 1 : ";
cin>>h1;
cout<<"Minutes 1 : ";
cin>>m1;
cout<<"Seconds 1 : ";
cin>>s1;
cout<<"Hours 2 : ";
cin>>h2;
cout<<"Minutes 2 : ";
cin>>m2;
cout<<"Seconds 2 : ";
cin>>s2;
}
void sum()
{
sec=s1+s2;
mint=m1+m2;
hrs=h1+h2;
if(sec>60)
{
sec=sec-60;
mint++;
}
if(mint>60)
{
mint=mint-60;
hrs++;
}
}
void display()
{
cout<<"Total Hours are : "<<hrs<<endl<<"Total minutes : "<<mint<<endl<<"Total Seconds : "<<sec;
}
};
int time:: sec;
int time:: mint;
int time:: hrs;
int main()
{
time t;
t.enter();
t.sum();
t.display();
return 0;
}
