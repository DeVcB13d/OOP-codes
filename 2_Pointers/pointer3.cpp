#include<iostream>
using namespace std ;

//Pointers to objects

class item
{
    int code;
    float price;
    public:
        void getdata(int a,float b)
        {
            code = a ; price = b ;
        }
        void showprice()
        {
            cout<<"Code = "<<code<<endl;
            cout<<"Price = "<<price<<endl;
        }
};

int main()
{
    item *p = new item[10];
    item *d = p ;
    int x,y;float i;
    for(int i = 0;i<10;i++)
    {
        cout << "Enter code and size :\n";
        cin >> x >> y ;
        p->getdata(x,y);
        p++;
    }
    for(int i=0;i<10;i++){
        d->showprice();
        d++;
    }
    return 0;
}