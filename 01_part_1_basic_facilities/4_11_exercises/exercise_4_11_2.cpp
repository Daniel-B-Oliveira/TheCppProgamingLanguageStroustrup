/*
(Stroustrup, 2000, p.78.)

char ch;
string s;
int count = 1;
const double pi = 3.1415926535897932385;
extern int error_number;

const char* name = "Njal";
const char* season[] = {"spring", "summer", "fall", "winter"};

struct Date { int d, m, y; };
int day(Date* p) {return p->d; };
double sqrt(double);
template<class T> T abs(T a) {return a<0 ? -a:a; }

typedef complex<short> Point;
struct User;
enum Beer {Carlsberg, Tuborg, Thor};
namespace NS {int a; }
*/

//For each declaration in §4.9, do the following: If the declaration is not a definition, write a definitio for it. If the declaration is a definition, write a declaration for it that is not also a definition.

#include <string>
#include <complex>
#include <map>

using namespace std;

char ch = 'a';
string s = "string";
int count;
const double pi;
extern int error_number = 0;

const char* name;
const char* season[];

struct Date;
int day(Date* p);
double sqrt(double n) {return sqrt(n); };
template <class T> T abs(T a);

typedef complex<short>;
struct User {
    map <string, int> user_data;
};
enum Beer;
namespace NS {}