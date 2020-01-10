#include<iostream>
using namespace std;
class data
{
int code1[500],price[500],n,m,code2[500];
public:
void enter();
void pay();
void delet();
};
void data:: enter()
{
cout<<"Enter the total Items : ";
cin>>n;
cout<<"Enter the code and price of each Item :"<<endl;
for(int i=0;i<n;i++)
{
cin>>code1[i]>>price[i];
}
}
void data:: pay()
{
int bill=0;
for(int i=0;i<n;i++)
{
if(code1[i]!=0)
{
bill=bill+price[i];
}
}
cout<<"The Total Bill : "<<bill<<endl;
}
void data:: delet()
{
cout<<"total no. of Items to be deleted : ";
cin>>m;
cout<<"Code of Items which you want to be deleted : ";
for(int i=0;i<m;i++)
{
cin>>code2[i];
}
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
if(code1[i]==code2[j])
code1[i]=0;
}
}
for(int i=0;i<n;i++)
{
if(code1[i]!=0)
{
cout<<code1[i]<<endl;
}
}
}
int main()
{
data t;
int choice;
do
{
cout<<"Enter choice : ";
cin>>choice;
switch(choice)
{
case 1:
{
t.enter();
break;
}
case 2:
{
t.pay();
break;
}
case 3:
{
t.delet();
break;
}
}
}while(choice<4);
return 0;
}
