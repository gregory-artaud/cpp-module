#include "WrongAnimal.hpp"  
	
WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = "";
}
	
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &c)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
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
