#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent () { }
ZombieEvent::~ZombieEvent () { };

void ZombieEvent::setZombieType(std::string type) {
	_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *zomb;
	zomb = new Zombie(name, _type);
	return (zomb);
}

void ZombieEvent::randomChump(void) {
    Zombie *zomb;
    std::string alphanum = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    std::string res;

    srand(time(NULL));
    int len = rand() % 15 + 1;
    for (int i = 0; i < len; ++i) {
        res += alphanum[rand() % alphanum.length() - 1];
    }
    zomb = newZombie(res);
    zomb->announce();
    delete zomb;
}
