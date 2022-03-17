#include<iostream>
using namespace std ;

int fact(int x)
{
    if (x == 1)
    {
        return x;
    }
    else
    {
        return x * fact(x-1);
    }

}

int main()
{
    int z;
    cout << "Enter a number ";
    cin >> z;
    cout << "The factorial of "<< z << " is "<< fact(z);
    cout<<"\n";
    return 0;
}