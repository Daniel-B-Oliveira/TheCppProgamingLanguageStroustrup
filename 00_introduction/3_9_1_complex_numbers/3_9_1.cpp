#include  <cmath>

using namespace std;

template<class scalar> class complex {
public:
    complex( scalar re, scalar im);
    // ...
};

template<class C> complex<C> pow(const complex<C>&, int);

void f(complex<float> fl, complex<double> db)
{
    // complex<long double> id = fl + sqrt(db);
    // db = db + fl*3;
    // fl = pow(1/fl, 2);
}

