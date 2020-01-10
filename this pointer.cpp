#include<iostream>
using namespace std;
class data
{
int a;
public:
    data()
    {

    }
data(int a)
{
this->a=a;//when same name
}
data great(data t)
{
if(t.a>a)
{
return t.a;
}
else{
return *this;//also used to return value
}
}
void show()
{
cout<<a;
}
};
int main()
{
data t1(10),t2(20);
data t3;
t3=t1.great(t2);
t3.show();
return 0;
}
