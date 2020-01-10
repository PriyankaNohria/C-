#include<iostream>
using namespace std;
template<typename X>
X disp(X a,X b)
{
return a+b;
}
int main()
{
cout<<disp(3,4)<<endl;
cout<<disp(2.3,4);
return 0;
}
