//
// Created by jules on 08/05/2024.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int					value;
		static const int	BINARY_POINT_INDEX;

	public:
		Fixed();
		Fixed(const Fixed &source);
		Fixed &operator=(const Fixed &source);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int rawBits);
};


#endif //FIXED_HPP
