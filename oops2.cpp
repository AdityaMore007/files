#include <iostream>
#include<fstream>
using namespace std;
class Employee
{public:
char nm[20];
string id;
double salary; void accept()
{cout<<"entre name "<<endl;
cin>>nm;
cout<<"enter id"<<endl;
cin>>id;
cout<<"enter salary"<<endl;
cin>>salary;}
void display()
{cout<<"name is "<<nm<<endl;
cout<<"id is "<<id<<endl;
cout<<"salary is"<<salary<<endl;}};
int main(){
Employee e[5];
fstream f;
int i,n;
f.open("sakshi.txt");
cout<<"how many records do u want to enter"<<endl;
cin>>n;
cout<<"enter the informartion"<<endl;
for (int i=0;i<n;i++)
{e[i].accept();
f.write((char*)&e[i],sizeof e[i]);}
f.open ("sakshi.txt",ios::in);
cout<<"info as follows:"<<endl;
for(i=0;i<n; i++)
{f.write ((char*)&e[i],sizeof e[i]);
e[i].display();}
f.close();}
