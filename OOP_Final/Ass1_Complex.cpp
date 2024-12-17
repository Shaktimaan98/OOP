#include <iostream>
using namespace std;

class complex 
{
  public:
  int real,img;
  complex()
  {
    real=0;img=0;
    cout<<"Default constructor value:- "<<real<<"+"<<img<<"i"<<endl;
  }
  complex operator+(complex b)
{
  complex temp;
  temp.real=real+b.real;
  temp.img=img+b.img;
  cout<<"Addition is :- "<<temp.real<<"+"<<temp.img<<"i"<<endl;
}
complex operator*(complex b)
{
  complex temp;
  temp.real=(real*b.real)-(img*b.img);
  temp.img=(real*b.img)+(img*b.real);
  cout<<"Multiplication is :- "<<temp.real<<"+"<<temp.img<<"i"<<endl;
  }

  friend ostream &operator<<(ostream &output,complex &m);
  friend istream &operator>>(istream &input, complex &m);
  };

  ostream &operator<<(ostream &output, complex &m)
  {output<<endl<<m.real<<"+"<<m.img<<"i"<<endl;
  return output;
  }

  istream &operator>>(istream &input,complex &m)
  {input>>m.real>>m.img;
  return input;
  }

int main (){

complex a;
cout<<"Enter First Complex Number:- "<<endl;
cin>>a;
complex b;
cout<<"Enter second complex number:- "<<endl;
cin>>b;
cout<<"first complex number :- "<<endl;
cout<<a;
cout<<"second complex number :- "<<endl;
cout<<b;
complex c=a+b;
complex d=a*b;
return 0;

}