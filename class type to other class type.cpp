#include<iostream>
using namespace std;
class Item;
class product
{
int a,b;
public:
void get(int x,int y)
{
a=x;
b=y;
}
int getM()
{
return a;
}
operator int()
{
return b;
}
};
class Item
{
 int m,n;
 public:
 Item(){}
 Item(product p)
 {
 m=p.getM();
 n=p;
 }
 void show()
 {
 cout<<m<<" "<<n;
 }
};
int main()
{
Item i1;
product p1;
p1.get(10,20);
i1=p1;
i1.show();
return 0;
}
