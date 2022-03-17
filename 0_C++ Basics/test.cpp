#include<iostream>
using namespace std ;
void print(int v[])
{

for (auto x : v)
cout << x << '\n';
// for each x in v
for (auto x : {10,21,32,43,54,65})
cout << x << '\n';
// ...
}

int main()
{
    int v[] = {0,1,2,3,4,5,6,7,8,9};
    print(v) ;
    return 0 ;
}