#include <iostream>
using namespace std;
template <class T> T selection()
{T a[10],temp;
cout<<"enter the nos "<<endl;
for (int i = 0; i < 5; i++)
cin>>a[i];
for (int i=0;i<5;i++)
{for (int j=i+1;j<5;j++)
{if (a[i]>a[j])
{temp=a[i];
a[i]=a[j];
a[j]=temp;}}}
cout<<"sorted array is "<<endl;
for(int i=0;i<5;i++)
cout<<a[i]<<endl;}
int main(){
cout<<"enter the int values "<<endl;
selection<int>();
cout<<"enter the float values "<<endl;
selection<float>();}