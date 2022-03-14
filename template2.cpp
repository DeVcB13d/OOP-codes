#include<iostream>
#include <cstring>
using namespace std ;

template <class T,class U,class V=char>

class A
{
    T var1;
    U var2;
    V var3;
    public:
        A (T v1,U u1,V v2)
        {
            var1 = v1;var2 = u1,var3 = v2;
        }
        void show()
        {
            cout << "var1 = " << var1 << endl;
            cout << "var2 = " << var2 << endl;
            cout << "var3 = " << var3 << endl;
        }
};


A <int,double> obj1(1,2,'J');
A <int,bool,float> obj2(1,false,2.3);

int main()
{
    obj1.show();
    obj2.show();
}