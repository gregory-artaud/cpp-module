#include "Zombie.hpp"

#define N 3

int	main(void)
{
	Zombie*	z;

	z = Zombie::zombieHorde(N, "Pierre");
	for (int i = 0; i < N; i++)
		z[i].announce();
	delete[] z;
}
