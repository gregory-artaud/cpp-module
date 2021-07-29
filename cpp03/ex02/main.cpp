#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap claptrap("Carlos");
	ScavTrap scavtrap("Sylvain");
	FragTrap fragtrap("Florent");

	claptrap.attack("Boloss");
	claptrap.attack("");
	claptrap.takeDamage(3);
	claptrap.beRepaired(2);

	scavtrap.attack("Boloss");
	scavtrap.attack("");
	scavtrap.takeDamage(6);
	scavtrap.beRepaired(4);
	scavtrap.guardGate();

	fragtrap.attack("Boloss");
	fragtrap.attack("");
	fragtrap.takeDamage(6);
	fragtrap.beRepaired(4);
	fragtrap.highFivesGuys();

	return (0);
}
