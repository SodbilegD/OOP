#include "lab6.hh"
#include <cmath>
# define M_PI           3.14159265358979323846  /* pi */

// Rectangle class implementation
Rectangle::Rectangle(double a, double b) : length(a), width(b) {}

double Rectangle::area() const {
    return length * width;
}

double Rectangle::perimeter() const {
    return 2 * (length + width);
}

// Triangle class implementation
Triangle::Triangle(double a, double b, double c) : sideA(a), sideB(b), sideC(c) {}

double Triangle::area() const {
    // Heron's formula for the area of a triangle
    double s = (sideA + sideB + sideC) / 2.0;
    return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
}

double Triangle::perimeter() const {
    return sideA + sideB + sideC;
}

// Circle class implementation
Circle::Circle(double r) : radius(r) {}

double Circle::area() const {
    return M_PI * radius * radius;
}

double Circle::perimeter() const {
    return 2 * M_PI * radius;
}