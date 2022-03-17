// program to find primr numbers betwwen a given range

#include <iostream>
using namespace std ;

//Function to check wheter the inputted number is prime or not
int isprime(int x1)
{
    int counter = 0;        // variable to store number of factors
    for(int k = 2 ; k < x1 ; k++) // k will take values from 2 to x 
    {
        if (x1%k==0)
        { 
            counter ++ ;        // If the number gets atleast 1 factor its not prime       
        }
    }
    if (counter == 0)           // there are no factors
    {
        return 1 ;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    int range;
    cout << "enter the range";
    cin >> range;
    for (int i = 2; i<=range ; i++) // Access integers in the range 1 to range
    {
        if (isprime(i) == 1)
        {
            cout << i << ",";
        }
    }
    return 0;
}