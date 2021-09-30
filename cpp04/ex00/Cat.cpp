#include "Cat.hpp"  
	
Cat::Cat()
{
	this->type = "Cat";
}
	
Cat::~Cat()
{
	
}

Cat::Cat(const Cat &c)
{
	this->type = c.type;
}

Cat &			Cat::operator=( Cat const & rhs )
{
	this->type = rhs.type;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Miaou je suis le chat" << std::endl;
}
