#include<iostream>
#include <cmath>
using namespace std ;

float avg(int l[] , int s)
{
    int a = 0 ;
    for (int i = 0 ; i < s  ; i++)
    {
        int e = l[i];
        a = a + e ;
    }
    a = ( a / s ) ;
    return a;
}

float sd (int l[] , int s)
{
    int sq = 0 ;
    int a = avg(l , s);
    for (int j = 0 ; j < s ; j ++ )
    {
        int e = l[j];
        sq = sq + ((e - a)*(e - a));
    }
    float sdv = sqrt( sq / s ) ;
    return sdv ;
}

int main()
{
    int li[] = {1,34,12,43,353,23,432,32423,323,234};
    cout << "The give raw data is :";
    for(int m : li)
    {
        cout << m << "," ;
    }
    int n = sizeof(li) / sizeof(li[0]);
    cout << "\n";
    cout << "The standard deviation of the data is : " << sd (li , n) << endl;
    return 0 ;
}
