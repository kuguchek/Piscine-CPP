#include "B.hpp"

B::B() {}

B::~B() {}

B::B(const B & rhs ) {
	*this = rhs;
}
B & B::operator=(const B & rhs) {
	static_cast<void>(rhs);
	return *this;
}