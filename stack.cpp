#include<iostream>
#include<stack>
using namespace std;
void show(stack<int> sq)
{
while(!sq.empty())
{
cout<<sq.top()<<endl;
sq.pop();
}
cout<<"\n";
}
int main()
{
stack<int> s;
s.push(10);
s.push(5);
s.push(30);
s.push(12);
cout<<"The stack is : "<<endl;
show(s);
cout<<"Size : "<<s.size()<<endl;
cout<<"Top : "<<s.top()<<endl;
cout<<"After pop : "<<endl;
s.pop();
show(s);
return 0;
}
