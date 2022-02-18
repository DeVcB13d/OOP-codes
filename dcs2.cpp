#include<iostream>
#include<cstring>
using namespace std ;

class Str{
    int L ;
    char *name;
    public:
        Str(){
            L = 0;
            name = new char[L + 1];
        }
        Str(const char *s){
            L = strlen(s);
            name = new char[L+1] ;
            strcpy(name,s);
        }
        void display(void){cout << name << "\n" ;}
        void join(Str a , Str b);
};

void Str::join(Str A,Str B){
    L = A.L + B.L;
    delete name ;
    name = new char(L+1);
    strcpy(name,A.name);
    strcat(name,B.name);
}


int main()
{
    
    Str name1("Rakesh "),name2("Kumar "),name3("Sinha"),S1,S2;
    S1.join(name1,name2);
    S2.join(S1,name3);
    name1.display();
    name2.display();
    name3.display();
    S1.display();
    S2.display();
    return 0 ;
}
