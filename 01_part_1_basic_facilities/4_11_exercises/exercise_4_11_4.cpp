// Write a program that prints out the letters 'a'...'z' and the digits '0'...'9' and their interger values. DO the same for other printable characters. Do the same again but use exadecimal natation

#include <iostream>
using namespace std;


int main()
{
    // for (char letter = 'a'; letter <= 'z'; ++letter) {
    //     cout<<"Letter: "<<letter<<" - Interger value: "<<int(letter)<<'\n';
    // }

    // for (int number = 0; number <= 9; ++number) {
    //     cout<<"Number: "<<number<<" - Interger value: " << int(number)<<'\n';
    // }

    for (char ptbl_char = -126; ptbl_char <= 126; ++ptbl_char) {
        cout<<"Printable char: "<<ptbl_char<<" - Interger value: " << int(ptbl_char)<<'\n';
    }

// exadecimal: 
    // for (char ptbl_char = 0x0; ptbl_char <= 0x7E; ++ptbl_char) {
    //     cout<<"Printable char: "<<ptbl_char<<" - Interger value: " << int(ptbl_char)<<'\n';
    // }
}
