#include<iostream>
using namespace std ;

void sort(int list[] , int size)
{
    cout << "Before sorting " << "\n";
    for(int x = 0 ; x < size; x++)
    {
        int w = list[x];
        cout << w << ",";
    }
    cout << "\n";
    //Outer loop to implement the sort 'size' times
    for(int i = 0; i < size ; i++ ) 
    {
        //inner loop to traverse array and exchange
        // 0 to size - 1  
        for(int j = 0 ; j < (size - 1) ; j++)
        {
            int e1 = list[j];
            int e2 = list[j + 1];
            if (e1 > e2)
            {
                // exchange the numbers
                list[j] = e2;
                list[j + 1] = e1;
            }
        }
        
    }
    cout << "After sorting :" << "\n";
    for(int k = 0 ; k < size  ; k++ )
    {
        int w = list[k];
        cout << w << ",";  
    }
    cout << "\n";
}

int main()
{
    int l[] = {9,8,2,3,5,46,23};
    int s = sizeof(l)/sizeof(l[0]);
    sort(l,s);
    return 0;
}