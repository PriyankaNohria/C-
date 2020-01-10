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
friend void sorting(data*,int);
};
void sorting(data t[50],int n)
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
}
}
for(int i=0;i<1;i++)
{
cout<<t[i].name<<" "<<"Gain highest marks : "<<t[i].mark;
}
}
int main()
{
data t[50];
int n;
cout<<"no. of students : ";
cin>>n;
for(int i=0;i<n;i++)
{
t[i].enter();
}
cout<<"*****************"<<endl;
for(int i=0;i<n;i++)
{
t[i].display();
}
cout<<"*****************"<<endl;
sorting(t,n);
return 0;
}
