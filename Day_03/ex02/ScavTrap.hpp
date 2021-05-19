#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & copy);
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & rhs);
		
		void challengeNewcomer(std::string const & target);
};

#endif