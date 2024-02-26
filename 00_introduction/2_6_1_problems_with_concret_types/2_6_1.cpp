class Point{ /* ... */ };
class Color{ /* ... */ };

enum Kind { circle, triangle, square};      // enumeration

class Shape {
    Kind k;             // type field
    Point center;
    Color col;
    // ...
public:
    void draw();
    void rotate();
    // ...
};

void Shape::draw()
{
    switch (k){
    case circle:
        // draw a circle
        break;
    case triangle:
        // draw a triangle
        break;
    case square:
        // draw a square
        break;
    }
}
