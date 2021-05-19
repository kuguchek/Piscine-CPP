#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	_hintPoints = 100;
	_maxHintPoints = 100;
	_energyPoint = 100;
	_maxEnergyPoints =100; 
	_meleeDamage = 30;
	_rangedDamage = 20;
	_armorReduction = 5;
	std::cout << "FragTrap default contructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap() {
	_hintPoints = 100;
	_maxHintPoints = 100;
	_energyPoint = 100;
	_maxEnergyPoints =100; 
	_meleeDamage = 30;
	_rangedDamage = 20;
	_armorReduction = 5;
	_name = name;
	std::cout << "FragTrap default contructor called. <" << _name << "> created!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy) : ClapTrap() {
	std::cout << "FragTrap copy contructor called" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs){
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

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	int randoms = rand() % 5;
	if (_energyPoint < 25) {
		std::cout << "your energy point is too low - " << _energyPoint << "! can't make an attack" << std::endl;
		return ;
	}
	_energyPoint -= 25;
	std::string all[] = {"First very slow attack", "Second heavy attack", "Third small attack", "Forth incredible attack", "Fifth amazing atack"};
	std::cout << target << " attacked by " << all[randoms] << std::endl;
}