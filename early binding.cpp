#include <iostream>
using namespace std;
class Animals
{
public:
virtual void sound()
{
cout << "This is parent class" << endl;
}
};
class Dogs : public Animals
{
public:
void sound()
{
cout << "Dogs bark7" << endl;
}
};
int main()
{
Animals *a;
Dogs d;
a= &d;
a -> sound();   //  early binding
return 0;
}

