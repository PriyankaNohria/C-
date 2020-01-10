 #include<iostream>
using namespace std;
class data
{
int num;
public:
void enter()
{
cout<<"Enter the number : ";
cin>>num;
}
void prime()
{
int i=0,flag=0;
while(i!=num)
{
if(i==0||i==1)
{
flag=1;
}
else{
for(int j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if(flag==0)
{
cout<<i<<endl;
}}
flag=0;
i++;
}
}
};
int main()
{
data t;
t.enter();
t.prime();
return 0;
}
