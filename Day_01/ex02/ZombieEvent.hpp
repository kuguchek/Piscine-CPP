#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
#include "Zombie.hpp"
#include <iostream>

class ZombieEvent{
	private:
		std::string _type;
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		void randomChump();
};

#endif