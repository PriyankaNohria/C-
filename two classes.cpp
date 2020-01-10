#include<iostream>
#include<string.h>
using namespace std;
class complex1
{
int marks;
char name[50];
int roll;
public:
complex1()
{
marks=0;
name[50]=0;
roll=0;
}
complex1(int m,char n[50],int r)
{
marks=m;
strcpy(name,n);
roll=r;
}
void display()
{
cout<<name<<" "<<roll<<" "<<marks<<endl;
}
};
int main()
{
int m,r;
char n[50];
cin>>n>>r>>m;
complex1 c1(m,n,r);
c1.display();
complex1 c2;
c2=c1;
c2.display();
}
