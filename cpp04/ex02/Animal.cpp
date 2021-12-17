#include "Animal.hpp"  
	
Animal::Animal()
{
	this->type = "";
	std::cout << "Animal constructed" << std::endl;
}
	
Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl;
}

Animal::Animal(const Animal &c)
{
	this->type = c.type;
	std::cout << "Animal constructed by copy" << std::endl;
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
