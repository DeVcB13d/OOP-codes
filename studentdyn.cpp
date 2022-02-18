#include <iostream>
#include <cstring>
using namespace std ;

class student{
    int rno;
    char * name;
    public:
        student(){
            rno = 0;
            name = new char[2];
        }
        student(int r , const char *n){
            int l = strlen(n);
            name = new char[l+1];
            strcpy(name,n);
            rno = r;
        }
        void show(){
            cout << name <<"\t"<< rno << "\n" ; 
        }
};

student *sl ;
int main(){
    int ne ;
    cout << "Entries : " ;
    cin >> ne;
    sl = new student[ne + 1];
    for(int i = 0; i < ne; i++ ){
        char *n;
        char nam[20];
        int rnn;
        cout << "Enter rno" ;
        cin >> rnn ;

        cout << "Enter name";
        cin >> nam;
        student A(rnn,nam);
        sl[i] = nam;
        sl[i] = &A ;
    }
    for(int i = 0; i < ne; i++ ){
        student A = sl[i];
        A.show();
    }

}

