#include "Rep.h"

namespace Stack {       // representation
    
    const int max_size = 200;

    struct Rep {
        char v [max_size];
        int top;
    };

    const int max = 16;     // maximum number of stacks

    Rep stacks [max];       // prealocated stack representantions
    bool used [max];        // used[i] is true if stacks[i] is in true

    typedef Rep& stack;
}

void Stack::push (stack s, char c) { /* check s for overflow and push c */ }

char Stack::pop (stack s) { /* check s for underflow and pop */ }

Stack::stack Stack::create ()
{
    // pick an unesed Rep, mark it used, initialize it, and retur a reference to it
}

void Stack::destroy (stack s) { /* mark s unused */ }

