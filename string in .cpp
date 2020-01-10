#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char str1[]="Priyanka Nohria";
char str2[]="Priyanka";
if(strstr(str1,str2))
    {
cout<<"Yes";
}
else{
    cout<<"No";
}
return 0;
}
