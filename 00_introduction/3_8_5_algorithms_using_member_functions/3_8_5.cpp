#include <algorithm>
#include <iterator>
#include  <iostream>

#include "C:\Users\danie\Documents\TheC++ProgamingLanguage\2_6_1_problems_with_concret_types\2_6_1.cpp"

#include <string>
#include <map>
#include <list>

using namespace std;

// map<string, int> histogram;

// void record(const string& s)
// {
//     histogram[s] ++;
// }

// istream_iterator<string> ii(cin);
// istream_iterator<string> eos;

// int main(){
//     for_each(ii, eos, record);
// }

void draw(Shape* p)
{
    p->draw();
}

void f(list<Shape*>& sh)
{
    for_each(sh.begin(), sh.end(), draw);
}

void g(list<Shape*>& sh)
{
    for_each(sh.begin(), sh.end(), mem_fun(&Shape::draw));
}
