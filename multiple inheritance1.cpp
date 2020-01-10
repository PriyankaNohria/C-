#include<iostream>
using namespace std;
class cse
{
    public:
 cse(){
cout<<"CSE"<<endl;
}};
class info:public cse
{
public:
info(){
cout<<"Tnformation"<<endl;
}};
class stu:public cse
{public:
stu(){
cout<<"student"<<endl;
}};
class lec:public cse
{
    public:
 lec(){
cout<<"Lecture"<<endl;
}};

class ece:public cse,public info
{
    public:
 ece(){
cout<<"ECE"<<endl;
}};
class mec:public cse,public info,public ece,public stu
{
public:
void inp(){
cout<<"Mechanical"<<endl;
}};
int main()
{
mec A;
A.inp();
return 0;
}
