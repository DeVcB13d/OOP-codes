#include<iostream>
using namespace std ;

class complex {
    float x ,y;
    public:
        complex() {}
        complex(float a){x = y = a ;}
        complex (float real , float imag){
            x = real ;
            y = imag ;
        }
        friend complex sum(complex , complex) ;
        void show(){cout << x << "+" << y <<"j\n" ;}
};

complex sum(complex c1 , complex c2){
    complex c3 ;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y ;
    return c3 ;
}

int main()
{
    complex A(2.8,3.9);
    complex B(2.4) ;
    complex C ;
    C = sum(A,B);
    cout << "A = ";
    A.show();
    cout << "B = ";
    B.show();
    cout << "C = ";
    C.show();
    return 0;
}