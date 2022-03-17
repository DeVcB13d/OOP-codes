#include <iostream>
using namespace std ;

class abc{
    int a , b ;
    public:
        void get(int x, int y ){
            a = x ;
            b = y ;
        }
        friend int sum(abc x) ;
};

int sum(abc x){
    int abc::*pa = &abc::a ;
    int abc::*pb = &abc::b ;
    abc *px = &x ;
    int sum = x.*pa + px->*pb ;
    return sum ;
}

int main()
{
    void (abc::*pf)(int , int) = &abc::get;
    abc l;
    (l.*pf)(10,20);
    cout << "sum = " << sum(l) << "\n" ;
    abc *pl = &l ; 
    (pl->*pf)(10,30);
    cout << "sum = " << sum(*pl) << "\n" ;
    return 0 ;
}


