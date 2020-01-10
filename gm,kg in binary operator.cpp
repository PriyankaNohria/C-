#include<iostream>
using namespace std;
class data
{
int gm,kg;
public:
data()
{
gm=0;
kg=0;
}
data(int x,int y)
{
gm=x;
kg=y;
}
data operator +(data t)
{
data temp;
temp.gm=gm+t.gm;
temp.kg=kg+t.kg;
if(temp.gm>1000)
{
while(temp.gm>1000){
temp.gm=temp.gm-1000;
temp.kg=temp.kg+1;
}}
return temp;
}
void display()
{
cout<<gm<<endl<<kg;
}
};
int main()
{
int x,x1,y,y1;
cout<<"gm and kg in obj1 : ";
cin>>x>>y;
data t1(x,y);
cout<<"gm and kg in obj2 : ";
cin>>x1>>y1;
data t2(x1,y1);
data t3;
t3=t1+t2;
cout<<"The sum of gm and kg is : "<<endl;
t3.display();
return 0;
}
