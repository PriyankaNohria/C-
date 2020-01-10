#include<iostream>
using namespace std;
class A
{
static int id;
int idi[50];
char book[50][50];
public:
    int n;
public:
void enter();
void add();
friend void delet(A,int);
void display();
};
void A:: enter()
{
cout<<"Total books : ";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>book[i];
idi[i]=id++;
}
cout<<"The books with their id : "<<endl;
for(int i=0;i<n;i++)
{
cout<<book[i]<<" "<<idi[i]<<endl;
}
}
void A:: add()
{
    int m;
cout<<"No. of books to be added : "<<endl;
cin>>m;
for(int i=n;i<n+m;i++)
{
cin>>book[i];
idi[i]=id++;
}
cout<<"After addition : ";
for(int i=0;i<n+m;i++)
{
cout<<book[i]<<" "<<idi[i]<<endl;
}
}
void delet(A t,int n)
{
    int n1,id1[50];
cout<<"no. of books to be deleted : ";
cin>>n1;
cout<<"enter the of book which you want to be deleted :";
for(int i=0;i<n1;i++)
{
cin>>id1[i];
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n1;j++)
{
if(t.idi[i]==id1[j])
{
t.idi[i]=0;
}
}
}
cout<<"After deletion : "<<endl;
for(int i=0;i<n;i++)
{
if(t.idi[i]!=0)
{
cout<<t.book[i]<<" "<<t.idi[i]<<endl;
}
}
}
void A:: display()
{
for(int i=0;i<n;i++)
{
cout<<book[i]<<" "<<idi[i]<<endl;
}
}
int A:: id=100;
int main()
{
A t;
int option;
do
{
cout<<"Enter option : ";
cin>>option;
switch(option)
{
case 1:
{
t.enter();
break;
}
case 2:
{
t.add();
break;
}
case 3:
{
delet(t,t.n);
break;
}
}
}while(option<4);
return 0;
}
