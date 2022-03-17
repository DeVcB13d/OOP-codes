#include<iostream>
using namespace std;

//class invent2;

class invent1
{
    int code;
    int item;
    float price;
    public:
        invent1(int a, int b, float c){
            code = a ;
            item = b ;
            price = c ;
        }
        void putdata()
        {
            cout << "Code : " << code << "\n";
            cout << "Item : " << item << "\n";
            cout << "Price: " << price << "\n";
        }
        int getcode(){return code;}
        int getitem(){return item;}
        int getprice(){return price;}
        operator float(){
            return (item*price);
        }
        //operator invent2();
};

class invent2
{
    int code ;
    float value ;
    public:
        invent2()
        {
            code = 0 ;
            value = 0 ;
        }
        invent2(int x,float y)
        {
            code = x;
            value = y; 
        }
        //method 1 : constructor
        invent2(invent1 p) 
        {
            code = p.getcode();
            value = p.getitem() * p.getprice();
        }
        
        void putdata()
        {
            cout << "Code : " << code << "\n";
            cout << "value : " << value << "\n";
        }
};
/*
invent1::operator invent2()
{
    invent2 temp(code,price*item);
    return temp;
}*/
int main()
{
    invent1 S1(100,5,140.0);
    invent2 d1;
    float total_value;
    total_value = S1 ;
    d1 = S1;
    S1.putdata();
    d1.putdata();
    cout << "total = " << total_value << "\n";
    return 0 ;
}