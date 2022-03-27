#include<iostream>
using namespace std;

int& min(int &a,int &b) //here a reference to the object is returned
{
    if (a>b) return b;
    else return a;
}

int main()
{
    int x = 5;
    int y = 6;
    cout << x << " " << y << endl;
    x = min(x,y);
    cout << x << " " << y << endl;
    return 0;
    
}