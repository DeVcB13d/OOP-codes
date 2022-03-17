#include<iostream>

//Introduction to classes in C++

using namespace std;
class person
{
    //Private Data Members
    string name;
    int age;
    
    public:
    //Public member functions
    person(string a , int b){ //constructor
        name  = a;
        age = b ;
    }
        void getdata(void);
        void display(void);
};
//When fns are defined outisde, scope res operator is neccessary
void person :: getdata(void)
{
    cout << " Enter name: " ;
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
}

void person :: display(void) 
{
    cout << "\nName: " << name;
    cout << "\nAge: " << age;
}

int main()
{
    person a("raju",13);
    a.display();
    
    return 0;
} 
