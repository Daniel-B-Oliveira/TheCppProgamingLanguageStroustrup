#include <string>
#include <iostream>
#include <vector>
#include "entry.h"
using namespace std;

Entry phone_book_a[1000];

void print_entry_a( int i)      // simple use
{
    cout << phone_book_a[i].name << ' ' << phone_book_a->number << '\n';
}

vector<Entry>phone_book_v(1000);

void print_entry_v(int i)       // simple use, exactly as for array
{
    cout << phone_book_v[i].name << ' ' << phone_book_v[i].number << '\n';
}

void add_entries (int n)        // incresed size by n
{
    phone_book_v.resize(phone_book_v.size() + n);
}

// vector<Entry> book (1000);      // vecotr of 1000 elements
// vector<Entry> book [100];       // 1000 enoty vectors

void f(vector<Entry>& v)
{
    vector<Entry> v2 = phone_book_v;
    v = v2;
    // ...
}

