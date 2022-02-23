#include<iostream>
using namespace std ;

class complex{
    float x ;
    float y ;
    public:
        complex(){}
        complex(float real,float imag){
            x = real ;
            y = imag ;
        }
        friend complex operator+(complex,complex);
        void display(void);
};

complex operator+(complex c,complex d){
    return complex((d.x+c.x),(d.y+c.y));//creates a temporary object
}

void complex::display(void){
    cout << x << "+" << y << "i" << "\n";
}
int main()
{
    complex c1(3.6,4.8),c2(8.5,4.9),c3;
    c3 = c1 + c2 ;
    cout << "c1 =";
    c1.display();
    cout << "c2 =";
    c2.display();
    cout << "c3 =";
    c3.display();
    return 0 ;
}