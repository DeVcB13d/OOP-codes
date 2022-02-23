#include<iostream>
using namespace std ;

class time{
    int hours; 
    int minutes ;
    public:
    time(){}
    time(int t){
        hours = t /60;
        minutes = t%60 ;
    }
    void gettime(int h , int mins){
        hours = h ;
        minutes = mins ;
    }
    void puttime(void){
        cout << hours << " hours and " << minutes << "mins"<<"\n";
    }
    void sum(time,time);

};

void time::sum(time t1,time t2){
    minutes = t1.minutes + t2.minutes ;
    hours = minutes/60;
    minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours ;
}

int main()
{
    time T ;
    int value = 85 ;
    T = value ;
    T.puttime();
    return 0 ;
}