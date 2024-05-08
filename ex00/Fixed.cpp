//
// Created by jules on 08/05/2024.
//

#include "Fixed.hpp"

const int Fixed::BINARY_POINT_INDEX = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this -> value = 0;
}

Fixed::Fixed(const Fixed &source) {
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed &Fixed::operator=(const Fixed &source) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &source)
		return (*this);
	this -> value = source.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this -> value);
}

void Fixed::setRawBits(int rawBits) {
	std::cout << "setRawBits member function called" << std::endl;
	this -> value = rawBits;
}
