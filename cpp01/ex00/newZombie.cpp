#include "Zombie.hpp"

Zombie*	Zombie::newZombie( std::string name )
{
	Zombie*	z;

	z = new Zombie();
	z->name = name;
	return (z);
}
