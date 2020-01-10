#include<iostream>
using namespace std;
class data
{
int km;
public:
void enter()
{
cout<<"Enter the data in KM : ";
cin>>km;
}
friend void convert(data);
};
void convert(data t)
{
int m=t.km*1000;
cout<<"Meters : "<<m;
}
int main()
{
data t;
t.enter();
convert(t);
return 0;
}
