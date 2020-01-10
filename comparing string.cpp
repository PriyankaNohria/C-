#include<iostream>
using namespace std;
class data
{
char str1[50],str2[50];
int l1=0,l2=0;
public:
void enter(char a[50],char b[50])
{
    int i=0;
while(a[i]!='\0')
{
str1[i]=a[i];
i++;
l1++;
}
str1[i]='\0';
i=0;
while(b[i]!='\0')
{
str1[i]=a[i];
i++;
l2++;
}
}
void compare()
{
if(l1==l2)
{
cout<<"Strings Are Equal";
}
else
{
cout<<"Strings Are not Equal";
}
}
};
int main()
{
data t;
char a[50],b[50];
cout<<"Enter first str : ";
cin>>a;
cout<<"Enter second str : ";
cin>>b;
t.enter(a,b);
t.compare();
return 0;
}
