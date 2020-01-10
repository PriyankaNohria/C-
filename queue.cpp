#include<iostream>
#include<queue>
using namespace std;
void show(queue<int> qq)
{
while(!qq.empty())
{
cout<<qq.front()<<" ";
qq.pop();
}
cout<<endl;
}
int main()
{
queue<int> q;
q.push(10);
q.push(3);
q.push(30);
q.push(5);
show(q);
cout<<"size : "<<q.size()<<endl;
cout<<"front : "<<q.front()<<endl;
cout<<"Back : "<<q.back()<<endl;
cout<<"After pop : "<<endl;
q.pop();
show(q);
return 0;
}
