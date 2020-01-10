#include<iostream>
#include<list>
using namespace std;
int main()
{
list<int> l{1,2,3,4,5};
l.push_back(10);
l.push_front(20);
for(list<int>::iterator it=l.begin();it!=l.end();it++)
{
cout<<*it<<endl;
}
l.pop_back();
l.pop_front();
cout<<"After pop"<<endl;
for(list<int>::iterator it=l.begin();it!=l.end();it++)
{
cout<<*it<<endl;
}
cout<<l.size()<<endl;
if(l.empty())
{
cout<<"True";
}
else{
cout<<"False";
}
return 0;
}
