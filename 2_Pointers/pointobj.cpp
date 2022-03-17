#include<iostream>
using namespace std ;

class point{
    float x,y,z ;
    public:
        point(){}
        point(float a,float b = 0 ,float c = 0){x = a;y = b ;z = c;}
        void show(){cout<<"("<< x << ","<< y << ","<< z << ")\n";}

        friend point operator + (point,point);
        friend point operator - (point,point);
        friend point cross (point,point);
        friend float operator * (point,point);


};

point operator+ (point A,point B){
    point C;
    C.x = A.x + B.x;
    C.y = A.y + B.y;
    C.z = A.z + B.z;
    return C;
}

point operator- (point A,point B){
    point C;
    C.x = A.x - B.x;
    C.y = A.y - B.y;
    C.z = A.z - B.z;
    return C ;
}

point cross(point A ,point B){
    point C;
    C.x = (A.y*B.z - A.z*B.y);
    C.y = (A.z*B.x - A.x*B.z);
    C.z = (A.x*B.y - A.y*B.x);
    return C ;
    
}

float operator* (point A , point B){
    float x = A.x*B.x;
    float y = A.y*B.y;
    float z = A.z*B.z;
    return x+y+z ;
}

int main(){
    point L = point(1,0,2);
    point M = point(2,3,4);
    point C = cross(L,M);
    float k = L * M ;
    L.show();
    M.show();
    C.show();
    cout << L*M;
    return 0;

}