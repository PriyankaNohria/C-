#include<iostream>
using namespace std;
class airlines;
class flight
{
int fn;
char dp[50],ap[50];
public:
void enter()
{
cin>>fn>>dp>>ap;
}
friend class airlines;
};
class airlines
{
    public:
void display(flight f)
{
cout<<"Flight No. : "<<f.fn<<endl<<f.dp<<endl<<f.ap;
}
};
int main()
{
flight f;
airlines a;
f.enter();
a.display(f);
return 0;
}
