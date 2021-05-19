#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
	public:
		NinjaTrap (std::string name);
		NinjaTrap (NinjaTrap  const & copy);
		NinjaTrap (void);
		~NinjaTrap (void);
		NinjaTrap  & operator=(NinjaTrap  const & rhs);
		
		void ninjaShoebox(NinjaTrap & ref);
		void ninjaShoebox(ClapTrap & ref);
		void ninjaShoebox(FragTrap & ref);
		void ninjaShoebox(ScavTrap & ref);
};

#endif