#include<iostream>
using namespace std;
class person
{
    string name;
    int age;
    
    public:
    person(string a , int b){
        name  = a;
        age = b ;
    }
        void getdata(void);
        void display(void);
};
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
