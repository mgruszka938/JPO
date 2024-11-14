#pragma once

#include <iostream>
#include <type_traits>

namespace mg
{
    namespace jpo
    {
        template <typename T>
            requires std::is_arithmetic_v<T>
        class ComplexNumber
        {
        private:
            T m_real;
            T m_imag;

        public:
            ComplexNumber(T r = 0.0, T i = 0.0) : m_real(r), m_imag(i) {}

            T getReal() const
            {
                return m_real;
            }

            T getImag() const
            {
                return m_imag;
            }

            void setReal(T val)
            {
                m_real = val;
            }

            void setImag(T val)
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
                T real = m_real * other.m_real - m_imag * other.m_imag;
                T imag = m_real * other.m_imag + m_imag * other.m_real;
                return ComplexNumber(real, imag);
            }

            ComplexNumber operator/(const ComplexNumber &other) const
            {
                T denominator = other.m_real * other.m_real + other.m_imag * other.m_imag;
                if (denominator == 0)
                {
                    std::cout << "Cannot divide by 0" << std::endl;
                }
                T real = (m_real * other.m_real + m_imag * other.m_imag) / denominator;
                T imag = (m_imag * other.m_real - m_real * other.m_imag) / denominator;
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
                T real = m_real * other.m_real - m_imag * other.m_imag;
                T imag = m_real * other.m_imag + m_imag * other.m_real;
                m_real = real;
                m_imag = imag;
                return *this;
            }

            ComplexNumber &operator/=(const ComplexNumber &other)
            {
                T denominator = other.m_real * other.m_real + other.m_imag * other.m_imag;
                if (denominator == 0)
                {
                    std::cout << "Cannot divide by 0" << std::endl;
                }
                T real = (m_real * other.m_real + m_imag * other.m_imag) / denominator;
                T imag = (m_imag * other.m_real - m_real * other.m_imag) / denominator;
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
                return !(m_real == other.m_real && m_imag == other.m_imag);
            }

            ComplexNumber &operator=(const ComplexNumber &other)
            {
                if (this != &other)
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
    }
}