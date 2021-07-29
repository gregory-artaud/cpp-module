#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap claptrap("Carlos");
	ScavTrap scavtrap("Sylvain");

	claptrap.attack("Boloss");
	claptrap.attack("");
	claptrap.takeDamage(3);
	claptrap.beRepaired(2);

	scavtrap.attack("Boloss");
	scavtrap.attack("");
	scavtrap.takeDamage(6);
	scavtrap.beRepaired(4);
	scavtrap.guardGate();

	return (0);
}
