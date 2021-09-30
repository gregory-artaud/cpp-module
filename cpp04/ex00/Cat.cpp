#include "Cat.hpp"  
	
Cat::Cat()
{
	this->type = "Cat";
}
	
Cat::~Cat()
{
	
}

void Cat::makeSound(void) const
{
	std::cout << "Miaou je suis le chat" << std::endl;
}
