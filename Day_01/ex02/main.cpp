#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie *first;
	Zombie second("Ilona", "Voodoo");
	Zombie *third;
	ZombieEvent ev;

	ev.setZombieType("Generic");
	first = ev.newZombie("Snizhana");
	first->announce();
	delete first;
	second.announce();
	third = new Zombie("Alina", "Runner");
	third->announce();
	delete third;
	ev.setZombieType("Stupid");
	ev.randomChump();
	return (0);
}