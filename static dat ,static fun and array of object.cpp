#include<iostream>
using namespace std;
class data
{
static int ID;
int roll;
char name[50];
public:
static int id()
{
return ID++;
}
void enter()
{
roll=data:: id();
cin>>name;
}
void display()
{
cout<<roll<<" "<<name<<endl;
}
};
int data:: ID=1701;
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
return 0;
}
