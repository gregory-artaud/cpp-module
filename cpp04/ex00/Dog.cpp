#include "Dog.hpp"  
	
Dog::Dog()
{
	this->type = "Dog";
}
	
Dog::~Dog()
{
	
}

Dog::Dog(const Dog &d)
{
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
