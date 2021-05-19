#include "ScavTrap.hpp"

int main(){
	ScavTrap a;
	ScavTrap b("Karina");
	ScavTrap c("Angelina");
	ScavTrap d("Sveta");

	a.setName("Ilona");
	c.meleeAttack("Karina");
	b.takeDamage(c.getMeleeAttack());
	d.takeDamage(1);
	d.takeDamage(100);
	c.rangedAttack("Sveta");
	d.takeDamage(c.getRangedAttack());
	d.takeDamage(20);
	d.beRepaired(50);
	d.challengeNewcomer("Sveta");
	d.challengeNewcomer("Angelina");
	d.challengeNewcomer("Karina");
	d.challengeNewcomer("Ilona");
	return 0;
}