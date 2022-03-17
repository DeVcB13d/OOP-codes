/*program using classes to perform bank transaction for n customers
(cust_name, acc_no, acc_type, balance). The program should be menu driven The program should be menu driven
and it should have the following menus like adding new account, withdraw
(keep a min balance of 500), deposit, balance enquiry and account statement
(cust_name, acc_no, acc_type, balance)*/
#include<iostream>
using namespace std;
class customer
{
    char * cust_name;
    int acc_no;
    char acc_type;
    float balance;
    static int custN;
    public:
        void addcust();
};

int customer::custN = 0;

void customer::addcust(){
    char *n;
    cout << "Enter name :" ;
    cin >> *n ;
    *cust_name = *n ;
    cout <<"Enter Account number : ";
    cin >> acc_no;
    cout << "Enter balance: " ;
    cin >> balance ;
    custN++;
}
int custs[];



void createobjlist(){
    cout << "Enter number of objects";
    cin >> n ;
    int new custs[n];
}


int main()
{
    customer C;
    C.addcust();
}