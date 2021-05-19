#include <iostream>
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : ClapTrap(), FragTrap(), NinjaTrap() {
	_hintPoints = 100;
	_maxHintPoints = 100;
	_energyPoint = 120;
	_maxEnergyPoints = 120; 
	_meleeDamage = 60;
	_rangedDamage = 20;
	_armorReduction = 5;
	std::cout << "SuperTrap default contructor called " << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	_hintPoints = 100;
	_maxHintPoints = 100;
	_energyPoint = 120;
	_maxEnergyPoints = 120; 
	_meleeDamage = 60;
	_rangedDamage = 20;
	_armorReduction = 5;
	_name = name;
	std::cout << "SuperTrap default contructor called. <" << _name << "> created!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & copy) : ClapTrap(copy), FragTrap(copy), NinjaTrap(copy) {
	std::cout << "SuperTrap copy contructor called" << std::endl;
	*this = copy;
}

SuperTrap::~SuperTrap() {
	std::cout << "SuperTrap destructor called" << std::endl;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & rhs){
	std::cout << "Assignation operator called" << std::endl;
	_hintPoints = rhs._hintPoints;
	_maxHintPoints = rhs._maxHintPoints;
	_energyPoint = rhs._energyPoint;
	_maxEnergyPoints = rhs._maxEnergyPoints;
	_level = rhs._level;
	_name = rhs._name;
	_meleeDamage = rhs._meleeDamage;
	_rangedDamage = rhs._rangedDamage;
	_armorReduction = rhs._armorReduction;
	return *this;
}

void SuperTrap::rangedAttack(std::string const & target) {
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target) {
	NinjaTrap::meleeAttack(target);
}