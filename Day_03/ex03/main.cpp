#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

int main(){
	ScavTrap a("Snezhana");
	FragTrap b("Anya");
	NinjaTrap n;

	n.setName("Ilona");
	a.meleeAttack(n.getName());
	n.takeDamage(a.getMeleeAttack());
	b.takeDamage(1);
	b.takeDamage(100);
	a.rangedAttack(n.getName());
	n.takeDamage(a.getRangedAttack());
	a.takeDamage(20);
	n.ninjaShoebox(a);
	n.ninjaShoebox(b);
	n.ninjaShoebox(a);
	n.ninjaShoebox(b);
	n.ninjaShoebox(a);
	return 0;
}