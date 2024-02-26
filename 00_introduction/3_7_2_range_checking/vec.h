#include <vector>
using namespace std;

template<class T> class Vec: public vector<T>{
public:
    Vec() : vector<T> () {}
    Vec(int s) : vector<T> (s) {}

    T& operator[] (int i) {return vector<T>::at(i); }                  // range-checked
    const T& operator[] (int i) const {return vector<T>::at(i); }      // range-checked 

};
