#include<iostream>
using namespace std ;

class space{
    int x,y,z ;
    public:
        space(){}
        space(int,int,int);
        void display(void);
        friend space operator- (space);
        space operator+ (space) ;
};

space::space(int a,int b,int c){
    x=a;y=b;z=c;
}

void space::display(void){
    cout << x <<" "<<y<<" "<<z <<"\n";
}

space operator- (space a){
    space s ;
    s.x = -a.x;
    s.y = -a.y;
    s.z = -a.z; 
    return s;
}

space space::operator+ (space l){
    space m ;
    m.x = l.x + x ;
    m.y = l.y + y ;
    m.z = m.z + z ;
    return m ;
    
}
int main()
{
    space s(100,-200,300);
    cout << "s = ";
    s.display();
    space k;
    k = -s;
    cout << "k = ";
    
    k.display();
    cout << "z = " ;
    k.operator+(s);
    k.display() ;
    
}

