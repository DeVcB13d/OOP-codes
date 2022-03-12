#include<iostream>
using namespace std;

class A
{
    int x;
    public:
        A(int i){
            x = i;
            cout << "A is called\n";
        }
};

class B : public A
{
    int y;
    public:
        B(int i,int j):A(i)
        {
            y = j;
            cout << "B is called\n";
        }
};

class C : public B
{
    int z;
    public:
        C(int i,int j,int k):B(i,j)
        {
            z = k;
            cout << "C is called\n";
        }
};

int main()
{
    C c(1,2,3);
    return 0;
}