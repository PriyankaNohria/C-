#include<iostream>
using namespace std;
class vehicle
{
public:
vehicle()
{
cout<<"This is a Vehicle"<<endl;
}
};
class car:public vehicle
{
cout<<"hiiiii";
};
int main()
{
car obj;
return 0;
}
