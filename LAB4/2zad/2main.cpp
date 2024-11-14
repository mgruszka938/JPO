#include "Circle.hpp"

int main()
{
    Circle circle(6.5, Point(6,2), "Circle");
    std::cout << circle.getRadius() << std::endl;
}