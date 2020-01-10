#include<iostream>
using namespace std;
class data
{
int amount,p;
public:
void enter()
{
cout<<"Enter total amount : ";
cin>>amount;
cout<<"Enter total no. of persons : ";
cin>>p;
}
void divid()
{
    int res,div;
div=amount%p;
if(div!=0)
{
cout<<div;
}
else{
cout<<"Not valid";
}
}
};
int main()
{
data t;
t.enter();
t.divid();
return 0;
}
