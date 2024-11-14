#include <iostream>
#include "Point.hpp"
#include "Circle.hpp"

int main() {
    Circle c1(5.0, 2.0, 3.0);
    std::cout << c1.getRadius() << std::endl;
    std::cout << c1.area() << std::endl;
    c1.setRadius(6.0);
    c1.setCenter(5.0, 2.5);
    std::cout << c1.getRadius() << std::endl; 
    std::cout << c1.getPoint().getX() << c1.getPoint().getY() << std::endl;
    std::cout << c1.area() << std::endl;
}