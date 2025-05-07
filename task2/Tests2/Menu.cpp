#include "Menu.h"
#include <iostream>
#include <algorithm>
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

void Menu::createCircle() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    auto circle = make_shared<Circle>(radius);
    string name;
    cout << "Enter the name for the Circle: ";
    cin >> name;
    circle->setName(name);
    figures.push_back(circle);
}

void Menu::createTriangle() {
    double base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    auto triangle = std::make_shared<Triangle>(base, height);
    string name;
    cout << "Enter the name for the Triangle: ";
    cin >> name;
    triangle->setName(name);
    figures.push_back(triangle);
}

void Menu::createRectangle() {
    double width, height;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter the height of the rectangle: ";
    cin >> height;
    auto rectangle = make_shared<Rectangle>(width, height);
    string name;
    cout << "Enter the name for the Rectangle: ";
    cin >> name;
    rectangle->setName(name);
    figures.push_back(rectangle);
}

void Menu::viewFigures() const {
    cout << "\nList of Figures:\n";
    for (const auto& figure : figures) {
        figure->print();
    }
}

void Menu::sortFiguresByArea() {
    sort(figures.begin(), figures.end(), [](const std::shared_ptr<Figure>& a, const std::shared_ptr<Figure>& b) {
        return a->getArea() < b->getArea();
        });
    cout << "\nFigures sorted by area:\n";
    viewFigures();
}

void Menu::run() {
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Create a Circle\n";
        cout << "2. Create a Triangle\n";
        cout << "3. Create a Rectangle\n";
        cout << "4. View all Figures\n";
        cout << "5. Sort Figures by Area\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            createCircle();
            break;
        case 2:
            createTriangle();
            break;
        case 3:
            createRectangle();
            break;
        case 4:
            viewFigures();
            break;
        case 5:
            sortFiguresByArea();
            break;
        case 6:
            cout << "Exiting the program...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (choice != 6);
}
