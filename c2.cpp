//copyconstructor 2
#include <iostream>
using namespace std ;

class code {
    int cd;
    public:
        code(){}
        code(int a){cd = a;}
        code(const code &x ){cd = x.cd;}
        void display(void){
            cout << cd << "\n";
        }
};

int main()
{
    code A(520);
    code B(A);
    code C = A ; //Here also copy constructor is called
    code D ;
    D = A ; //this is not a copy constructor, only assignment oprator is invoked
    A.display();
    B.display();
    C.display();
    D.display();
    return 0 ;
}