#include<iostream>
using namespace std ;

//This is for multipath inheritance or hybrid inheritance

class G
{
    int g ;
    public:
    G(int i){
        i = g;
        cout << "G called\n";
    }
};
//Declaring clasess as virtual prevents them from getting inherited twice
class P1:virtual public G
{
    int x ;
    public:
    P1(int i,int j):G(i){
        x = j;
        cout << "P1 called\n";
    }    
};

class P2:virtual public G
{
    int y;
    public:
    P2(int i,int k):G(i){
        y = k;
        cout << "P2 called\n";
    }
};

class C : public P1,public P2
{
    int p;
    public:
    C(int i,int j,int k,int l):P1(j),P2(k),G(i)
    {
        p = i ;
        cout << "C called\n";
    }
};

int main()
{
    C obj1(1,2,3,4);
}
