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
	
	std::cout << "=== CLAPTRAP TESTS ===" << std::endl;
	claptrap.attack("Boloss");
	claptrap.attack("");
	claptrap.takeDamage(1);
	claptrap.beRepaired(2);

	std::cout << "=== SCAVTRAP TESTS ===" << std::endl;
	scavtrap.attack("Boloss");
	scavtrap.attack("");
	scavtrap.takeDamage(3);
	scavtrap.beRepaired(4);
	scavtrap.guardGate();

	std::cout << "=== FRAGTRAP TESTS ===" << std::endl;
	fragtrap.attack("Boloss");
	fragtrap.attack("");
	fragtrap.takeDamage(5);
	fragtrap.beRepaired(6);
	fragtrap.highFivesGuys();

	std::cout << "=== DIAMOND TESTS ===" << std::endl;
	diamondtrap.attack("Boloss");
	diamondtrap.attack("");
	diamondtrap.takeDamage(7);
	diamondtrap.beRepaired(8);
	diamondtrap.highFivesGuys();
	diamondtrap.guardGate();
	diamondtrap.whoAmI();

	return (0);
}
