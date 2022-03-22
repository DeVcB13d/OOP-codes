#include<iostream>
using namespace std;

int main()
{
    int num[] = {13,21,33,42,16};
    int *ptr;
    int i;
    cout << "The array values are : \n";
    for(int i = 0;i<5;i++)
    {
        cout << num[i] << endl;
    }
    ptr = num;
    cout << "\nPvalue = " << *ptr<<endl;
    ptr++;
    cout << "\nPvalue = " << *ptr<<endl;
    ptr--;
    cout << "\nPvalue = " << *ptr<<endl;
    ptr+=3;
    cout << "\nPvalue = " << *ptr<<endl;
}