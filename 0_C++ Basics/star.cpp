// program to print a star triangle

#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "enter the number of rows" ;
    cin >> rows;

    // loop to control number of rows
    for( int i = 1 ; i <= rows ; i++ ) // for i in range 1 to n
    
    {
        //inner loop1 to print space
        for (int j = 1; j<= rows - i ; j++ ) // for i in range 1 to n-i
        {
            cout << " ";
        }


        //inner loop2 to print stars
        int n = ((2*i)-1);
        for (int k = 1 ; k <= n ; k++ ) // for k in range 1 to 2i-1
        {
            cout << "*";
        }
        cout<<"\n";
    }
    return 0 ;

}