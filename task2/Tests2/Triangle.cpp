#include "Triangle.h"
#include <iostream>

Triangle::Triangle(double b, double h) : base(b), height(h) {}

double Triangle::getArea() const {
    return 0.5 * base * height;
}

void Triangle::print() const {
    std::cout << getName() << " (Triangle) with base " << base << " and height " << height << " has area: " << getArea() << std::endl;
}

void Triangle::setName(const std::string& name) {
    this->name = name;
}

std::string Triangle::getName() const {
    return name;
}
