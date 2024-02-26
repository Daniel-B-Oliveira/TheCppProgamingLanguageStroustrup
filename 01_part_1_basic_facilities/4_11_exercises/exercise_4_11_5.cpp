// What, on your system, are the largest and the smallest values of the following types: char, short, int, long, float, double, long double, and unsigned.

#include <limits>
#include <iostream>

using namespace std;

int main()
{
    cout<<"largest char == "<<numeric_limits<char>::max()
    <<", char is signed == " << numeric_limits<char>::is_signed<<'\n';
    
    cout<<"largest short == "<<numeric_limits<short>::max()
    <<", short is signed == " << numeric_limits<short>::is_signed<<'\n';

    cout<<"largest int == "<<numeric_limits<int>::max()
    <<", int is signed == " << numeric_limits<int>::is_signed<<'\n';

    cout<<"largest long == "<<numeric_limits<long>::max()
    <<", long is signed == " << numeric_limits<long>::is_signed<<'\n';

    cout<<"largest float == "<<numeric_limits<float>::max()
    <<", float is signed == " << numeric_limits<float>::is_signed<<'\n';
    
    cout<<"largest double == "<<numeric_limits<double>::max()
    <<", double is signed == " << numeric_limits<double>::is_signed<<'\n';

    cout<<"largest long double == "<<numeric_limits<long double>::max()
    <<", long double is signed == " << numeric_limits<long double>::is_signed<<'\n';
}