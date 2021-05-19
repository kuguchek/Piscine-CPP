#include "Brain.hpp"
#include <sstream>

Brain::Brain (void) {}

Brain::~Brain(void) {};

std::string Brain::identify(void) const
{
	std::ostringstream ss;
	std::string str;

	ss << std::hex << this;
	str = ss.str();
	return (str);
}