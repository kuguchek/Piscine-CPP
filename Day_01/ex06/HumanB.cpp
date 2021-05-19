#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name) {}
HumanB::~HumanB() {};

void HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << _w->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_w = &weapon;
}