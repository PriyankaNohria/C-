#include<iostream>
#include<map>
using namespace std;
int main()
{
multimap<int,int> m{{12,30},{34,50},{34,60},{40,90}};
for(auto it=m.begin();it!=m.end();it++)
{
cout<<it->second<<endl;
}
cout<<m.size()<<endl;
cout<<m.max_size()<<endl;
m.erase(12);
for(auto it=m.begin();it!=m.end();it++)
{
cout<<it->second<<endl;
}
return 0;
}
