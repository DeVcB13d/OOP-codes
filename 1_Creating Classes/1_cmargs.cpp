#include<iostream>
#include<string>
#include<cstring>
using namespace std ;

//Program to find power of an element using command line arguments

double power(double a , int x ){
    float pow = 1;
    for(int i = 0 ;i < x ;i++){
        pow = pow * a;
    }
    return pow;
}

int main(int c,char* ar[]){
    char* A = ar[1];
    char * X = ar[2];
    double a = stod(A) ; //stod - converts string to double
    int x = stoi(X);//stoi - string to int
    cout << a << "^"<<x << " = ";                                                                                                                                                                                                                                                                                                              
    cout << power(a,x)<<"\n";
    return 0 ;
}