// program to fins the second largest element in a list
/*
1. l and sl
2. store first element to l
3. for i in list ;
    if i>sl:
        if i > l:
            l=i
        sl = i

*/
#include <iostream>
using namespace std;

int slelmnt( int l1 )
{
	int l,sl;
	int arrSize = sizeof(l1[])/sizeof(l1[0]); // to store the size of the list
	int sl = l1[0] ;// the first element of the list is assumed as the largest
	
    for(int k=0; k<arrSize; k++)
    {
        i = l1[k];
        if (i>sl)
        {
            if (i>l)
            {
                l = i;
            }
            else
            {
                sl = i;
            }
        }
    }
    return sl
}

int main()
{
    int list[] = {1,2,54,223,13,76,587,564,45};
    cout << "The largest element of " << list[] << " is " << slelmnt(list[9]) << "\n" ;
    return 0;
}

