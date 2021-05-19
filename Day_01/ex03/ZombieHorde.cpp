#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int nbr) {
	std::string alphanum = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    std::string res;
	_nZombies = nbr;
	_horde = new Zombie[nbr];
    srand(time(NULL));
	for (int i = 0; i < nbr; i++)
	{
		int len = rand() % 15 + 1;
		res = res.substr(0, 0);
		for (int i = 0; i < len; ++i)
        	res += alphanum[rand() % alphanum.length() - 1];
		_horde[i].setZombieName(res);
		_horde[i].setZombieType("Ordinary");
	}
	std::cout << "Zombies are created!" << std::endl;
}

ZombieHorde::~ZombieHorde() {
	delete [] _horde;
	std::cout << "All zombies are dead" << std::endl;
}

void ZombieHorde::announce(void)
{
	Zombie *zomb;
	zomb = _horde;

	for (int i = 0; i < _nZombies; i++)
		zomb[i].announce();
}
