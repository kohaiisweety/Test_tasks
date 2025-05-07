#pragma once

#include "Figure.h"
#include <cmath>

class Circle : public Figure {
private:
    double radius;
    std::string name;
public:
    Circle(double r);
    double getArea() const override;
    void print() const override;
    void setName(const std::string& name) override;
    std::string getName() const override;
};

