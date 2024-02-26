#include <map>
#include <string>
#include <iostream>

using namespace std;

map<string, int> phone_book;

void print_entry(const string& s)
{
    if (int i = phone_book[s]) cout << s << ' ' << i << '\n';
}