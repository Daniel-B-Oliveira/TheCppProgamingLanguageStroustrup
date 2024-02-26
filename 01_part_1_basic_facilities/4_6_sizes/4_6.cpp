#include <limits>
#include <iostream>

using namespace std;

int main()
{
    cout << "Lasgest float == " << numeric_limits<float>::max()
    << ", char is signed == " << numeric_limits<char>::is_signed<<'\n';
}