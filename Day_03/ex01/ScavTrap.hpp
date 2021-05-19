#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>

class ScavTrap {
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & copy);
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & rhs);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(std::string const & target);
		void setName(std::string name);
		int getMeleeAttack(void);
		int getRangedAttack(void);
	private:
		int _hintPoints;
		int _maxHintPoints;
		int _energyPoint;
		int _maxEnergyPoints;
		int _level;
		std::string _name;
		int _meleeDamage;
		int _rangedDamage;
		int _armorReduction;
};

#endif