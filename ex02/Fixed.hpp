//
// Created by jules on 08/05/2024.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					value;
		static const int	BINARY_POINT_INDEX;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &source);
		~Fixed();

		static Fixed&	min(Fixed &fixed1, Fixed &fixed2);
		static Fixed&	min(const Fixed &fixed1, const Fixed &fixed2);
		static Fixed&	max(Fixed &fixed1, Fixed &fixed2);
		static Fixed&	max(const Fixed &fixed1, const Fixed &fixed2);

		Fixed	&operator=(const Fixed &source);
		Fixed	operator+(const Fixed &fixed) const;
		Fixed	operator-(const Fixed &fixed) const;
		Fixed	operator*(const Fixed &fixed) const;
		Fixed	operator/(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator<(const Fixed &fixed) const;
		bool	operator>(const Fixed &fixed) const;
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

		int		getRawBits() const;
		void	setRawBits(int rawBits);
		int		toInt() const;
		float	toFloat() const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &object);

#endif //FIXED_HPP
