#include <iostream>
#include <string>

using namespace std;

// int main()
// {
//     string str;

//     cout << "Please enter your name\n";
//     cin >> str;
//     cout << "Hellow, " << str << "!\n";
// }

int main()
{
    string str;

    cout << "Please enter your name\n";
    getline(cin, str);
    cout << "Hello, " << str << "!\n";
}