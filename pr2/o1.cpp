/*Q.10. Define a string data type with the following functionality:
- A constructor having no parameters,
- Constructors which initialize strings as follows:
• A constructor that creates a string of specific size
• Constructor that initializes using a pointer string
• A copy constructor
Define the destructor for the class
It has overloaded operators. (This part of question will be taken up in the later
units).
There is operation for finding length of the string */


#include<iostream>
#include<cstring>
using namespace std ;

class String
{
    int size ;
    char* text;
    public:
        String(){
            size = 0;
            text = new char[1];
        }
        String(int sz){
            size = sz ;
            text = new char [sz+1];
        }
        String(const char *s){
            size = strlen(s);
            text = new char[size+1]
        }
        String(const String &x){
            size = x.size ;
            text = x.text ;
        }
        ~String(){
            delete size ;
            delete *text ;
            delete text ;
        }
        friend int length(String x);
}

int length(String x){
    return x.size ;
}