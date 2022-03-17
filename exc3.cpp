#include<iostream>
#include <exception>
#include <vector>
using namespace std ;

double zerodivision(float x,float y)
{
    if(y==0)
    {
        throw ("Division By Zeroboooo\n");
    }
    return (x/y);
}

int main()
{
    vector <int> V ;
    V.push_back(0);
    V.push_back(1);
    try
    {
        V.at(1);
    }
    catch (exception &e)
    {
        cout << "HAHAH\n";
    }

    try
    {
        int c = zerodivision(1,0);
        cout << "Result = " << c;
    }
    catch(const char* message)
    {
        cout << message << "\n";
    }
}
