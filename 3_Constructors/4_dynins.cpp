#include<iostream>
using namespace std ;


class fixeddeposit{
    long int pamount ;
    int years ;
    float rate ;
    float rvalue ;
    public:
        fixeddeposit(){}
        fixeddeposit(long int p , int y , float r = 0.15){
            pamount = p;
            years = y ;
            rate = r ;
            rvalue = p*y*r ;
        };
        fixeddeposit(long int p ,int y , int r){
            pamount = p;
            years = y ;
            rate = r ;
            float r2 = r /100 ;
            rvalue = p*y*r2;
        }
        void display(void){cout << "interest = " << rvalue;}
};

// do the assignments also
int main()
{
    // declare variables
    int p,y,r,rt;

    cin >> p >> y >> r ;// r is int
    fixeddeposit fdt(p,y,r);
    fdt.display();
    cin >> p >> y >> rt ; //r is float
    fixeddeposit fdt2(p,y,rt);
    fdt2.display();
    cin >> p >> y ;
    fixeddeposit fdt3(p,y);
    fdt3.display();
}
