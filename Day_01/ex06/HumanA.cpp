#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _w(weapon) {}
HumanA::~HumanA() {};

void HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _w.getType() << std::endl;
}