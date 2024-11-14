#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include <iostream>
#include "Point.hpp"
#include <math.h>

class Circle {
private:
    Point m_p;
    double *radius;
public:
    Circle(double r, double m_px, double m_py) : m_p(m_px, m_py){
        radius = new double;
        if (r < 0) {
            std::cout << "Negative radius" << std::endl;
            *radius = 0;
        }
        else {
            *radius = r;
        }
    }

    double getRadius() const {
        return *radius;
    }

    void setRadius(double r) {
        if (r < 0){
            std::cout << "Negative radius" << std::endl;
        }
        else{
            *radius = r;
        }
    }


    Point getPoint() const {
        return m_p;
    }

    void setCenter(double m_px, double m_py) {
        m_p.setX(m_px);
        m_p.setY(m_py);
    }

    double area() const {
        return M_PI * (*radius) * (*radius);
    }

    ~Circle() {
        delete radius;
    }
};

#endif