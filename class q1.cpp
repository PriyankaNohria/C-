#include<iostream>
using namespace std;
class data
{
int a[50],n;
public:
void enter(int b[50])
{
cout<"No. of elements in array : ";
for(int i=0;i<9;i++)
{
a[i]=b[i];
}}
void sorting()
{
 int temp;
for(int i=0;i<9-1;i++)
{
for(int j=0;j<(9-1)-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}
void operator +()
{
for(int i=0;i<9;i++)
{
a[i]=a[i]+1;
}
}
void show()
{
for(int i=0;i<9;i++){
cout<<a[i]<<endl;    }
}
};
int main()
{
data t;
int b[50]={30,34,28,14,58,72,89,4,51};
t.enter(b);
t.sorting();
t.show();
+t;
t.show();
return 0;
}
