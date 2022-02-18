#include<iostream>
#include<cstring>
using namespace std ;
const int m =20 ;
class student
{
    char* name ;
    int Rno ;
    static int count;
    int Sno ;
    public:
        student();
        student(int R,const char *n)
        {
            Rno = R ;
            delete name ;
            name = new char [m];
            strcpy(name,n);
            Sno = count;
            count++;
        }
        student(student &s)
        {
            Rno = s.Rno ;
            delete name ;
            name = new char[m];
            strcpy(name,s.name);
        }
        ~student()
        {
            delete name ;
        }
        
};
int student::count ;
const int N = 10 ;



int main()
{
    student slis6t[N];
    for(int i =  0 ; i < N ; i++){
        int Rn;
        char* ne;
        cout << "\nEnter details\nName: ";
        cout << "Rno :" ; cin>>Rn ;
        A[i] = student(Rn,ne);
    }
}