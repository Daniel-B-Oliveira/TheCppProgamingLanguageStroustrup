#include <map>
#include <string>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

map<string, int> histogram;

void record(const string& s)
{
    histogram[s]++;         // record frequency of ''s''s
}

void print(const pair<const string, int>&r)
{
    cout<<r.first<<' '<<r.second<<'\n';
}

int main()
{
    istream_iterator<string> ii(cin);
    istream_iterator<string> eos;

    for_each(ii, eos, record);
    for_each(histogram.begin(), histogram.end(), print);
}

//

bool gt_42(const pair<const string, int>& r)
{
    return r.second>42;
}

void f(map<string, int>& m)
{
    typedef map<string, int>::const_iterator MI;
    MI i = find_if(m.begin(), m.end(), gt_42);
}

void g(const map<string, int>& m)
{
    int c42 = count_if(m.begin(), m.end(), gt_42);
    // ...
}