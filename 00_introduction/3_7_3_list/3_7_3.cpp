#include "C:\Users\danie\Documents\TheC++ProgamingLanguage\3_7_1_vector\entry.h"
#include "C:\Users\danie\Documents\TheC++ProgamingLanguage\3_7_2_range_checking\vec.h"
#include <list>
#include <iostream>
using namespace std;

list<Entry> phone_book;

void print_entry (const string& s)
{
    typedef list<Entry>::const_iterator LI;
    for (LI i = phone_book.begin(); i != phone_book.end(); ++i) {
        const Entry& e = *i;
        if (s == e.name) {
            cout<< e.name << ' ' << e.number << 'n';
            return; 
        }
    }
}

void f(const Entry& e, list<Entry>::iterator i, list<Entry>::iterator p)
{
    phone_book.push_front(e);       // add at beginning
    phone_book.push_back(e);        // add at end
    phone_book.insert(i, e);        // add before the element referred to by 'i'

    phone_book.erase(p);            // remove the element reffered to by 'p'
}
