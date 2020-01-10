#include<iostream>
#include<string.h>
using namespace std;
class student
{
int roll;
char ch[50];
public:
void get(int x,char y[50])
{
roll=x;
strcpy(ch,y);
}
void putdata()
{
cout<<roll<<endl<<ch;
}
};
int main()
{
student obj;
student *p;
p=&obj;
(*p).get(10,"adi");
p->putdata();
return 0;
}
