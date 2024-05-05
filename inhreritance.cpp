#include <iostream>


class Shape {
protected:
    double width;
    double height;

public:
    Shape(double w, double h) : width(w), height(h) {}

    
    virtual double area() const =0;
};


class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}


    double area() const override {
        return width * height;
    }
};


class Triangle : public Shape {
public:
    Triangle(double w, double h) : Shape(w, h) {}

    
    double area() const override {
        return 0.5 * width * height;
    }
};

int main() {
    Rectangle rect(5, 4);
    Triangle tri(6, 3);

    std::cout << "Area of Rectangle: " << rect.area() << std::endl;
    std::cout << "Area of Triangle: " << tri.area() << std::endl;

    return 0;
}
