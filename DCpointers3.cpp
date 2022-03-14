#include<iostream>
#include<cstring>
using namespace std ;

class media
{
    protected:
        char *title;
        float price;
    public:
        media(){}
        media(char *s,float a)
        {
            int l = strlen(s);
            title = new char[l+1];
            strcpy(title,s);
            price = a ;
        }
        virtual void display(){}
};

class tape : public media
{
    float time;
    public:
        tape(const char *s,float a,float t):media(s,a)
        {
            time = t;
        }
        void display();
};

class book : public media
{
    int pages;
    public:
        book(const char *s,float a,int p):media(s,p)
        {
            pages = a;
        }
        void display();
};

void book :: display()
{
    cout << "\n Title: " << title ;
    cout << "\n Pages: " << pages ;
    cout << "\n Price: " << price ;
}

void tape :: display()
{
    cout << "\n Title: " << title ;
    cout << "\n Time : " << time << "mins" ;
    cout << "\n Price: " << price ;
}

int main()
{
    book b1("oop",5,900);
    tape t1("ttp",22,600);
    media *mlist = new media [2];
    mlist[0]->display();
    mlist[1]->display() ;
    return 0;
}