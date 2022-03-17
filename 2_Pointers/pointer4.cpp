#include<iostream>
#include <cstring>
using namespace std ;

//Array of pointers

class city
{
    char *name;
    int len;
    public:
        city()
        {
            len = 0 ;
            name = new char[len+1];
        }
        void get_name(void)
        {
            char n[30];
            cout << "Enter name : ";
            cin >> n ;
            len = strlen(n);
            name = new char[len+1];
            strcpy(name,n);
        }
        void print_city(){cout << "city "<<name<<"\n";}
};

int main()
{
    city *ptr[10];
    int n = 0 ;
    int option = 1;
    do
    {
        ptr[n] = new city;
        ptr[n] ->get_name();
        n++;
        cout << "Do you wish to continue:";
        cin >> option;
    } while (option);
    for(int j=0;j<n;j++)
    {
        ptr[j]->print_city();
    }
    return 0;
    
}