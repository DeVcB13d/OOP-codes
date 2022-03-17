//program to check for an armstrong number

#include <iostream>
using namespace std ;


bool checkarms(int x2) // function to check for an armstrong number
{
   int tempx = x2;
   int arms = 0; 
   while (tempx != 0) // Extracting digits from the armstrong number
   {
       int rem ; //remainder
       rem = tempx % 10 ;
       tempx = tempx / 10 ;
       arms = arms + (rem*rem*rem) ;//add cube of digits 
   }
   if ( x2 == arms )
   {
       return true;
   }
   else 
   {
       return false;
   }
}

int main()
{
    int num;
    cout << "ENTER AN NUMBER: ";
    cin >> num;
    if (checkarms(num))
    {
        cout<<num << " is an armstrong number" << endl;
    }
    else
    {
        cout << num << " is not an armstrong number " << endl;
    }
    return 0;

}
