#include<iostream>
using namespace std;
class vehicle
{
public:
vehicle(){
cout<<"Hello"<<endl;
}};
class vehicle1
{
public:
vehicle1(){
cout<<"World"<<endl;
}};
class car:public vehicle1,public vehicle
{

};
int main()
{
car obj;
return 0;
}
