#include "Zombie.hpp"  
	
Zombie::Zombie()
{
	
}

Zombie::~Zombie()
{
	std::cout << this->name << " destroyed." << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
