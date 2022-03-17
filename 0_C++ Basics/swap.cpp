// Program to two variable
#include <iostream>
using namespace std ;
int main()
{
    int x = 20;    
    int y = 10;
    cout<< "intial values" << endl;
    cout << "x =" << x << " y =" << y << endl;
    int z = x; // z is a temporary variable 
    x = y;
    y = z;
    cout << "After swapping" <<endl;
    cout << "x =" << x << " y =" << y << endl;
}