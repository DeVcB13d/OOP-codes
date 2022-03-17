#include<iostream>
using namespace std;

class String
{
    int l ;
    char* str ;
    public:
        friend int len(const char* x);
        String(const char* y);
        String(){}
        friend String operator+ (String,String);
        friend bool operator<= (String,String);
        void display(void){
            cout << str << endl;
        }
};

int len(const char*x)
{
    int c = 0;
    int l = 0;
    int i = 0;
    while (c<=0){
        if (x[i] != '\0'){
            l++ ;
            i++ ;
        }
        else if (x[i] == '\0'){
            c++;
        }
    }
    return l ;
}

String::String(const char* y)
{
    l = len(y);
    str = new char[l+1];
    for(int i = 0 ; i < l ; i++){
        str[i] = y[i];
    }
}

String operator+ (String x,String y){
    String  z ;
    z.l = x.l + y.l ;
    z.str = new char[z.l + 1];
    for(int i = 0 ; i < x.l ; i ++){
        z.str[i] = x.str[i];
    }
    int k = 0 ;
    for(int j = x.l ; j < z.l ; j++){
        z.str[j] = y.str[k];
        k++;
    }
    return z ;
}

bool operator<= (String x,String y)
{
    if(x.l <= y.l){
        return true ;
    }
    else{return false;}
}

int main()
{
    String s1("ram "),s2("radha"),s3;
    s3 = s1 + s2 ;
    s1.display();
    s2.display();
    s3.display();
    bool z = (s2 <= s1);
    cout << z << "\n";
    return 0 ;
}

