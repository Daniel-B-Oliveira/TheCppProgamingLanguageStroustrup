class complex {
    double re, im;
    public:
        complex (double r, double i) { re = r; im = i; }      // constuct complex from two scalars
        complex (double r) { re = r; im = 0; }                // constuct complex from one scalar
        complex () { re = im = 0; }                           // default complex: (0,0)

        friend complex operator+ (complex, complex);
        friend complex operator- (complex, complex);          // binary
        friend complex operator- (complex);                   // unary
        friend complex operator* (complex, complex);
        friend complex operator/ (complex, complex);

        friend complex operator== (complex, complex);         // equal
        friend complex operator!= (complex, complex);         // not equal
        //...

};

complex operator+ (complex a1, complex a2)
{
    return complex(a1.re + a2.re, a1.im + a2.im);
}

complex operator* (complex a1, complex a2)
{
    return complex(a1.re * a2.re, a1.im * a2.im);
}

complex operator- (complex a1, complex a2)
{
    return complex(a1.re - a2.re, a1.im - a1.im);
}

complex operator- (complex a1)
{
    return complex(a1.re * -1);
}
complex operator/ (complex a1, complex a2)
{
    return complex(a1.re / a2.re, a1.im / a2.im);
}

complex operator== (complex a1, complex a2)
{
    if (a1.re == a2.re and a1.im == a2.im) return true;
    return false;
}

complex operator!= (complex a1, complex a2)
{
    if (a1.re != a2.re or a1.im != a2.im) return true;
    return false;
}

// int main() {
//     void f(complex z);
//     {
//         complex a = 2.3;
//         complex b = operator/(1, a);
//         complex c1 = a+b * complex(1,2.3);
//         complex c2 = operator*(operator+(a,b), complex(1,2.3));
//         //...
//     }
// }