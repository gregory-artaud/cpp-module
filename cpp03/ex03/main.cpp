#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap claptrap("Carlos");
	ScavTrap scavtrap("Sylvain");
	FragTrap fragtrap("Florent");
	DiamondTrap diamondtrap("Didier");
	
	claptrap.attack("Boloss");
	claptrap.attack("");
	claptrap.takeDamage(1);
	claptrap.beRepaired(2);

	scavtrap.attack("Boloss");
	scavtrap.attack("");
	scavtrap.takeDamage(3);
	scavtrap.beRepaired(4);
	scavtrap.guardGate();

	fragtrap.attack("Boloss");
	fragtrap.attack("");
	fragtrap.takeDamage(5);
	fragtrap.beRepaired(6);
	fragtrap.highFivesGuys();

	diamondtrap.attack("Boloss");
	diamondtrap.attack("");
	diamondtrap.takeDamage(7);
	diamondtrap.beRepaired(8);
	diamondtrap.highFivesGuys();
	diamondtrap.guardGate();
	diamondtrap.whoAmI();

	return (0);
}
