#include <iostream>
using namespace std ;

class vector{
    int* V;
    int S ;
    public:
        vector(){
            S = 0 ;
            V = new int[S+1];
        }
        vector(int arr[5],int sz ){
                S = sz ;
                V = new int [S+1];
                for (int i = 0 ; i<S ; i++){
                    V[i] = arr[i];
                }
        }
        vector merge(vector,vector);
        void display(){
            for(int i = 0 ; i < S ; i++){
                cout << V[i] << ",";
            }
            cout <<"\nSize = " << S << "\n";
        }
};

vector vector::merge(vector A,vector B){
    vector N ;
    delete(N.V);

    N.S = A.S + B.S ;
    N.V = new int [S+1];
    for (int i = 0 ; i < A.S ;i++){
        N.V[i] = A.V[i];
    }
    for(int j = A.S; j<B.S ;j++){
        for(int k = 0 ; k < B.S;k++){
            N.V[j] = B.V[k];
        }
    }
    return N ;
}

int main(){
    int a1[4] = {1,3,4,5};
    int a3[3] = {6,4,6};
    vector l(a1,4);
    vector m(a3,3);
    
    vector k ;
    k = k.merge(l,m);
    l.display();
    m.display();
    k.display();
    return 0 ;

}