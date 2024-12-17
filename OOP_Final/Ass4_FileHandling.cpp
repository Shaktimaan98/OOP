#include <iostream>
#include<fstream>
using namespace std;

class student
{
    public:
    char name[20],div;
    int rollno;

    void getdata()
    {
        cout<<"Entr Name :- ";
        cin>>name;
        cout<<"Enetr Roll No :- ";
        cin>>rollno;
        cout<<"Enter Div:- ";
        cin>>div;
    }
    void show()
    {
        cout<<"Name:- "<<name;
        cout<<"Roll No:- "<<rollno;
        cout<<"Division:- "<<div;
    }
};

int main (){

int n;
cout<<"How Manu Number OF Students:- ";
cin>>n;

fstream file;
//file.open("C:\Users\Admin\Desktop\tut.txt",ios::out);

student s[10];
for(int i=0;i<n;i++)
{
    s[i].getdata();
    file.write((char*)&s[i],sizeof s[i]);
}
cout<<endl;
file.close();

for(int i=0;i<n;i++)
{
    file.read((char*)&s[i],sizeof s[i]);
    s[i].show();
}
file.close();

    

  return 0;
}



