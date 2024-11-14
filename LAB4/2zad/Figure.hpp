#pragma once

#include <iostream>
#include <string>
#include "Point.hpp"

class Figure
{
private:
    Point m_centre;
    std::string m_name;

public:
    // parametrized constructor
    Figure(const Point &p, std::string name) : m_centre(p), m_name(name) {}

    virtual double area() const = 0;
    virtual void description() const = 0;

    void printCentre() const
    {
        std::cout << "My centre is (" << m_centre.getX() << ", " << m_centre.getY() << ")" << std::endl;
    }

    void introduce() const
    {
        std::cout << "I'm a " << m_name << std::endl;
    }

    Point getCentre() const
    {
        return m_centre;
    }

    void setCentre(const Point &p)
    {
        m_centre = p;
    }

    std::string getCentre_name() const
    {
        return m_name;
    }

    void setCentre_name(std::string name)
    {
        m_name = name;
    }
};