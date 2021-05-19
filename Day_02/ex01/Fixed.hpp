#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(Fixed const & copy);
		~Fixed(void);
		Fixed & operator=(Fixed const & rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed(const int ival);
		Fixed(const float fval);
		float toFloat(void) const;
		int toInt(void) const;
	private:
		int _fixedVal;
		static const int _frBits = 8;
};

std::ostream & operator<<(std::ostream &st, const Fixed &rhs);

#endif