#include <iostream>
using namespace std;

void f()
{
    cout << 10;
}

void g()
{
    int i = 10;
    cout<< i;
}

void h (int i)
{
    cout << "the value of i is ";
    cout << i;
    cout << "\n";
}

void k ()
{
    cout << 'a';
    cout << 'b';
    cout << 'c';
}

void h2(int i)
{
    cout << "the valou of i is " << i << "\n";
}

int main ()
{
    f();
    cout << "\n";

    g();
    cout << "\n";

    h(10);

    k();
    cout << "\n";

    h2(10);
}


