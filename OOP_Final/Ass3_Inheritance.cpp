#include<iostream>
using namespace std;

class publication
{
    public:
    char title[100];

    void getdata()
    {
        cout<<"Enter the title of book :- ";
        cin>>(title);
    }

    void show()
    {
        cout<<"Title :- "<<title<<endl;
    }
};

class price : public publication
{
    public:
    float price;

    void getprice()
    {
        cout<<"Enter the price:- ";
        cin>>price;
    }
    void showprice()
    {
        cout<<"Price :- "<<price<<endl;
    }
};

class time : public publication
{   
    public:
    float time;

    void gettime()
    {
        cout<<"Enter the play time in minutes :- ";
        cin>>time;
        try
        {
            if(time<=0)
            throw time;
        }
        catch(float)
        {
            cout<<"Invalid Timing Please Enter again"<<endl;
            gettime();
        }
    }
    int showtime()
    {
        cout<<"Timing :- "<<time<<endl;
    }
};

class count : public publication
{
    public:
    int count;

    void getcount()
    {
        cout<<"Enter The Count :- ";
        cin>>count;

        try
        {
            if (count<=0)
            throw count;
        }
        catch(int)
        {
            cout<<"Invalid Count Please Enter again"<<endl;
            getcount();
        }
        
    }

    void showcount()
    {
        cout<<"Count :- "<<count<<endl;
    }
};



int main()
{
    publication p;
    price pr;
    count c;
    time t;

    p.getdata();
    pr.getprice();
    c.getcount();
    t.gettime();
    p.show();
    pr.showprice();
    c.showcount();
    t.showtime();


    return 0;
}