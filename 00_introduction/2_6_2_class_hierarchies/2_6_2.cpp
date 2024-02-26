#include <vector>

// Note: see [Kerr, 1987] and [Booch, 1994] in §23.6. (Stroustrup, 2000)

class Point{ /* ... */ };
class Color{ /* ... */ };

// enum Kind { circle, triangle, square};      // enumeration

class Shape {
    Point center;
    Color col;
    // ...
public:
    Point where() {return center;}
    void move(Point to) {center = to; /* ... */ draw();}

    virtual void draw() = 0;
    virtual void rotate(int angle) = 0;
    // ...


    void rotate_all(std::vector<Shape*>& v, int angle)
    {
        for (int i = 0; i < v.size(); ++i) v[i] -> rotate(angle);
    }
};

class Circle : public Shape {
    int radius;
public:
    void draw() {/* ... */}
    void rotate (int) {}        // null function
};

