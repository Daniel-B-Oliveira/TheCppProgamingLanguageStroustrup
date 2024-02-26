#include <iostream>
using namespace std;

void f()
{
    int i;
    cin >> i;       // read an interger into i

    double d;
    cin >> d;       // read a diybke-precision, floating-point number into d
}

int main()
{
    const double factor = 2.54;     // 1 inch equals 2.54 cm
    double x, in, cm;
    char ch = 0;

    cout << "enter length: ";

    cin >> x;           // read a floating-point number
    cin >> ch;          // read a sufix

    switch (ch) {
    case 'i':           // inch
        in = x;
        cm = x*factor;
        break;
    case 'c':           // cm
        in = x/factor;
        cm = x;
        break;
    default:
        in = cm = 0;
        break;
    }

    cout << in << "in = " << cm << "cm\n";

}