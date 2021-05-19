#include "FragTrap.hpp"

int main(){
	FragTrap a;
	FragTrap b("Karina");
	FragTrap c("Angelina");
	FragTrap d("Sveta");

	a.setName("Ilona");
	c.meleeAttack("Karina");
	b.takeDamage(c.getMeleeAttack());
	d.takeDamage(1);
	d.takeDamage(100);
	c.rangedAttack("Sveta");
	b.takeDamage(c.getRangedAttack());
	d.takeDamage(20);
	d.beRepaired(50);
	a.vaulthunter_dot_exe("Karina");
	a.vaulthunter_dot_exe("Ilona");
	a.vaulthunter_dot_exe("Angelina");
	a.vaulthunter_dot_exe("Angelina");
	a.vaulthunter_dot_exe("Sveta");
	return 0;
}