#include <list>


class Stack {
public:
    class Uderflow { };                 // used as exception
    class Overflow { };                 // used as exception

    class Bad_pop { };                  // My note

    virtual void push (char c) = 0;
    virtual char pop() = 0;
};

void f(Stack&s_ref)
{
    s_ref.push('c');
    if (s_ref.pop() != 'c') throw Stack::Bad_pop();
}

//

class Array_stack : public Stack {      // Array_stack implements Stack
    char* p;
    int max_size;
    int top;

public:
    Array_stack(int s);
    ~Array_stack();

    void push (char c);
    char pop();
};

void g()
{
    Array_stack as (200);
    f (as);
}

//

class List_stack: public Stack {        // List_stack implements Stack
    std::list<char> lc;                 // (standard library) list of characters
public:
    List_stack() { }

    void push( char c) {lc.push_front (c); }
    char pop();
};

char List_stack::pop()
{
    char x = lc.front();                // get first element
    lc.pop_front();                     // remove first element
    return x;
}

void h()
{
    List_stack ls;
    f(ls);
}