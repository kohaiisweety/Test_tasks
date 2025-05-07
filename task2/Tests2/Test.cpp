#include <gtest/gtest.h>
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Figure.h"
#include "Menu.h"
#include <memory>
#include <vector>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


TEST(CircleTest, AreaCalculation) {
    Circle circle(5); 
    EXPECT_DOUBLE_EQ(circle.getArea(), M_PI * 25); 
}


TEST(CircleTest, SetName) {
    Circle circle(5);
    circle.setName("MyCircle");
    EXPECT_EQ(circle.getName(), "MyCircle");
}


TEST(TriangleTest, AreaCalculation) {
    Triangle triangle(5, 10); 
    EXPECT_DOUBLE_EQ(triangle.getArea(), 25); 
}


TEST(TriangleTest, SetName) {
    Triangle triangle(5, 10);
    triangle.setName("MyTriangle");
    EXPECT_EQ(triangle.getName(), "MyTriangle");
}


TEST(RectangleTest, AreaCalculation) {
    Rectangle rectangle(4, 6); 
    EXPECT_DOUBLE_EQ(rectangle.getArea(), 24); 
}


TEST(RectangleTest, SetName) {
    Rectangle rectangle(4, 6);
    rectangle.setName("MyRectangle");
    EXPECT_EQ(rectangle.getName(), "MyRectangle");
}

TEST(SortTest, SortFiguresByArea) {
  
    std::vector<std::shared_ptr<Figure>> figures;
    figures.push_back(std::make_shared<Circle>(5)); 
    figures.push_back(std::make_shared<Triangle>(5, 10)); 
    figures.push_back(std::make_shared<Rectangle>(4, 6));

    std::sort(figures.begin(), figures.end(), [](const std::shared_ptr<Figure>& a, const std::shared_ptr<Figure>& b) {
        return a->getArea() < b->getArea(); 
        });

    EXPECT_LT(figures[0]->getArea(), figures[1]->getArea());
    EXPECT_LT(figures[1]->getArea(), figures[2]->getArea()); 

    EXPECT_NEAR(figures[0]->getArea(), 24, 0.01); 
    EXPECT_NEAR(figures[1]->getArea(), 25, 0.01); 
    EXPECT_NEAR(figures[2]->getArea(), 25 * M_PI, 0.01); 
}


TEST(PrintTest, PrintCircle) {
    Circle circle(3);
    testing::internal::CaptureStdout();
    circle.print();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Circle") != std::string::npos);
    EXPECT_TRUE(output.find("3") != std::string::npos);
}
