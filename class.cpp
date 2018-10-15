#include<iostream>
using namespace std;

class student
{
 private : int rollno; char name[25]; int n; float marks[15];  

 public : int t; void read(); void total(); void display();
};

void student::read()
{
 cout<<"Enter the Roll no. \n";
 cin>>rollno;
 cout<<"Enter the name of the student \n";
 cin>>name;
 cout<<"Enter the number of subjects \n";
 cin>>n;
}

void student::total()
{
 t=0;
 cout<<"Enter the marks out of 25 \n";
 for(int i=0;i<n;i++)
 {
  cout<<"Marks obtained in subject "<<i+1<<" is ";
  cin>>marks[i];
  t+=marks[i];
 }
}

void student::display()
{
 cout<<"Roll no.  "<<rollno<<"\n";
 cout<<"Name  "<<name<<"\n";
 cout<<"Total marks  "<<t<<"\n";
}

int main()
{
 student t;
 t.read();
 t.total();
 t.display();
 return 0;
}
