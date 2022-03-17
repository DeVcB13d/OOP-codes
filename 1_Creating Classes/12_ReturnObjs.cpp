// Returning objects
#include <iostream>
using namespace std ;

class complex{
    float real ;
    float imag ;
    public:
        void input(float r , float i){
            real = r ;
            imag = i ;
        }
        friend complex sum(complex , complex);
        void show(void);
};

void complex::show(void){
    cout << real << " + " << imag << " j" << endl ;
} //do this for negative also

complex sum(complex c1 , complex c2){
    complex c3 ;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag ;
    return c3 ;
}

int main()
{
    complex A,B,C ;
    A.input(3.14,5.65);
    B.input(2.25,1.23);
    C = sum(A,B);
    
    cout << "A = ";
    A.show();
    cout << "B = ";
    B.show();
    cout << "C = ";
    C.show();
    return 0 ;

}