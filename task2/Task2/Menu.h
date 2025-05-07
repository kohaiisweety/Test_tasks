#pragma once
#include <vector>
#include <memory>
#include "Figure.h"

class Menu {
public:
    std::vector<std::shared_ptr<Figure>> figures;

    void createCircle();
    void createTriangle();
    void createRectangle();
    void viewFigures() const;
    void sortFiguresByArea();
    void run();
};


