//
// Created by jules on 08/05/2024.
//

#include "Fixed.hpp"

const int Fixed::BINARY_POINT_INDEX = 8;

Fixed::Fixed() {
	std::cout << "Int constructor called" << std::endl;
	this -> value = 0;
}

Fixed::Fixed(const int value) {
	std::cout << "Default constructor called" << std::endl;
	this -> value = value * (1 << BINARY_POINT_INDEX);
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this -> value = roundf(value * (1 << BINARY_POINT_INDEX));
}

Fixed::Fixed(const Fixed &source) {
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &source) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &source)
		return (*this);
	this -> value = source.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &object) {
	os << object.toFloat();
	return (os);
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this -> value);
}

void Fixed::setRawBits(int rawBits) {
	std::cout << "setRawBits member function called" << std::endl;
	this -> value = rawBits;
}

int Fixed::toInt() const {
	return (value / (1 << BINARY_POINT_INDEX));
}

float Fixed::toFloat() const {
	return (((float)value) / (1 << BINARY_POINT_INDEX));
}
