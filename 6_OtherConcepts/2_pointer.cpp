#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    char *ptr[3] = {"alpha","beta","gamma"};
    for(int i = 0;i<3;i++)
    {
        cout << ptr[i] << "\n";
    }
}

