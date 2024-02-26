#include "C:\Users\danie\Documents\TheC++ProgamingLanguage\3_7_1_vector\entry.h"
#include "C:\Users\danie\Documents\TheC++ProgamingLanguage\3_7_2_range_checking\vec.h"
#include <iostream>

using namespace std;

Vec<Entry> phone_book(1000);

void print_entry (int i)
{
    cout << phone_book[i].name << ' ' << phone_book[i].number << '\n';
}

void f()
{
    try {
        for (int i = 0; i<10000; i++) print_entry(i);
    }
    catch (out_of_range){
        cout << "range error\n";
    }
}

int main ()
{
    try{
        f();
    }
    catch (out_of_range){
        cerr << "range error\n";
    }
    catch (...) {
        cerr << "unknown exception thrown\n";
    }
}