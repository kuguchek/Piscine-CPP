#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedVal(0) {
	std::cout << "Default contructor called" << std::endl;
}

Fixed::Fixed(Fixed const & copy) {
	std::cout << "Copy contructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs){
	std::cout << "Assignation operator called" << std::endl;
	_fixedVal = rhs.getRawBits();
	return *this;
}

int  Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _fixedVal;
}

void  Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_fixedVal = raw;
}