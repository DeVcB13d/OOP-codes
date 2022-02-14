//working with pointers and classes
#include <iostream>
using namespace std ;

int main()
{
    int v[5] = {3,5,2,1,3,3};
    int *p1 = v ;
    int *p2 = &v[0];
    for(int i = 0 ; i<5 ;i++){
        cout << *p1 << *p2 << "\n";
        p1++;
        p2++;
    }
};