#include<iostream>
using namespace std;
class data
{
public:
char first[50],last[50];
public:
void enter();
void vowel();
};
void data:: enter()
{
cout<<"enter of first name person : ";
cin>>first;
cout<<"enter of last name person : ";
cin>>last;
}
void data:: vowel()
{
int i=0,vow=0;
while(first[i]!='\0')
{
if(first[i]=='A'||first[i]=='a'||first[i]=='E'||first[i]=='e'||first[i]=='i'||first[i]=='I'||first[i]=='O'||first[i]=='o'||first[i]=='U'||first[i]=='u')
{
vow++;
}
i++;
}
cout<<"No. of vowels in first name are : "<<vow<<endl;
int vow1=0;
i=0;
while(last[i]!='\0')
{
if(last[i]=='A'||last[i]=='a'||last[i]=='E'||last[i]=='e'||last[i]=='i'||last[i]=='I'||last[i]=='O'||last[i]=='o'||last[i]=='U'||last[i]=='u')
{
vow1++;
}
i++;
}
cout<<"No. of vowels in last name are : "<<vow1<<endl;
cout<<"total no. of vowels : "<<vow+vow1;
}
int main()
{
data t;
t.enter();
t.vowel();
return 0;
}
