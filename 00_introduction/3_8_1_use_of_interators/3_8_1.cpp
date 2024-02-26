#include <algorithm>
#include <iostream>

#include <string>
#include <list>
#include <complex>
#include <vector>

using namespace std;

// int count( const string& s, char c)
// {
//     int n = 0;
//     string::const_iterator i = find(s.begin(), s.end(), c);
//     while ( i != s.end()) {
//         ++n;
//         i = find(i+1, s.end(), c);
//     }
//     return n;
// }

// void f()
// {
//     string m = "Mary had a little lamb";
//     int a_count = count(m, 'a');
// }

template<class C, class T> int count(const C& v, T val)
{
    typename C::const_iterator i = find(v.begin(), v.end(), val);
    int n = 0;
    while (i != v.end()) {
        ++n;
        ++i;
        i = find(i, v.end(), val);
    }
    return n;
}

// void f(list<complex<double>>&lc, vector<string>& vs, string s)
// {
//     int i1 = count(lc, complex<double> (1,3));
//     int i2 = count(vs, "Diogenes");
//     int i3 = count(s, 'x');
// }

void f(list<complex<double>>&lc, vector<string>& vs, string s)
{
    int i1 = count(lc.begin(), lc.end(), complex<double> (1,3));
    int i2 = count(vs.begin(), vs.end(), "Diogenes");
    int i3 = count(s.begin(), s.end(), 'x');
}

void g(char cs[], int sz)
{
    int i1 = count(&cs[0], &cs[sz], 'z');       // 'z's in array
    int i2 = count(&cs[0], &cs[sz/2], 'z');     // 'z's in frist half of array
}

int main() {
    string s = "I cannot change what has happened in the past";
     int i3 = count(s, 'x');
     cout << i3;
}