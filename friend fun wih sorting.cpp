#include<string.h>
#include<iostream>
using namespace std;
class data
{
int mark;
char name[50];
public:
void enter()
{
cin>>name>>mark;
}
void display()
{
cout<<name<<" "<<mark<<endl;
}
friend void sorte(data*,int);
};
void sorte(data t[50],int n)
{
int temp;
char ch[50];
for(int i=0;i<n-1;i++)
{
for(int j=0;j<(n-i)-1;j++)
{
if(t[j].mark<t[j+1].mark)
{
temp=t[j].mark;
t[j].mark=t[j+1].mark;
t[j+1].mark=temp;
strcpy(ch,t[j].name);
strcpy(t[j].name,t[j+1].name);
strcpy(t[j+1].name,ch);
}
}}
cout<<"After sorting : "<<endl;
for(int i=0;i<n;i++)
{
cout<<t[i].name<<" "<<t[i].mark<<endl;
}
}
int main()
{
data t[50];
int n;
cin>>n;
for(int i=0;i<n;i++)
{
t[i].enter();
}
for(int i=0;i<n;i++)
{
t[i].display();
}
sorte(t,n);
return 0;
}
