#include<iostream>
#include<string>
#include<cstring>
using namespace std ;



double power(double a , int x ){
    float pow = 1;
    for(int i = 0 ;i < x ;i++){
        pow = pow * a;
    }
    return pow;
}

int main(int c,char* ar[]){
    char A[] = {*ar[1]};
    char X[] = {*ar[2]};
    double a = stod(A) ;
    cout << a << A[2]<<"\n";
    int x = stoi(X);
    cout << x <<X[2]<<"\n";                                                                                                                                                                                                                                                                                                               
    cout << power(a,x)<<"\n";
    return 0 ;
}