#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
#include <iostream>
#include "Zombie.hpp"

class ZombieHorde {
	private:
		int _nZombies;
		Zombie *_horde;
	public:
		ZombieHorde(int nbr);
		~ZombieHorde(void);
		void announce(void);
};

#endif
