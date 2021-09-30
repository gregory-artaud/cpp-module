#include "Dog.hpp"  
	
Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog &d)
{
	this->type = d.type;
	this->brain = new Brain(*(d.brain));
	std::cout << "Dog constructed by copy" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
	delete this->brain;
}

Dog &			Dog::operator=( Dog const & rhs )
{
	this->type = rhs.type;
	this->brain = rhs.brain;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Waf Waf bon toutou" << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return (this->brain);
}
