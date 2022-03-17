#include <iostream>
using namespace std ;

class student 
{
    protected:
        int Rno ;
    public:
        void getrno(int r){Rno = r;}
        void showrno(){cout << "Roll No :" << Rno << "\n";}
};

class test:public student 
{
    protected:
        int S1,S2;
    public:
        void getmarks(int a,int b){
            S1 = a ; S2 = b ;
        }
        void showmarks(){
            cout << "Subject 1 :" << S1 << "\n" ;
            cout << "Subject 2 :" << S2 << "\n" ;
        }
};

class result:public test 
{
    public:
    void display(void){
        showrno();
        showmarks();
        float total = S1 + S2 ;
        cout << "Total : " << total << "\n";
    }
};

int main()
{
    result s ;
    s.getrno(13);
    s.getmarks(12,12);
    s.display();
    return 0;
};