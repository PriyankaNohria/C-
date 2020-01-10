#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
class miss
{
int a[50],n;
public:
void input()
{
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
}
void find()
{
int b[50]={0},j=0,c[50]={0},lar;
lar=a[0];
for(int i=0;i<n;i++)
{
if(lar<a[i])
{
lar=a[i];
}
}
for(int i=0;i<n;i++)
{
b[a[i]]++;
}
for(int i=0;i<lar;i++)
{
 if(b[i]==0)
 {
 c[j]=b[i];
     j++;
 }
}
 int larg=c[0];
for(int k=0;k<j;k++)
{
 if(larg<c[k])
 {
 larg=c[k];
 }
}
    cout<<larg;
}
};
int main() {
    miss a1;
a1.input();
a1.find();
    return 0;
}
