#include<iostream>
using namespace std;
class time
{

static int hrs;
static int mint;
static int sec;
public:
void enter();
void change();
void display();
};
void time:: enter()
{
cout<<"hours : ";
cin>>hrs;
cout<<"minutes : ";
cin>>mint;
cout<<"Second : ";
cin>>sec;
}
void time:: change()
{
if(hrs<=12)
{
cout<<hrs<<":"<<mint<<":"<<sec<<" AM";
}
else{
hrs=hrs-12;
cout<<hrs<<":"<<mint<<":"<<sec<<" PM";
}
}
int time:: hrs;
int time:: mint;
int time:: sec;
int main()
{
time t;
t.enter();
t.change();
return 0;
}
