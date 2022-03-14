#include<iostream>
using namespace std ;

int main()
{
    int B[10];
    int *a = B;
    int *at = a;
    for(int i = 0;i < 10;i++)
    {
        *a  = i*i;
        cout << "done ";
        a++;
    }
    for(int i = 0;i < 10;i++)
    {
        cout << *at << " ";
        at++;
    }
}