#include <iostream>
using namespace std ;

class sample{
    int a ;
    int b ;
    public:
        void setvalue(int x,int y){
            a = x ;
            b = y ;
        }
    friend float mean(sample s);
};

float mean(sample s){
    return (s.a + s.b)/2.0;
}

int main()
{
    sample x ;
    x.setvalue(25,40);
    cout << "Mean value = " << mean(x) << "\n" ;
    return 0;

}