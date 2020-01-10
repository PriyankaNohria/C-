#include<iostream>
using namespace std;
int main()
{
int *pc,c;
c=5;
cout<<"address of (&c) : "<<&c;
cout<<endl<<"value of c : "<<c<<endl;
pc=&c;
cout<<"address of (pc) : "<<pc;
cout<<endl<<"content stored in pc(*pc) : "<<*pc<<endl;
return 0;
}
