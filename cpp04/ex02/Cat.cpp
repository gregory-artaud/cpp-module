#include "Cat.hpp"  
	
Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat constructed" << std::endl;
}
	
Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &c)
{
	this->type = c.type;
	this->brain = new Brain(*(c.brain));
	std::cout << "Cat constructed by copy" << std::endl;
}

Cat &			Cat::operator=( Cat const & rhs )
{
	this->type = rhs.type;
	this->brain = rhs.brain;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Miaou je suis le chat" << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (this->brain);
}
