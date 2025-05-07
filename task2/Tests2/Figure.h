#pragma once

#include <string>

class Figure {
public:
    virtual double getArea() const = 0; 
    virtual void print() const = 0; 
    virtual void setName(const std::string& name) = 0; 
    virtual std::string getName() const = 0; 
    virtual ~Figure() = default;
};


