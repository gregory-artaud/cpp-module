#include "WrongAnimal.hpp"  
	
WrongAnimal::WrongAnimal()
{
	this->type = "";
}
	
WrongAnimal::~WrongAnimal()
{
	
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "waouahwouahouuuuahh" << std::endl;
}
