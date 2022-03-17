#include<iostream>
using namespace std;

int main()
{
    int l[] = {3,45,93,15,86,3,12,5,18};
    int len = sizeof(l)/sizeof(l[0]); // store the size of the array
    int lar = l[0];
    int slar;
    for(int i = 0 ; i < len ; i++) //for i = 1 to len
    {
        int elem = l[i];
        if (elem > lar)
        {
            slar = lar ;
            lar = elem ;
        }
        else if (elem > slar)
        {
            slar = elem ;
        }
    }
    cout << "The second largest element is " << slar << endl ;
    return 0;
}

