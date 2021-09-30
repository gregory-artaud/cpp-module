#include "Animal.hpp"  
	
Animal::Animal()
{
	this->type = "";
}
	
Animal::~Animal()
{
	
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "waouahwouahouuuuahh" << std::endl;
}
