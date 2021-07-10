#include "Zombie.hpp"

int	main(void)
{
	Zombie*	pz;

	pz = Zombie::newZombie("Vache");
	pz->announce();
	Zombie::randomChump("Poulet");
	delete pz;
}
