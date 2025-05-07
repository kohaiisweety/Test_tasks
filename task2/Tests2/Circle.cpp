#include "Circle.h"
#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

Circle::Circle(double r) : radius(r) {}

double Circle::getArea() const {
    return M_PI * radius * radius;
}

void Circle::print() const {
    std::cout << getName() << " (Circle) with radius " << radius << " has area: " << getArea() << std::endl;
}

void Circle::setName(const std::string& name) {
    this->name = name;
}

std::string Circle::getName() const {
    return name;
}
