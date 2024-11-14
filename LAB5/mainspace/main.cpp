#include <iostream>
#include "ComplexNumber.hpp"

int main()
{
    mg::jpo::ComplexNumber c1(3, 4);
    mg::jpo::ComplexNumber c2(1, -2);
    mg::jpo::ComplexNumber c3;

    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c3 (default): " << c3 << std::endl;

    std::cout << "c1 real part: " << c1.getReal() << ", imaginary part: " << c1.getImag() << std::endl;
    c1.setReal(5);
    c1.setImag(6);
    std::cout << "After setting, c1: " << c1 << std::endl;

    mg::jpo::ComplexNumber addResult = c1 + c2;
    std::cout << "c1 + c2 = " << addResult << std::endl;

    mg::jpo::ComplexNumber subResult = c1 - c2;
    std::cout << "c1 - c2 = " << subResult << std::endl;

    mg::jpo::ComplexNumber mulResult = c1 * c2;
    std::cout << "c1 * c2 = " << mulResult << std::endl;

    mg::jpo::ComplexNumber divResult = c1 / c2;
    std::cout << "c1 / c2 = " << divResult << std::endl;

    c1 += c2;
    std::cout << "c1 += c2; c1 = " << c1 << std::endl;

    c1 -= c2;
    std::cout << "c1 -= c2; c1 = " << c1 << std::endl;

    c1 *= c2;
    std::cout << "c1 *= c2; c1 = " << c1 << std::endl;

    c1 /= c2;
    std::cout << "c1 /= c2; c1 = " << c1 << std::endl;

    mg::jpo::ComplexNumber c4(5, 6);
    mg::jpo::ComplexNumber c5(5, 6);
    mg::jpo::ComplexNumber c6(1, 1);
    std::cout << "c4 == c5: " << (c4 == c5 ? "True" : "False") << std::endl;
    std::cout << "c4 != c6: " << (c4 != c6 ? "True" : "False") << std::endl;

    c3 = c1;
    std::cout << "After assignment, c3 = " << c3 << std::endl;

    return 0;
}
