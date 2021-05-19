#include <iostream>
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap() {
	_hintPoints = 60;
	_maxHintPoints = 60;
	_energyPoint = 120;
	_maxEnergyPoints = 120; 
	_meleeDamage = 60;
	_rangedDamage = 5;
	_armorReduction = 0;
	std::cout << "NinjaTrap default contructor called " << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap() {
	_hintPoints = 60;
	_maxHintPoints = 60;
	_energyPoint = 120;
	_maxEnergyPoints = 120; 
	_meleeDamage = 60;
	_rangedDamage = 5;
	_armorReduction = 0;
	_name = name;
	std::cout << "NinjaTrap default contructor called. <" << _name << "> created!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & copy) : ClapTrap() {
	std::cout << "NinjaTrap copy contructor called" << std::endl;
	*this = copy;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "Ninja destructor called" << std::endl;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs){
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

void NinjaTrap::ninjaShoebox(NinjaTrap & ref){
	ref.takeDamage(_meleeDamage);
}

void NinjaTrap::ninjaShoebox(FragTrap & ref){
	ref.takeDamage(_meleeDamage);
}

void NinjaTrap::ninjaShoebox(ScavTrap & ref){
	ref.takeDamage(_meleeDamage);
}

void NinjaTrap::ninjaShoebox(ClapTrap  & ref){
	ref.takeDamage(_meleeDamage);
}