#include "A.hpp"

A::A() {}

A::~A() {}

A::A(const A & rhs ) {
	*this = rhs;
}
A & A::operator=(const A & rhs) {
	static_cast<void>(rhs);
	return *this;
}