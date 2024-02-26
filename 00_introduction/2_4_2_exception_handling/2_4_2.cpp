#include <iostream>
#include <stack>

namespace Stack {
    void push (char);
    char pop();

    class Overflow { };     // type representing overflow exceptions

    const int max_size = 200;
    char v [max_size];
    int top = 0;
}

void Stack::push (char c)
{
    if (top == max_size) throw Overflow();
    // push c
}

int main(){
    void f();
    {
        // ...
        try {   // excepetions here are handled by th halder defined delow
            while (true) Stack::push('c');
        }
        catch (Stack::Overflow) {
            // oops: Stack overflow; take opropriate action
        }
        // ...
    }
}