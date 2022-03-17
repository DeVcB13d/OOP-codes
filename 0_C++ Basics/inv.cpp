// To print inverted star triangle

#include<iostream>
using namespace std;

int main()
{
    int rows ;
    int space = 1;
    
    cout << "Enter the number of rows needed :" ;
    cin >> rows ;
    int rows1 = rows;
    // Main loop for printing rows
    for (int i = 1 ; i <= rows ; i++) //for  i = 1 to rows 
    {
        //inner loop 1 to print spaces
        for(int j = 1 ; j < space ; j++) 
        {
            cout << " ";
        }

        //inner loop 2 to print stars
        int lim = rows1 * 2  - 1;
        for(int k = 1 ; k <= lim ; k++  ) // for k = 1 to [rows1 * 2 - 1]
        {
            cout << "*";
        }
        cout << "\n"; // move to next line
        space ++;
        rows1 --;
    }   
    return 0;
}   