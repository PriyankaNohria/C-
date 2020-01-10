#include<iostream>
using namespace std;
class data1;
class data
{
int a[50][50];
int c,r;
public:
void enter()
{
cout<<"no. of rows in first matrix : ";
cin>>r;
cout<<"no. of col in first matrix : ";
cin>>c;
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
 cin>>a[i][j];
}
}
}
void display()
{
cout<<"First Matrix : "<<endl;
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}
}
friend void sum(data,data1);
};
class data1
{
int b[50][50],r1,c1;
public:
void enter1()
{
cout<<"no. of rows in second matrix : ";
cin>>r1;
cout<<"no. of col in second matrix : ";
cin>>c1;
for(int i=0;i<r1;i++)
{
 for(int j=0;j<c1;j++)
 {
 cin>>b[i][j];
 }
}
}
void display1()
{
cout<<"Second Matrix : "<<endl;
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
cout<<b[i][j]<<" ";
}
cout<<endl;
}
}
friend void sum(data,data1);
};
void sum(data t,data1 t1)
{
    int sum=0;
    cout<<"The Sum is : "<<endl;
 for(int i=0;i<t.r;i++)
 {
 for(int j=0;j<t.c;j++)
 {
 sum=t.a[i][j]+t1.b[i][j];
 cout<<sum;
 sum=0;
 }
 cout<<endl;
 }
}
int main()
{
data t;
data1 t1;
t.enter();
t1.enter1();
t.display();
t1.display1();
sum(t,t1);
return 0;
}
