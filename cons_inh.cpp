#include <iostream>
using namespace std ;

class alpha
{
    int x ;
    public:
        alpha(int i)
        {
            x = i;
            cout << "alpha initalised\n";
        }
        void show_x(void)
        {
            cout << "x = " << x << "\n";
        }
};

class beta
{
    float y ;
    public:
        beta(float j)
        {
            y = j ;
            cout << "beta initialised\n";
        }
        void show_y(void)
        {
            cout << "y = " << y <<"\n";
        }
};

class gamma : public alpha, public beta
{
    int m,h;
    public:
        gamma(int a ,float b, float c, float d):beta(a),alpha(b)
        {
            m = c; h = d;
            cout << "gamma initialised\n";
        }
        void show_mn(void)
        {
            cout << "m = " << m << "\n";
            cout << "h = " << h << "\n";
        }
};

int main()
{
    gamma g(1,2,3,4);
    g.show_mn();
    g.show_y();
    g.show_x();
}