#include<iostream>
using namespace std;
class data
{
char name[50];
int yrs;
public:
void enter();
void age();
void display();
};
void data:: enter()
{
cout<<"Name : ";
cin>>name;
cout<<"Birth Year : ";
cin>>yrs;
}
void data:: age()
{
yrs=2018-yrs;
}
void data:: display()
{
cout<<"Name : "<<name<<endl;
cout<<"Present Age : "<<yrs;
}
int main()
{
data t;
t.enter();
t.age();
t.display();
return 0;
}
