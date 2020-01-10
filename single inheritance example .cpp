#include<iostream>
using namespace std;
class data
{
int roll;
char name[50];
public:
void get();
void show();
};
class test:public data
{
int marks;
public:
void get();
void show();
};
void data:: get()
{
cout<<"Roll No. : ";
cin>>roll;
cout<<"Name : ";
cin>>name;
}
void test:: get()
{
cout<<"Marks : ";
cin>>marks;
}
void data:: show()
{
cout<<roll<<endl<<name;
}
void test:: show()
{
cout<<endl<<marks;
}
int main()
{
test t;
t.data::get();
t.get();
t.data::show();
t.show();
return 0;
}
