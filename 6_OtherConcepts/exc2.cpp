#include<iostream>
#include <exception>
using namespace std ;

int main()
{
    try {
        int name;
        cout << "Name : ";
        cin >> name;
        cout << "Name :";
        cout << name;
    }
    catch (exception &e)
    {
        cout << "Standard exception " << e.what() << endl;
    }
    return 0;
}

