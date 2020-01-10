#include<iostream>
#include<map>
using namespace std;
int main()
{
map<int,string> m{{100,"Amit"},{123,"Amar"},{145,"rahul"},{155,"ruhi"},{165,"riya"}};
map<int,string>::iterator it;
for(it=m.begin();it!=m.end();++it)
{
cout<<it->second<<endl;
}
m.insert(pair<int,string>(175,"raj"));
cout<<"After insertion"<<endl;
for(it=m.begin();it!=m.end();++it)
{
cout<<it->second<<endl;
}
cout<<m.size()<<endl;
cout<<m.empty()<<endl;
m.erase(123,"Amar"));
for(it=m.begin();it!=m.end();++it)
{
cout<<it->second<<endl;
}
return 0;
}
