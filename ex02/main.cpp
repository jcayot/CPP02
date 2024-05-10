//
// Created by jules on 08/05/2024.
//

#include "Fixed.hpp"
#include <iostream>

int main() {

	// Default constructor
	Fixed a;
	std::cout << "Default constructor: " << a << std::endl;

	// Int constructor
	Fixed b(5);
	std::cout << "Int constructor: " << b << std::endl;

	// Float constructor
	Fixed c(12.34f);
	std::cout << "Float constructor: " << c << std::endl;

	// Copy constructor
	Fixed d(b);
	std::cout << "Copy constructor: " << d << std::endl;

	// Assignment operator
	Fixed e;
	e = b;
	std::cout << "Assignment operator: " << e << std::endl;

	// Prefix increment
	++b;
	std::cout << "Prefix increment: " << b << std::endl;

	// Postfix increment
	b++;
	std::cout << "Postfix increment: " << b << std::endl;

	// Prefix decrement
	--b;
	std::cout << "Prefix decrement: " << b << std::endl;

	// Postfix decrement
	b--;
	std::cout << "Postfix decrement: " << b << std::endl;

	// Arithmetic operators
	Fixed f = e + d;
	std::cout << "Addition: " << f << std::endl;
	f = e - d;
	std::cout << "Subtraction: " << f << std::endl;
	f = e * d;
	std::cout << "Multiplication: " << f << std::endl;
	f = e / d;
	std::cout << "Division: " << f << std::endl;

	// Comparison operators
	std::cout << "Equality: " << (e == d) << std::endl;
	std::cout << "Inequality: " << (e != d) << std::endl;
	std::cout << "Greater: " << (e > d) << std::endl;
	std::cout << "Less: " << (e < d) << std::endl;
	std::cout << "Greater or Equal: " << (e >= d) << std::endl;
	std::cout << "Less or Equal: " << (e <= d) << std::endl;

	// toInt and toFloat
	std::cout << "toInt: " << e.toInt() << std::endl;
	std::cout << "toFloat: " << e.toFloat() << std::endl;

	return 0;
}
