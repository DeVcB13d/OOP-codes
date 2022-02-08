#include<iostream>
using namespace std;

class student
{
    private:
        char[30] name ;
        int age;
        int marks;
    public:
        void getdata(void);
        void showdata(void);
        int percentage(marks) 
        {
            return marks * 100
        }
}

void student :: getdata(void)
{
    cout << "Enter his name:\n";
    cin >> name;
    cout << "Enter his age:\n";
    cin >> age ;
    cout >> "Enter his marks\n";
    cin >> marks;
}

void student :: showdata(void)
{
    cout << name
}


int main()
{
    student a ;

    a.getdata ;
    
    a.showdata ;
    return 0;
    
}
