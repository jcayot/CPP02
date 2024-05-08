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

		Fixed &operator=(const Fixed &source);

		int		getRawBits() const;
		void	setRawBits(int rawBits);
		int		toInt() const;
		float	toFloat() const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &object);

#endif //FIXED_HPP
