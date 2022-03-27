#include<iostream>
#include <cstring>
using namespace std ;

template <class T>

class array
{
    T* arr;
    int size;
    public:
        array(){}
        array(T *a,int sz);
        void show()
        {
            cout << "{";
            for(int i=0;i<size;i++){cout<<arr[i]<<",";}
            cout << "}\n";
        }
};

array<class T>::array(T *a,int sz)
{
    arr = new T[sz+1];
    for(int i=0;i<sz;i++){
        arr[i]=a[i];
    }
    size = sz;
}

int main()
{
    array<int> A({1,2,3},3);
    
}