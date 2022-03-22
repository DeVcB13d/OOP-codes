#include <iostream>
using namespace std;

class item
{
    int code;
    int price;
    public:
        void getdata(int a,int b)
        {
            code = a;price = b;
        }
        void show()
        {
            cout << "Code  = " << code << endl;
            cout << "Price = " << price << endl;
        }
        friend int sum(item a);
};

int sum(item x)
{
    int item::*pc = &item::code;
    int item::*ppr = &item::price;
    item *pit = &x;
    int s = x.*pc + pit->*ppr;
    return s;
}

int main()
{
    item i1;
    void (item::*pf)(int,int) = & item::getdata;
    (i1.*pf)(1,2);
    item *pi1 = &i1;
    (pi1->*pf)(1,3); 
}