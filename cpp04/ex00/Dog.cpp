#include "Dog.hpp"  
	
Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}
	
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;	
}

Dog::Dog(const Dog &d)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = d.type;
}

Dog &			Dog::operator=( Dog const & rhs )
{
	this->type = rhs.type;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Waf Waf bon toutou" << std::endl;
}
