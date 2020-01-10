#include<iostream>
#include<string.h>
using namespace std;
class data
{
char str[50];
int j=0;
public:
void enter(char a[50])
{
    int i=0;
while(a[i]!='\0')
{
str[i]=a[i];
i++;
j++;
}
str[i]='\0';
}
void rev()
{
char str1[50];
int len,i=0;
i=0;
while(j>=0)
{
str1[i]=str[j-1];
i++;
j--;
}
cout<<str1;
}};
int main()
{
data t;
char a[50];
cin>>a;
t.enter(a);
t.rev();
return 0;
}
