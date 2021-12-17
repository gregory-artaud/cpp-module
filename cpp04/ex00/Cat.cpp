#include "Cat.hpp"  
	
Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}
	
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &c)
{
	std::cout << "Cat copy constructor called" << std::endl;
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
