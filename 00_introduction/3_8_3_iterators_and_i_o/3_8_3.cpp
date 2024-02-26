#include <iostream>
#include <iterator>
#include <fstream>

#include <algorithm>

#include <string>
#include <vector>

using namespace std;

// ostream_iterator<string> oo(cout);
// istream_iterator<string> ii(cin);

// int main()
// {
//     // *oo = "Hello, ";
//     // ++oo;
//     // *oo = "world!\n";

//     string s1 = *ii;
//     ++ii;
//     string s2 = *ii;

//     cout << s1 << ' ' << s2 << '\n';



// }

// read a file, sort the words read, eliminate duplicates, and write the result to another file:

int main()
{
    string from, to;                                
    cin >> from >> to;                                  // get source and taget file names

    ifstream is (from.c_str());                         // imput stream
    istream_iterator<string> ii(is);                    // imput iterator for stream
    istream_iterator<string> eos;                       // imput sentinel
    
    vector<string> b(ii, eos);                          // b is a vector initialized from input
    sort(b.begin(), b.end());                           // sort the buffer

    ofstream os(to.c_str());                            // output stream
    ostream_iterator<string> oo(os, "\n");              // output interator for stream

    unique_copy(b.begin(), b.end(), oo);                // coppy buffer to output
                                                        // discard replicated values

    return !is.eof() || !os;                            // return error state
}
