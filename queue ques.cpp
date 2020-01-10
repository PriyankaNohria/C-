#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
int size,x,y,z;
cout<<"Size of list : ";
cin>>size;
list<int> l;
for(int i=0;i<size;i++)
{
l.push_back(i+1);
}
list<int>::iterator it;
cout<<"List is : "<<endl;
for(auto it=l.begin();it!=l.end();it++)
{
cout<<*it<<" ";
}
cout<<endl;
list<int>::iterator it1;
it1=max_element(l.begin(),l.end());
cout<<"Maxi : "<<*it1<<endl;
l.insert(it1,4);
for(auto it=l.begin();it!=l.end();it++)
{
cout<<*it<<" ";
}
cout<<endl;
it1=min_element(l.begin(),l.end());
cout<<"Mini : "<<*it1<<endl;
l.insert(it1,5);
for(auto it=l.begin();it!=l.end();it++)
{
cout<<*it<<" ";
}
return 0;
}
