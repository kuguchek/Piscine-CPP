#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>

class FragTrap {
	public:
		FragTrap(std::string _name);
		FragTrap(FragTrap const & copy);
		FragTrap(void);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const & rhs);
		void setName(std::string name);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getMeleeAttack(void);
		int getRangedAttack(void);
		void vaulthunter_dot_exe(std::string const & target);
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