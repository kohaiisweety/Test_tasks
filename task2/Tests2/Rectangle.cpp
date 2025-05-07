#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

double Rectangle::getArea() const {
    return width * height;
}

void Rectangle::print() const {
    std::cout << getName() << " (Rectangle) with width " << width << " and height " << height << " has area: " << getArea() << std::endl;
}

void Rectangle::setName(const std::string& name) {
    this->name = name;
}

std::string Rectangle::getName() const {
    return name;
}
