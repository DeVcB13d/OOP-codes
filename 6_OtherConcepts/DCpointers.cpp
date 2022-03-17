#include<iostream>
#include <cstring>
using namespace std ;

class BC
{
    public:
        int b;
        void show()
        {cout<<"b = "<<b<<"\n";}
};

class DC:public BC
{
    public:
    int d;
    void show()
    {cout << "b = "<<b<<"\nd = "<<d<<"\n";}
};

int main()
{
    BC *bptr;
    bptr = new BC;
    bptr ->b = 100;
    bptr -> show();
    bptr = new DC;
    bptr->b = 200;
    bptr->show();
    DC *dptr;
    dptr = (DC*)bptr;
    dptr -> d = 300;
    dptr ->show();
    ((DC*) bptr) ->d = 400;
    ((DC*) bptr) -> show();
}