#include<iostream>
#include<set>
using namespace std;
int main()
{
set<int> s{1,2,3,4,5,10,11,12};
for(auto it=s.begin();it!=s.end();it++)
{
cout<<*it<<endl;
}
set<int>::iterator it1,it2;
it1=s.begin();
it2=s.end();
--it2;
--it2;
s.erase(it1,it2);
cout<<"After clear : "<<endl;
for(auto it=s.begin();it!=s.end();it++)
{
cout<<*it<<endl;
}
return 0;
}
