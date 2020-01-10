#include<iostream>
using namespace std;
class larg
{
int a,b;
float x,y;
char ch1,ch2;
public:
void enter();
void inte();
void floatno();
void character();
};
void larg:: enter()
{
cout<<"Enter int no. :"<<endl;
cin>>a>>b;
cout<<"Enter float no. :"<<endl;
cin>>x>>y;
cout<<"Enter characters :"<<endl;
cin>>ch1>>ch2;
}
void larg:: inte()
{
if(a>b)
{
cout<<"largest integer no. :"<<a<<endl;
}
else
{
cout<<"largest integer no. :"<<b<<endl;
}
}
void larg:: floatno()
{
if(x>y)
{
cout<<"largest floatno. :"<<x<<endl;
}
else{
cout<<"largest floatno. :"<<y<<endl;
}
}
void larg:: character()
{
if(ch1>ch2)
{
cout<<"largest character :"<<ch1<<endl;
}
else{
cout<<"largest character :"<<ch2<<endl;
}
}
int main()
{
larg l;
l.enter();
l.inte();
l.floatno();
l.character();
return 0;
}
