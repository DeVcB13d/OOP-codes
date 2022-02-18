#include<iostream>
#include <cstdarg>

using namespace std ;

double average(int num,...){
    va_list vlist ;
    double sum = 0 ;
    int i ;
    va.start(vlist,num);
    for(i = 0 ; i<num ;i++){
        sum+=va_arg(vlist,int);
    }
    va.end(valist);
    return sum ;
}

int main{
    cout << "average = " << average(4,1,3,4,4) << "\n" ;
    cout << "average = " << average(5,1,3,4,3,4) << "\n" ;
}
