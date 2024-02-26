#include <vector>
#include <list>
#include "C:\Users\danie\Documents\TheC++ProgamingLanguage\3_7_1_vector\entry.h"
#include <algorithm>

using namespace std;

bool operator== (const Entry&a, const Entry& b) {return a.name == b.name; }
bool operator< (const Entry&a, const Entry& b) {return a.name < b.name; }

void f(vector<Entry>& ve, list<Entry>& le)
{
    // sort(ve.begin(), ve.end());
    // unique_copy(ve.begin(), ve.end(), le.begin());

    // sort(ve.begin(), ve.end());
    // unique_copy(ve.begin(), ve.end(), back_inserter(le));

    copy(ve.begin(), ve.end(), le);                 // error: le not an iterator
    copy(ve.begin(), ve.end(), le.end());           // bad: writes beyond the end
    copy(ve.begin(), ve.end(), le.begin());         // overwrite elements
}
