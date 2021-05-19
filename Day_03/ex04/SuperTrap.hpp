#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
	public:
		SuperTrap (std::string name);
		SuperTrap (SuperTrap  const & copy);
		SuperTrap (void);
		~SuperTrap (void);
		SuperTrap  & operator=(SuperTrap  const & rhs);
		
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
};

#endif