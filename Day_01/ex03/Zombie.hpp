#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie{
	private:
		std::string _name;
		std::string _type;
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void setZombieType(std::string type);
		void setZombieName(std::string name);
};

#endif