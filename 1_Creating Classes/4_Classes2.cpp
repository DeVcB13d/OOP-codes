#include<iostream>
using namespace std ;

class item
{   
    private:
        int num ;
        float cost ;
    public:
        void getdata(int a , float b );
        void putdata(void){
            cout << "num = " << num << "\n";
            cout << "cost = " << cost << "\n";
        }
};

void item::getdata(int a , float b )
{
    num = a;
    cost = b;
}

int main()
{
    item A , B ;
    A.getdata(1,3.03);
    B.getdata(2,3.56);

    A.putdata();
    B.putdata();
    return 0;

    
}