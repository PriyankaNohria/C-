#include<iostream>
using namespace std;
class data
{
int r,g,b;
public:
data(int x,int y,int z)
{
 r=x;
 b=y;
 g=z;
}
void red();
void blue();
void green();
void display()
{
cout<<"No. of 1 : "<<r<<endl<<"No. of 2 : "<<b<<endl<<"No. of 3 : "<<g<<endl;
}
};
void data:: red()
{
r++;
}
void data:: blue()
{
b++;
}
void data:: green()
{
g++;
}
int main()
{
 int choice;
 data t(0,0,0);
 do
 {
 cout<<"Enter the choice : ";
 cin>>choice;
 switch(choice)
 {
 case 1:
     {
   t.red();
   break;
     }
     case 2:
     {
   t.blue();
   break;
     }
     case 3:
     {
   t.green();
   break;
     }
 }
 }while(choice<=3);
 t.display();
 return 0;
}
