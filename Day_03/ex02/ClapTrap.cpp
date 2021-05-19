#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hintPoints(100), _maxHintPoints(100),
	_energyPoint(0), _maxEnergyPoints(0), _level(1),
	_meleeDamage(0), _rangedDamage(0), _armorReduction(0) {
	srand(time(NULL));
	std::cout << "ClapTrap default contructor called " << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hintPoints(100), _maxHintPoints(100),
	_energyPoint(0), _maxEnergyPoints(0), _level(1), _name(name),
	_meleeDamage(0), _rangedDamage(0), _armorReduction(0) {
	srand(time(NULL));
	std::cout << "ClapTrap default contructor called with name <" << _name << "> parameter created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy) {
	std::cout << "ClapTrap copy contructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
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

void ClapTrap::setName(std::string name)
{
	_name = name;
}

int ClapTrap::getMeleeAttack(void){
	return _meleeDamage;
}

int ClapTrap::getRangedAttack(void){
	return _rangedDamage;
}

void ClapTrap::rangedAttack(std::string const & target){

	std::cout << "FR4G-TP <" << _name << "> attacks <" << target << "> at range, causing <" << _rangedDamage;
	std::cout << "> points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP <" <<  _name << "> attacked <" << target << "> in the melee, causing <" << _meleeDamage;
	std::cout << "> points of damage !" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount){
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
void ClapTrap::beRepaired(unsigned int amount) {
	if ((unsigned int)_hintPoints + amount <= (unsigned int)_maxHintPoints)
		_hintPoints += amount;
	else
		_hintPoints = _maxHintPoints;
	std::cout << _name << " has been repared with " << amount << " points, now his hint point is " << _hintPoints << std::endl;
}