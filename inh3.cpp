#include<iostream>
#include<cstring>
using namespace std ;

class account
{
    protected:
        int ACno;
        string name;
        float balance ;
    public:
        void get_balance(void){
            cout << "AC number : " << ACno << "\n";
            cout << "Name      : " << name << "\n";
            cout << "Balance   : " << balance << "\n";
        }
};

class current_AC : account
{
    protected:
    public:
        void checkbalance(){
            if (balance <= 500){
                balance = balance - (balance/10);
            }
        }
        void FD(int amount){
            balance += amount ;
        }

}