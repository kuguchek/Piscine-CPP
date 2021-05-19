#include <iostream>
#include <ctime>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _hintPoints(100), _maxHintPoints(100),
	_energyPoint(50), _maxEnergyPoints(50), _level(1),
	_meleeDamage(20), _rangedDamage(15), _armorReduction(3) {
	srand(time(NULL));
	std::cout << "Default contructor called " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _hintPoints(100), _maxHintPoints(100),
	_energyPoint(50), _maxEnergyPoints(50), _level(1), _name(name),
	_meleeDamage(20), _rangedDamage(15), _armorReduction(3) {
	srand(time(NULL));
	std::cout << "Default contructor called with name <" << _name << "> parameter created!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy) {
	std::cout << "Copy contructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor called" << std::endl;
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

void ScavTrap::setName(std::string name)
{
	_name = name;
}

int ScavTrap::getMeleeAttack(void){
	return _meleeDamage;
}

int ScavTrap::getRangedAttack(void){
	return _rangedDamage;
}

void ScavTrap::rangedAttack(std::string const & target){

	std::cout << "FR4G-TP <" << _name << "> attacks <" << target << "> at range, causing <" << _rangedDamage;
	std::cout << "> points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP <" <<  _name << "> attacked <" << target << "> in the melee, causing <" << _meleeDamage;
	std::cout << "> points of damage !" << std::endl;
}
void ScavTrap::takeDamage(unsigned int amount){
	if ((unsigned int)_armorReduction >= amount) {
		std::cout << _name << " has strong armor! so, he did not been attacked!" << std::endl;
		return ;
	}
	amount -= _armorReduction;
	int damage =  _hintPoints - amount;
	if (damage < 0)
		_hintPoints = 0;
	else
		_hintPoints -= amount;
	std::cout << _name << " has been attacked and lost " << amount << " hint points, now his hp is " << _hintPoints << std::endl;
}
void ScavTrap::beRepaired(unsigned int amount) {
	if ((unsigned int)_hintPoints + amount <= (unsigned int)_maxHintPoints)
		_hintPoints += amount;
	else
		_hintPoints = _maxHintPoints;
	std::cout << _name << " has been repared with " << amount << " points, now his hint point is " << _hintPoints << std::endl;
}
void ScavTrap::challengeNewcomer(std::string const & target) {
	int randoms = rand() % 5;
	std::string all[] = {" take me coffee", " finish cpp piscine", " go away and never come back", " no sleep for two days", " do nothing today"};
	std::cout << target << ", your challange for today is...." << all[randoms] << std::endl;
}