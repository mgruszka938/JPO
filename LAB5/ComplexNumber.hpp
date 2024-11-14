#pragma once

#include <iostream>

class ComplexNumber
{
private:
    double m_real;
    double m_imag;

public:
    ComplexNumber(double r = 0.0, double i = 0.0) : m_real(r), m_imag(i) {}

    double getReal() const
    {
        return m_real;
    }

    double getImag() const
    {
        return m_imag;
    }

    void setReal(double val)
    {
        m_real = val;
    }

    void setImag(double val)
    {
        m_imag = val;
    }

    ComplexNumber operator+(const ComplexNumber &other) const
    {
        return ComplexNumber(m_real + other.m_real, m_imag + other.m_imag);
    }

    ComplexNumber operator-(const ComplexNumber &other) const
    {
        return ComplexNumber(m_real - other.m_real, m_imag - other.m_imag);
    }

    ComplexNumber operator*(const ComplexNumber &other) const
    {
        double real = m_real * other.m_real - m_imag * other.m_imag;
        double imag = m_real * other.m_imag + m_imag * other.m_real;
        return ComplexNumber(real, imag);
    }

    ComplexNumber operator/(const ComplexNumber &other) const
    {
        double denominator = other.m_real * other.m_real + other.m_imag * other.m_imag;
        if (denominator == 0)
        {
            std::cout << "Cannot divide by 0" << std::endl;
            return ComplexNumber(0, 0);
        }
        double real = (m_real * other.m_real + m_imag * other.m_imag) / denominator;
        double imag = (m_imag * other.m_real - m_real * other.m_imag) / denominator;
        return ComplexNumber(real, imag);
    }

    ComplexNumber &operator+=(const ComplexNumber &other)
    {
        m_real += other.m_real;
        m_imag += other.m_imag;
        return *this;
    }

    ComplexNumber &operator-=(const ComplexNumber &other)
    {
        m_real -= other.m_real;
        m_imag -= other.m_imag;
        return *this;
    }

    ComplexNumber &operator*=(const ComplexNumber &other)
    {
        double real = m_real * other.m_real - m_imag * other.m_imag;
        double imag = m_real * other.m_imag + m_imag * other.m_real;
        m_real = real;
        m_imag = imag;
        return *this;
    }

    ComplexNumber &operator/=(const ComplexNumber &other)
    {
        double denominator = other.m_real * other.m_real + other.m_imag * other.m_imag;
        if (denominator == 0)
        {
            std::cout << "Cannot divide by 0" << std::endl;
        }
        double real = (m_real * other.m_real + m_imag * other.m_imag) / denominator;
        double imag = (m_imag * other.m_real - m_real * other.m_imag) / denominator;
        m_real = real;
        m_imag = imag;
        return *this;
    }

    bool operator==(const ComplexNumber &other) const
    {
        return m_real == other.m_real && m_imag == other.m_imag;
    }

    bool operator!=(const ComplexNumber &other) const
    {
        return !(*this == other);
    }

    ComplexNumber &operator=(const ComplexNumber &other)
    {
        if (*this != other)
        {
            m_real = other.m_real;
            m_imag = other.m_imag;
        }
        return *this;
    }

    friend std::ostream &operator<<(std::ostream &os, const ComplexNumber &c)
    {
        os << c.m_real << (c.m_imag >= 0 ? " + " : " - ") << std::abs(c.m_imag) << "i";
        return os;
    }
};