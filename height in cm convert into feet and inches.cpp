#include<iostream>
using namespace std;
class data
{
int height;
float res,feet,inch;
public:
void enter();
void convert();
float feets();
float inches();
};
void data:: enter()
{
cout<<"Height in CM : ";
cin>>height;
}
void data:: convert()
{
feet=feets();
cout<<"Feet : "<<feet<<endl;
inch=inches();
cout<<"Inches : "<<inch;
}
float data:: feets()
{
res=0.032*height;
return res;
}
float data:: inches()
{
res=0.0393*height;
return res;
}
int main()
{
data t;
t.enter();
t.convert();
t.feets();
t.inches();
return 0;
}
