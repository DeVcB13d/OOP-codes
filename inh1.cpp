#include<iostream>
using namespace std;

class B 
{
    int a ;
    public:
        int b ;
        void get_ab(void);
        void show_a(void);
        int get_a(void);
};

class D: public B
{
    int c ;
    public :
    void mul(void);
    void display(void);
};

void B::get_ab(void)
{
    a = 5 ; b = 10 ;
}

int B::get_a(void)
{
    return a;
}

void B::show_a(void)
{
    cout << "a = " << a << "\n";
}

void D::mul(void)
{
    c = b*get_a();
}

void D::display(void)
{
    cout << "a = " << get_a() << "\n";
    cout << "b = " << b << "\n";
    cout << "c = " << c << "\n";
}

int main()
{
    D d ;
    d.get_ab();
    d.mul();
    d.show_a();
    d.display();
    d.b = 20 ;
    d.mul();
    d.display();
    return 0 ;
}