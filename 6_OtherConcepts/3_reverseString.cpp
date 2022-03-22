#include<iostream>
using namespace std;

int main()
{
    const char *str = "alpha";
    char *str2 = new char[6];
    for(int i = 0;i<5;i++)
    {
        str2[i] = str[5-i];
    }
    cout << str << endl;
    cout << str2 << endl;
    return 0;
}