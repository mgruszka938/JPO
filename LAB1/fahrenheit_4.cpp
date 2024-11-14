#include <iostream>

double fahrenheit_to_celcius(double fahrenheit_deg){
	double celcius_deg;
	celcius_deg = (fahrenheit_deg - 32.0) * (5.0 / 9.0);
	return celcius_deg;
}
int main(){
	double fah_deg;
	double cel_deg;
	std::cout << "Give a value in Fahrenheit: " << std::endl;
	std::cin >> fah_deg;
	cel_deg = fahrenheit_to_celcius(fah_deg);
	std::cout << "Celcius value: " << cel_deg << std::endl;
}
