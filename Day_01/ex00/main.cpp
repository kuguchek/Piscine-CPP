#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap()
{
	Pony newbie;
	newbie.hadName("Pinkie Pie");
	newbie.hadColor("pink");
	newbie.isUnicorn(false);
	std::cout << "here is " << newbie.getName() << "! it is a " << newbie.getColor() << " pony!";
	if (newbie.getUnicorn() == true)
		std::cout << " and it is also an unicorne!" << std::endl;
	else
		std::cout << " and it is not a unicorne, sorry!" << std::endl;

}
void ponyOnTheStack()
{
	Pony* newbie = new Pony();
	newbie->hadName("Twilight sparcle");
	newbie->hadColor("purple");
	newbie->isUnicorn(true);
	std::cout << "here is " << newbie->getName() << "! it is a " << newbie->getColor() << " pony!";
	if (newbie->getUnicorn() == true)
		std::cout << " and it is also an unicorne!" << std::endl;
	else
		std::cout << " and it is not a unicorne, sorry!" << std::endl;
	delete newbie;
}

int main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}