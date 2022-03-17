#include<iostream>
using namespace std ;

void fib(int x)
{
    int a = 0;
    int b = 1;
    for(int i = 0 ; i < x ; i++)
    {
        cout << a << ",";
        int k = b; //tempvariable
        b = a + b;
        a = k;   
    }  
    cout << "\n"  ;
}

int main()
{
    int q ;
    cout << "Enter amount of fibo nums to print : ";
    cin >> q ;
    fib(q);
    return 0;
}