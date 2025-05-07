#pragma once

#include "Figure.h"

class Triangle : public Figure {
private:
    double base, height;
    std::string name;
public:
    Triangle(double b, double h);
    double getArea() const override;
    void print() const override;
    void setName(const std::string& name) override;
    std::string getName() const override;
};



