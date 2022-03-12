#include<iostream>
using namespace std ;

class A
{
    int x,y;
    public:
        A(){}
        A(int i,int j){x = i;y = j;}
        void show()
        {
            cout << "x = " << x << "\n";
            cout << "y = " << y << "\n";
        }
};

int main()
{
    A *obj ; //Declared a pointer
    obj = new A[3];
    for(int i = 0; i<3;i++)
    {
        obj[i] = A(i,i*2);
        obj[i].show();
    }
    return 0;
}