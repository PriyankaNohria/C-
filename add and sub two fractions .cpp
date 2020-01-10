#include<iostream>
using namespace std;
class data
{
int num,deno;
public:
void enter()
{
cout<<"Enter nominator : ";
cin>>num;
cout<<"Enter denominator : ";
cin>>deno;
}
void display()
{
simplify();
cout<<num<<"/"<<deno<<endl;
}
void GCD();
void add(data,data);
void sub(data &,data &);
void mul(data *,data *);
};
void data:: simplify(void)
{
int res;
res=GCD(num,deno);
num=num/res;
deno=deno/res;
}
void data:: add(data t1,data t2)
{
num=t1.num*t2.deno+t2.num*t1.deno;
deno=t1.deno*t2.num;
display();
}
void data:: add(data &t1,data &t2)
{
num=t1.num*t2.deno-t2.num*t1.deno;
deno=t1.deno*t2.num;
display();
}
void data:: add(data *t1,data *t2)
{
num=t1->num*t2->deno-t2->num*t1->deno;
deno=t1->deno*t2->num;
display();
}
int data:: GCD(int a,int b)
{
for(int i=1;i<a&&i<b;i++)
{
if((a%i==0)&&(b%i==0))
{
res=i;
}
return res;
}
}
int main()
{
data t1,t2,t3;
t1.enter();
t2.enter();
cout<<"Result of Addition : ";
t3.add(t1,t2);
cout<<"Result of Subtraction : ";
t3.sub(t1,t2);
cout<<"Result of Multiplication : ";
t3.sub(&t1,&t2);
return 0;
}
