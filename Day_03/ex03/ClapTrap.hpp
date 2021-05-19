#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & copy);
		~ClapTrap(void);
		ClapTrap & operator=(ClapTrap const & rhs);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setName(std::string name);
		int getMeleeAttack(void);
		int getRangedAttack(void);
		std::string getName(void);
	protected:
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