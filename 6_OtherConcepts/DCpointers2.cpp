#include<iostream>
using namespace std ;

class BC
{
    public:
        void display(){cout << "Base Display\n";}
        virtual void show(){cout << "Base show\n";}
};

class DC : public BC
{
    public:
        void display(void){cout<<"DC Display\n";}
        void show(void){cout<<"DC Show\n";}
};

int main()
{
    BC *bptr;
    bptr = new BC;
    bptr->display();
    bptr->show();
    bptr = new DC;
    bptr ->display();
    bptr ->show();
}