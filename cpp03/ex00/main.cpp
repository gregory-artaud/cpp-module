#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptrap("Hannah");

	claptrap.attack("Montana");
	claptrap.attack("");
	claptrap.takeDamage(3);
	claptrap.beRepaired(2);

	return (0);
}
