#include<iostream>
using namespace std ;
int C(int n,int r)
{
    int nm = 1; // to get numerator of nCr expression
    for(int x = 1 ; x <= r ; x++ ) // for x = 1 to r
    {
        nm = nm * n ;
        n -- ;
    }
    int dnm = 1;
    while ( r > 0 ) // To calculate (r!)
    {
        dnm = dnm * r;
        r -- ;
    }
    return nm / dnm ;

}
int main()
{
    int rows ;
    cout << "Enter the required number of rows : ";
    cin >> rows;
    int sf = rows / 1;

    // Main loop controlling the rows to be outputted
    for(int i = 0 ; i <= rows ; i++ )
    {
        //inner loop 1 to print space
        for(int j = 1 ; j <= (rows - i) ; j++) // for j = 1 to N-i
        {
            cout << " ";
        }
        //inner loop to print the numbers
        for(int k = 0 ; k <= i ; k++)
        {
            cout << C(i,k);
            cout << " ";
        }
        cout << "\n";
    }
    return 0;

}