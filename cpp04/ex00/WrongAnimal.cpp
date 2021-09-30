#include "WrongAnimal.hpp"  
	
WrongAnimal::WrongAnimal()
{
	this->type = "";
}
	
WrongAnimal::~WrongAnimal()
{
	
}

WrongAnimal::WrongAnimal(const WrongAnimal &c)
{
	this->type = c.type;
}

WrongAnimal &			WrongAnimal::operator=( WrongAnimal const & rhs )
{
	this->type = rhs.type;
	return *this;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "waouahwouahouuuuahh" << std::endl;
}
