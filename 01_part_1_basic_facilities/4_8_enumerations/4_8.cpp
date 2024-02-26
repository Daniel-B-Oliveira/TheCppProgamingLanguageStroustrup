enum {ASM, AUTO, BREAK};

enum keyword{ ASM, AUTO, BREAK};

void f(keyword key)
{
    switch(key) {
    case ASM:
        // do something
        break;
    case BREAK:
        // do something
        break;
    }

    enum e1 {dark, light};                  // range 0:1
    enum e2 {a=3, b=9};                     // range 0:15
    enum e3 {min = -10, max = 1000000};     // range -2^20:2^20-1

    enum flag{ x=1, y=2, z=4, e=8};

    // flag f1 = 5;                // type error : 5 is not of type flag
    flag f2 = flag(5);

    flag f3 = flag(z|e);
    flag f4 = flag (99);            // undefined: 99 is not within the range of flag
}