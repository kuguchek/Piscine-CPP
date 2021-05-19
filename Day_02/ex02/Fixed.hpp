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
		bool operator>(Fixed const & rhs) const;
		bool operator<(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const;
		bool operator==(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;
		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;
		Fixed operator++(void);
		Fixed operator++(int);
		Fixed operator--(void);
		Fixed operator--(int);
		static Fixed & min(Fixed & fix1, Fixed & fix2);
		static Fixed & max(Fixed & fix1, Fixed & fix2);
		static const Fixed & min(Fixed const & fix1, Fixed const & fix2);
		static const Fixed & max(Fixed const & fix1, Fixed const & fix2);
	private:
		int _fixedVal;
		static const int _frBits = 8;
};

std::ostream & operator<<(std::ostream &st, const Fixed &rhs);

#endif