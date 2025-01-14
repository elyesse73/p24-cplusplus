#include <iostream>
#include <vector>

class Shape
{
private:
    double x{};
    double y{};

public:
    Shape(double u = 0, double v = 0) : x(u), y(v) {};
    void move(double u, double v)
    {
        x = u;
        y = v;
    };
};

class Circle : public Shape
{
private:
    Shape fig;
    double radius;

public:
    Circle(double u, double v, double r) : radius(r) { fig = Shape(u, v); };
    double area() { return 3.14 * radius * radius; };
};

class Rectangle : public Shape
{
private:
    Shape fig;
    double length;
    double width;

public:
    Rectangle(double u, double v, double l, double w) : length(l), width(w) { fig = Shape(u, v); };
    double area() { return length * width; };
};

int main()
{
    Circle c{10, 20, 4.5};
    Rectangle r{20, 30, 30, 60};
    std::vector<Shape *> shapes;
    shapes.push_back(&c);
    shapes.push_back(&r);
    shapes[0]->move(4, 6);
    shapes[1]->move(2, 8);
    return 0;
}