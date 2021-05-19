#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _hintPoints(100), _maxHintPoints(100),
	_energyPoint(100), _maxEnergyPoints(100), _level(1), 
	_meleeDamage(30), _rangedDamage(20), _armorReduction(5) {
	srand(time(NULL));
	std::cout << "Default contructor called " << std::endl;
}

FragTrap::FragTrap(std::string _name) : _hintPoints(100), _maxHintPoints(100),
	_energyPoint(100), _maxEnergyPoints(100), _level(1), _name(_name),
	_meleeDamage(30), _rangedDamage(20), _armorReduction(5) {
	srand(time(NULL));
	std::cout << "Default contructor called. " << _name << " created!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy) {
	std::cout << "Copy contructor called" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor called" << std::endl;
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

int FragTrap::getMeleeAttack(void){
	return _meleeDamage;
}

int FragTrap::getRangedAttack(void){
	return _rangedDamage;
}

void FragTrap::setName(std::string name)
{
	_name = name;
}

void FragTrap::rangedAttack(std::string const & target){

	std::cout << "FR4G-TP <" << _name << "> attacks <" << target << "> at range, causing <" << _rangedDamage;
	std::cout << "> points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP <" <<  _name << "> attacked by <" << target << "> in the melee, causing <" << _meleeDamage;
	std::cout << "> points of damage !" << std::endl;
}
void FragTrap::takeDamage(unsigned int amount){
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
void FragTrap::beRepaired(unsigned int amount) {
	if ((unsigned int)_hintPoints + amount <= (unsigned int)_maxHintPoints)
		_hintPoints += amount;
	else
		_hintPoints = _maxHintPoints;
	std::cout << _name << " has been repared with " << amount << " points, now his hint point is " << _hintPoints << std::endl;
}
void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	int randoms = rand() % 5;
	if (_energyPoint < 25) {
		std::cout << _name << ", your energy point is too low - " << _energyPoint << "! can't make an attack" << std::endl;
		return ;
	}
	_energyPoint -= 25;
	std::string all[] = {"First very slow attack", "Second heavy attack", "Third small attack", "Forth incredible attack", "Fifth amazing atack"};
	std::cout << target << " attacked by " << all[randoms] << std::endl;
}