#include <iostream>
using namespace std;

class Publication
{
  char title[20];
  int price;
  public:
  void getdata();
  void display();
};
void Publication::getdata()
{
    cout<<"Enter Title: "<<endl;
    cin>>title;
    cout<<"Enter price: "<<endl;
    cin>>price;
}
void Publication::display()
{
    cout<<"Title: "<<title<<endl;
    cout<<"Price: "<<price<<endl;
}
class Book:public Publication
{
    int pagecount;
    public:
    void getpage();
    void showpage();
};
void Book::getpage()
{
    getdata();
    cout<<"Enter page count:"<<endl;
    cin>>pagecount;
    try
    {
        if(pagecount==0)
        throw pagecount;
    }
    catch(int)
    {
        cout<<"page is not equal to 0"<<endl;
        getpage();
    }
}
void Book::showpage()
{
    display();
    cout<<"Page count:"<<pagecount<<endl;
}
class Tape:public Publication
{
    float time;
    public:
    void gettime();
    void showtime();
};
void Tape::gettime()
{
    getdata();
    cout<<"Enter Time: "<<endl;
    cin>>time;
}
void Tape::showtime()
{
    display();
    cout<<"Time:"<<time<<endl;
}
int main()
{
    Publication p;
    Book b; 
    Tape t;
    int ch;
    do
    {
        cout<<"\nMENU \n1.Book \n2.Tape \n3.Exit";
        cout<<"\nEnter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            b.getpage();
            b.showpage();
            break;
            case 2:
            t.gettime();
            t.showtime();
            break;
            case 3:
            cout<<"End of Program!!";
            exit(0);
        }
    }while(ch!=3);
        return 0;
}
