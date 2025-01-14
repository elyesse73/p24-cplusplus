class Shape
{
private:
    int x{};
    int y{};

public:
    Shape(int u = 0, int v = 0) : x(u), y(v) {};
    void move(int u, int v)
    {
        x = u;
        y = v;
    };
};

class Circle : public Shape
{
private:
    Shape fig;
    int radius;

public:
    Circle(int u = 0, int v = 0, int r) : radius(r) { fig = Shape(u, v); };
    float area() { return 3.14 * radius * radius; };
};

class Rectangle : public Shape
{
private:
    Shape fig;
    int length;
    int width;

public:
    Rectangle(int u = 0, int v = 0, int l, int w) : length(l), width(w) { fig = Shape(u, v); };
    int area() { return length * width; };
};