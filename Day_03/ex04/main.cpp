#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"

int main(){
	ScavTrap g("Ilona");
	FragTrap f("Katya");
	NinjaTrap n("Karina");
	SuperTrap s("Inna");

	s.ninjaShoebox(f);
	s.vaulthunter_dot_exe(f.getName());
	s.ninjaShoebox(g);
	s.vaulthunter_dot_exe(n.getName());
	s.rangedAttack(g.getName());
	g.takeDamage(s.getRangedAttack());
	s.meleeAttack("Karina");
	n.takeDamage(s.getMeleeAttack());
	return 0;
}