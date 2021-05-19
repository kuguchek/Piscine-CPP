#include "Human.hpp"
#include "Brain.hpp"

Human::Human (void) {}

Human::~Human(void) {};

std::string Human::identify(void) const
{
	std::string str;

	str = _br.identify();
	return (str);
}

const Brain &Human::getBrain(void) {
	return (_br);
}