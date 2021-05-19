#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
	ScavTrap a;
	FragTrap b("Karina");
	ScavTrap c("Angelina");
	FragTrap d("Sveta");

	a.setName("Ilona");
	c.meleeAttack("Karina");
	b.takeDamage(c.getMeleeAttack());
	d.takeDamage(1);
	d.takeDamage(100);
	c.rangedAttack("Sveta");
	d.takeDamage(c.getRangedAttack());
	d.takeDamage(20);
	d.beRepaired(50);
	a.challengeNewcomer("Sveta");
	b.vaulthunter_dot_exe("Angelina");
	c.challengeNewcomer("Karina");
	d.vaulthunter_dot_exe("Ilona");
	return 0;
}