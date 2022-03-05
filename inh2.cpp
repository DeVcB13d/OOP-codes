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

class D: private B
{
    int c ;
    public :
    void mul(void);
    void display(void);
};

void B::get_ab(void)
{
    cout << "Enter values of A and B ";
    cin >> a >> b ;
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
    get_ab();
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
    d.mul();
    d.display();
    return 0 ;
}