#include <iostream>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {
	int r = rand() % 3;
	if (r % 3 == 0)
		return (new A);
	else if (r % 3 == 1)
		return (new B);
	else
		return (new C);
}

void identify_from_pointer(Base * p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		return ;
}

void identify_from_reference(Base & p) {
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
	else
		return ;
}

int main() {
	srand(time(0));
	Base *b = generate();
	std::cout << "from pointer: ";
	identify_from_pointer(b);
	std::cout << "from reference: ";
	identify_from_reference(*b);
}