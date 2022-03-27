#include<iostream>
#include<cstring>
using namespace std ;

class matrix{
    int **p ;
    int d1,d2 ;
    public:
        matrix(int x,int y);
        ~matrix();
        void getelement(int i ,int j ,int value){
            p[i][j] = value ;
        }
        int put_element(int i , int j){
            return (p[i][j]) ;
        }
};

matrix :: matrix(int x,int y){
    d1 = x ;
    d2 = y ;
    p = new int * [d1]; //array of type int * store x addresses(rows)
    for(int i = 0;i<x;i++){
        p[i] = new int [d2] ;//array to store int type of data
    }

}

matrix :: ~matrix(){
    for(int i = 0 ; i < d1 ; i++){
        delete p[i];
    }
    delete p ;
    cout << "memory freed\n ";
} 

int main()
{
    int m,n;
    cout << "enter sizes";
    cin >> m >> n ;
    matrix A(m,n);
    cout << "Enter elements row by row";
    int value ;
    for(int i = 0; i < m ; i++){
        for (int j = 0 ; j < n ; j++){
            cin >> value ;
            A.getelement(i,j,value);
        }
    }
    for(int i = 0 ; i<m ; i++){
        for(int j = 0; j<n; j++){
            cout << A.put_element(i,j) << " ";
        }
        cout << "\n";
    }

    return 0 ;
}