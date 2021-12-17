#include "Animal.hpp"  
	
Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "";
}
	
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &c)
{
	std::cout << "Animal copy constructor called" << std::endl;
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
