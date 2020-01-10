#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
int main()
{
vector<int> v{10,5,4,2,11};
vector<int>::iterator it;
for(it=v.begin();it!=v.end();++it)
{
cout<<*it<<endl;
}
return 0;
}
