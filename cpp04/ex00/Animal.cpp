#include "Animal.hpp"  
	
Animal::Animal()
{
	this->type = "";
}
	
Animal::~Animal()
{
	
}

Animal::Animal(const Animal &c)
{
	this->type = c.type;
}

Animal &			Animal::operator=( Animal const & rhs )
{
	this->type = rhs.type;
	return *this;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "waouahwouahouuuuahh" << std::endl;
}
