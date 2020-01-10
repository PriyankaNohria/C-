#include<iostream>
using namespace std;
class bill
{
private:
int price=100;
public:
int quan;
public:
void enter()
{
cin>>quan;}
void pay(){
cout<<price<<quan;}
};
int main()
{
bill d1;
d1.enter();
d1.pay();
return 0;
}
