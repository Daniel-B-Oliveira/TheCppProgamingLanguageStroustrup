#include <string>
#include <iostream>
using namespace std;

string s1 = "Hello";
string s2 = "world";

void m1()
{
    string s3 = s1 + ", " + s2 + "!\n";

    cout << s3;
}

void m2(string& s1, string& s2)
{
    s1 = s1 + "\n";     // append newline
    s2 += "\n";         // append newline
}


string incantantion;

void respond( const string& answer)
{
    if (answer == incantantion){
        // peform maginc
    }
    else if (answer == "yes"){
        // ...
    }
    // ...
}

string name = "Niels Stroustrup";

void m3()
{
    string s = name.substr(6, 10);          // s = "Stroustrup"
    name.replace(0,5,"Nicholas");           // name becomes "Nicholas Stroustrup"
}

int main (){ m1();}