class Stack {
    char* v;
    int top;
    int max_size;
public:
    class Underflow { };             // used as exception
    class Overflow { };              // used as exception
    class Bad_size { };              // used as exception

    Stack (int s);                   // constructor
    ~Stack();                        // destructor

    void push (char c);
    char pop ();
};

Stack::Stack (int s)                // constructor
{
    top = 0;
    if (s<0 || 10000<s) throw Bad_size();       // "||" means "or"
    max_size = s;
    v = new char[s];                // allocate elements on the free store (heap, dynamic store)
}

Stack::~Stack()                     // destructor
{
    delete [] v;                    // frre the elements for possible reuse of their space
}

Stack s_var1 (10);                  // global stack with 10 elements
void f(Stack& s_ref, int i)         // reference to stack
{
    Stack s_var2 (i);               // local stack with i elements
    Stack*s_ptr = new Stack (20);   // pointer to Stack allocated on free store

    s_var1.push('a');               // acces throug variable
    s_var2.push('b');
    s_ref.push('c');                // acces throug reference
    s_ptr->push('d');               // acces throug pointer
    // ...
}

void Stack::push (char c)
{
    if (top == max_size) throw Overflow();
    v[top] = c;
    top = top + 1;
}

char Stack::pop()
{
    if (top == 0) throw Underflow();
    top = top - 1;
    return v[top];
}
