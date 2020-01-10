#include<iostream>
using namespace std;
class test
{
public:
operator string()
{
return "type_conversion";
}
};
int main()
{
test t;
string s=t;
cout<<s;
return 0;
}
