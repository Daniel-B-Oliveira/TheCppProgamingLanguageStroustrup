template<class T> class Stack{
    T* v;
    int max_size;
    int top;
public:
    class Underflow { };
    class Overflow { };
    
    Stack (int s);      // constructor
    ~Stack ();          // destructor

    void push(T);
    T pop();

    template<class T> void Stack<T>::push(T c);
    {
        if (top == max_size) throw Overflow();
        v[top] = c;
        top = top + 1;
    }

    template<class T> T Stack<T>::pop()
    {
        if (top == 0) throw Underflow();
        top = top - 1;
        return v[top];
    }


    Stack<char> sc (200);               // stack of 200 chars
    Stack< complex> scplx(30);          // stack of 30 complex numbers
    Stack< list<int> > sli (45);        // stack of 45 lists of integers

    void f()
    {
        sc.push('c');
        if (sc.pop() != 'c' throw Bad_pop());

        scplx.push (complex(1,2));
        if (scplx.pop() != complex(1,2)) throw Bad_pop();
    }
};

