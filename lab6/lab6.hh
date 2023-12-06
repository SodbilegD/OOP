#ifndef LAB6_HH
#define LAB6_HH

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double a, double b);
    double area() const override;
    double perimeter() const override;
};

class Triangle : public Shape {
private:
    double sideA;
    double sideB;
    double sideC;

public:
    Triangle(double a, double b, double c);
    double area() const override;
    double perimeter() const override;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r);
    double area() const override;
    double perimeter() const override;
};

#endif