#include "C.hpp"

C::C() {}

C::~C() {}

C::C(const C & rhs ) {
	*this = rhs;
}
C & C::operator=(const C & rhs) {
	static_cast<void>(rhs);
	return *this;
}