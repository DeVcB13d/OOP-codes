#include <iostream>
using namespace std ;

class M {
    int x , y ;
    public:
        void set_xy(int a , int b){
            x = a ;
            y = b ;
        }
        friend int sum(M m);
};

int sum(M m)
{
    int M::*px = & M::x ; 
    // px points to x hence we need scope res operator
    int M::*py = & M::y ;
    M *pm = &m ; 
    // pm is pointer variable pointing to M data type
    int s = m.*px + pm ->*py ;
    return s ;
}

int main()
{
    M n ;
    void (M::*pf)(int  , int ) = &M::set_xy ; 
    // pf is a pointer to a function 
    (n.*pf)(10,20); 
    //pointer to a memeber fn 
    cout << "sum = " << sum(n) << endl ;
    M*op = &n; // op is pointer pointing to object n 
    (op ->*pf)(30,40);  
    cout << "sum = " << sum(n) << endl ;
    return 0 ;
}






// m.*px - px points to x *px returns x valur
// pm - pointer to an object
// pm ->* 
// '->*' :used when object and data members are pointers
// ".*" : 
/*  These are all same ways to acess the same 
    memory location
    m.x 
    m.*px 
    pm ->* px
*/