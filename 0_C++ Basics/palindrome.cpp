#include <iostream>
using namespace std;

int checkpalindrome(int x1)
{
    int rev = 0;
    int x2 = x1;
    while (x2 != 0) //execute this till x2 is zero
    {
        int rem; // variables to store remainder
        rem = x2 % 10; //extracting digit at 1st positon
        x2 = x2 / 10; //removing the extracted digit
        rev = rev * 10 ;
        rev = rev + rem ;// to make the digits reversed

    }
    if (rev == x1) // if reverse num is same as input
    {
        cout<< x1 << " is a palindrome" << endl;
    }
    else
    {
        cout << x1 << " is not a palindrome" << endl;
    }
    return 0;
}

int main()
{
    int x;
    cout << "ENTER THE NUMBER TO CHECK  :" ;
    cin >> x;
    cout<<checkpalindrome(x)<<endl;
    return 0;


}
