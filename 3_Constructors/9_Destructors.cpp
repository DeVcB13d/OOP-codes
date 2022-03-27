#include<iostream>
using namespace std;
//Destructors are called whenever a function
//gets out of scope
class alpha
{
    static int count;
    public:
        alpha()
        {
            count++;
            cout << "Objects = " << count << endl;
            cout<<"Constructor called\n";
        }
        ~alpha()
        {
            cout << "Destructor called\n";
            count--;
            cout << "Objects = " << count << endl;
        }
};

int alpha::count = 0;

int main()
{
    //Scope of a variable is whitin the curly braces
    alpha a1;
    {
        alpha a2;
        alpha a3;
        {
            alpha a5;
        }
    }
    alpha a4;
}