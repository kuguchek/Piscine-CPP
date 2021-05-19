#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	_energyPoint = 50;
	_maxEnergyPoints = 50; 
	_meleeDamage = 20;
	_rangedDamage = 15;
	_armorReduction = 3;
	std::cout << "ScavTrap default contructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap() {
	_energyPoint = 50;
	_maxEnergyPoints = 50; 
	_meleeDamage = 20;
	_rangedDamage = 15;
	_armorReduction = 3;
	_name = name;
	std::cout << "ScavTrap default contructor called. <" << _name << "> created!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy) : ClapTrap () {
	std::cout << "ScavTrap copy contructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs){
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

void ScavTrap::challengeNewcomer(std::string const & target) {
	int randoms = rand() % 5;
	std::string all[] = {" take me coffee", " finish cpp piscine", " go away and never come back", " no sleep for two days", " do nothing today"};
	std::cout << target << ", your challange for today is ...." << all[randoms] << std::endl;
}