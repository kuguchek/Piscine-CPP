#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & copy);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const & rhs);
		
		void vaulthunter_dot_exe(std::string const & target);
};

#endif