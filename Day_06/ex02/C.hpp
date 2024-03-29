#ifndef C_HPP
# define C_HPP

#include "Base.hpp"

class C : public Base {
	public:
		C();
		C(const C & rhs);
		virtual ~C();

		C & operator=(const C & rhs);
};

#endif