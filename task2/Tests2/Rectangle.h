#pragma once
#include "Figure.h"

class Rectangle : public Figure {
private:
    double width, height;
    std::string name;
public:
    Rectangle(double w, double h);
    double getArea() const override;
    void print() const override;
    void setName(const std::string& name) override;
    std::string getName() const override;
};


