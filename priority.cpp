#include<iostream>
#include<queue>
using namespace std;
void show(priority_queue<int> a)
{
while(!a.empty())
{
cout<<a.top()<<" ";
a.pop();
}
cout<<"\n";
}
int main()
{
priority_queue<int> p;
p.push(10);
p.push(2);
p.push(30);
p.push(5);
show(p);
cout<<"Size : "<<p.size()<<endl;
cout<<"Top : "<<p.top()<<endl;
cout<<"After Pop : "<<endl;
p.pop();
show(p);
return 0;
}
