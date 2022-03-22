#include<iostream>
#include<cmath>
using namespace std;

class Polar
{
    float r;
    float a;
    public:
        Polar(){}
        Polar(int R,int A)
        {
            r = R;a = A;
        }
        friend Polar operator+(Polar,Polar);
};

Polar operator+(Polar l,Polar m)
{
    Polar n;
    float x1 = l.r * cos(l.a);
    float y1 = l.r * sin(l.a);
    float x2 = m.r * cos(m.a);
    float y2 = m.r * sin(m.a);
    n.a = 
}

