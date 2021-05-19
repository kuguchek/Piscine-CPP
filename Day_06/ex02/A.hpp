#ifndef A_HPP
# define A_HPP

#include "Base.hpp"

class A : public Base {
	public:
		A();
		A(const A & rhs);
		virtual ~A();

		A & operator=(const A & rhs);
};

#endif