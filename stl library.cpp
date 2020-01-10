#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
vector<int>gl;
for(int i=1;i<=10;i++)
gl.push_back(i*10);
cout<<"gl:"<<gl[2]<<endl;
cout<<"gl[4]:"<<gl.at(4)<<endl;
cout<<"front:"<<gl.front()<<endl;
cout<<"  "<<gl.back()<<endl;
int *pos=gl.data();
cout<<"  "<<*pos<<endl;
gl.pop_back();
cout<<gl[5];
return 0;
}
