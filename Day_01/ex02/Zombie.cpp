#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	std::cout << "Zombie " << _name << " created!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " is dead!" << std::endl;
}

void Zombie::announce(void) const {
	std::cout << "Zombie " << _name << " (type - " << _type << ") said: 'Braiiiiiiinnnssss...' " << std::endl;
}