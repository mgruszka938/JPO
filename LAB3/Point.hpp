#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>

class Point{
private:
    double m_xaxis;
    double m_yaxis;

public:
    Point(double x, double y) : m_xaxis(x), m_yaxis(y){}

    double getX() const{
        return m_xaxis;
    }

    void setX(double x){
        m_xaxis = x;
    }

    double getY() const{
        return m_yaxis;
    }

    void setY(double y){
        m_yaxis = y;
    }

    void display() const{
        std::cout << "(" << m_xaxis << ", " << m_yaxis << ")" << std::endl;
    }
};
#endif