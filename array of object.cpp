#include<iostream>
using namespace std;
class data
{
char name[50];
char depart[50];
public:
void enter()
{
cin>>name;
cin>>depart;
}
void display()
{
cout<<name<<" "<<depart<<endl;
}
};
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
