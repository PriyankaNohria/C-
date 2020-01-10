#include<iostream>
#include<string.h>
using namespace std;
class data
{
char str[50];
public:
data()
{
cin>>str;
}
void rotating()
{
int len,i,j,k;
char temp;
len=strlen(str);
for(i=0;i<len;i++)
{
for(j=i+1;j<len;j++)
{
cout<<str[j];
}
for(k=0;k<=i;k++)
{
cout<<str[k];
}
cout<<endl;
}

}};
int main()
{
data t;
t.rotating();
return 0;
}
