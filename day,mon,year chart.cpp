#include<iostream>
using namespace std;
class data
{
int dd,mm,yy,n,res;
public:
void enter()
{
cout<<"DD : ";
cin>>dd;
cout<<"MM : ";
cin>>mm;
cout<<"YY : ";
cin>>yy;
cout<<"Enter days to be added : ";
cin>>n;
}
void add()
{
int dd1;
dd1=dd+n;
if(mm%2!=0&&mm<=7)
{
if(dd1>31){
dd1=dd1-31;
mm++;
} }
else if(mm%2==0&&mm>7)
{
if(dd1>30){
dd1=dd1-30;
mm++;
} }
else
{
if(dd1>30){
dd1=dd1-30;
mm++;
} }
if(mm>12)
{
yy++;
mm=mm-12;
}
cout<<dd1<<"/"<<mm<<"/"<<yy<<endl;
res=year(yy);
if(res==0)
{
cout<<"This year is Leap Year";
}
else{
cout<<"This year is not Leap Year";
}
}
int year(int yy)
{
if(yy%4==0&&yy%100!=0||yy%400==0)
{
 return 0;
}
else {
    return 1;
}
}
};
int main()
{
 data t;
 t.enter();
 t.add();
 return 0;
}
