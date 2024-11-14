#pragma once

#include "Figure.hpp"

class Circle : public Figure
{
private:
    double m_radius;

public:
    Circle(double r, const Point &p, std::string name) : m_radius(r), Figure(p, "Circle") {}

    double area() const override
    {
        return 3.14 * m_radius * m_radius;
    }

    void description() const override
    {
        std::cout << "I have a radius: " << m_radius << std::endl;
    }

    double getRadius() const
    {
        return m_radius;
    }

    void setRadius(double value)
    {
        if (value < 0)
        {
            std::cout << "Negative value of radius" << std::endl;
        }
        else
        {
            m_radius = value;
        }
    }
};