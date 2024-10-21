#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    double width;
    double height;
public:
    Shape(double w = 0, double h = 0) : width(w), height(h) {}
    virtual double area() {
        cout << "Parent class area: ";
        return 0;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    Rectangle(double w = 0, double h = 0) : Shape(w, h) {}
    double area() override {
        cout << "Rectangle class area: ";
        return width * height;
    }
};

// Another derived class
class Triangle : public Shape {
public:
    Triangle(double w = 0, double h = 0) : Shape(w, h) {}
    double area() override {
        cout << "Triangle class area: ";
        return 0.5 * width * height;
    }
};

int main() {
    Shape *shape;
    Rectangle rect(5, 4);
    Triangle tri(5, 4);

    shape = &rect;
    cout << shape->area() << endl;

    shape = &tri;
    cout << shape->area() << endl;

    return 0;
}
