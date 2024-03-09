// Copyright 2024 Fedor Khodyrev
#include <cstdint>
#include <cmath>

class Circle {
private:
    double radius;
    double ference;
    double area;
    const double PI = 3.14159;

public:
    Circle();
    Circle(double radius);
    void setRadius(double r);
    void setFerence(double f);
    void setArea(double a);

    double getRadius();
    double getFerence();
    double getArea();

private:
    void calculateFerence();
    void calculateArea();
};