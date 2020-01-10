#include<iostream>
using namespace std;
int main()
{
try{
int *myarray=new int[1000];
cout<<"allocated";
}
catch(exception& e)
{
cout<<"Standard : "<<e.what();
}
return 0;
}
