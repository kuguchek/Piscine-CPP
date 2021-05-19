#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedVal(0) {
	std::cout << "Default contructor called" << std::endl;
}

Fixed::Fixed(Fixed const & copy) {
	std::cout << "Copy contructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int ival) {
	_fixedVal = ival << _frBits;
	std::cout << "Int contructor called" << std::endl;
}

Fixed::Fixed(const float fval) {
	_fixedVal = roundf(fval * pow(2, _frBits));
	std::cout << "Float contructor called" << std::endl;
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
	return _fixedVal;
}

void  Fixed::setRawBits(int const raw) {
	_fixedVal = raw;
}

float Fixed::toFloat(void) const {
	return (_fixedVal / pow(2, _frBits));
}

int Fixed::toInt(void) const {
	return (_fixedVal >> _frBits);
}

std::ostream & operator<<(std::ostream &st, Fixed const & rhs)
{
	st << rhs.toFloat();
	return (st);
}

bool Fixed::operator>(Fixed const & rhs) const {
	return (_fixedVal > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) const {
	return (_fixedVal < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) const {
	return (_fixedVal >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const {
	return (_fixedVal <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) const {
	return (_fixedVal == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) const {
	return (_fixedVal != rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const & rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const & rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const & rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const & rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed Fixed::operator++(void) {
	_fixedVal++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return (tmp);
}

Fixed Fixed::operator--(void) {
	_fixedVal--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return (tmp);
}

Fixed & Fixed::max(Fixed & fix1, Fixed & fix2) {
	return (fix1 >= fix2 ? fix1 : fix2);
}

Fixed & Fixed::min(Fixed & fix1, Fixed & fix2) {
	return (fix1 <= fix2 ? fix1 : fix2);
}

const Fixed & Fixed::max(Fixed const & fix1, Fixed const & fix2) {
	return (fix1 >= fix2 ? fix1 : fix2);
}

const Fixed & Fixed::min(Fixed const & fix1, Fixed const & fix2) {
	return (fix1 <= fix2 ? fix1 : fix2);
}