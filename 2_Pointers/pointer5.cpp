#include<iostream>
#include <cstring>
using namespace std ;

class person
{
    int age;
    char name[30];
    public:
        person(){}
        person(const char *s,int a)
        {
            int l = strlen(s);
            strcpy(name,s);
            age = a;
        }
        person &g(person &x)
        {
            if (x.age > this->age)
            {
                return x ;
            }
            else
                return *this;
        }
        void show()
        {
            cout << "Name :" << name << "\n";
            cout << "Age  :"<< age << "\n";
        }
};

int main()
{
    person P1("Dev",98),P2("Raju",24),P3;
    P3 = P1.g(P2);
    P3.show();
    return 0;
}