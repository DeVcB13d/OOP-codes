//dynamic constructors
//in normal declatrions all objects have same memory size
//
#include <iostream>
#include <cstring>
using namespace std ;

class strings
{
    //name holds starting address
    char *name; // we only gave address to store at a location
    int length ;
    public:
        strings(){
            length = 0 ; //Rakesh will have 7 chrs 1 for space
            //name 
            name = new char[length + 1];
            //8 locations assigned dynamically(for rajesh)
            //name will have location of 'R'
        }
        strings (const char *s){
            length = strlen(s);
            name  = new char [length + 1];
            strcpy(name ,s);
        }
        void display(void){
            cout << name << "\n" ;
        }
        void join(strings A , strings B);

};

void strings::join(strings A , strings B){
    length = A.length + B.length ;
    delete name;//delete initial memory
    name = new char[length + 1];
    strcpy(name,A.name); // Rakesh copied to name
    strcat(name,B.name);// Rakesh + Kumar
}

int main()
{
    //different names have different charecters
    strings name1("Rakesh "),name2("Kumar "),name3("Sinha"),S1,S2;
    S1.join(name1,name2);
    S2.join(S1,name3);
    name1.display();
    name2.display();
    name3.display();
    S1.display();
    S2.display();
    return 0 ;
}

// * name will hold an address only 1 space
//to prevent unused memoru
//3 objects with same data memebers 
// but total mmory allocated is different
//name1 = 8
// name2 - 7
//name 3 - 6
/*
S1 & S2 = 1 location intitially
after calling join
S1 - 14 location
S2 - 19 location


*/