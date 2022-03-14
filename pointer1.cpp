#include<iostream>
using namespace std ;

class A 
{
    int x ;
    public:
        void show(){cout << "x = "<<x<<"\n";}
        A(int a){x = a;}
};

class B : public A
{
    int y ; 
    public:
        B(int i,int j):A(i){y = j;}
        void show(){cout<<"y = "<<y<<"\n";}
};

int main()
{
    B b(20,10);
    b.show();
    b.show();
}