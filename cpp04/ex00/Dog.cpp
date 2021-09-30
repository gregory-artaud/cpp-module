#include "Dog.hpp"  
	
Dog::Dog()
{
	this->type = "Dog";
}
	
Dog::~Dog()
{
	
}

void Dog::makeSound(void) const
{
	std::cout << "Waf Waf bon toutou" << std::endl;
}
