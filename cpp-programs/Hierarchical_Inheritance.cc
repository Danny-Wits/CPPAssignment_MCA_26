// Hierarchical Inheritance

#include <iostream>
using namespace std;

class Shape
{
public:
    int width, height;
    Shape(int w, int h)
    {
        width = w;
        height = h;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int w, int h) : Shape(w, h) {}
    int area()
    {
        return width * height;
    }
};

class Triangle : public Shape
{
public:
    Triangle(int w, int h) : Shape(w, h) {}
    int area()
    {
        return (width * height) / 2;
    }
};

int main()
{
    Rectangle r(10, 20);
    Triangle t(10, 20);
    cout << r.area() << endl;
    cout << t.area() << endl;
    return 0;
}