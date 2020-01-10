#include<iostream>
using namespace std;
class data
{
static int age;
char name[50][50];
public:
void enter()
{
for(int i=0;i<5;i++)
{
cin>>name[i];
}
}
void display()
{
for(int i=0;i<5;i++)
{
cout<<"Age : "<<age++<<" Name : "<<name[i]<<endl;
}
}
};
int data:: age=100;
int main()
{
data t;
t.enter();
t.display();
return 0;
}
