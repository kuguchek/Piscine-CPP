#include <iostream>
#include "Zombie.hpp"

void Zombie::setZombieType(std::string type) {
	_type = type;
}

void Zombie::setZombieName(std::string name) {
	_name = name;
}

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << _name << " is dead" << std::endl;
}

void Zombie::announce(void){
	std::cout << "Zombie " << _name << " (type - " << _type << ") said: 'Braiiiiiiinnnssss...' " << std::endl;
}