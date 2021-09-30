#include "WrongCat.hpp"  
	
WrongCat::WrongCat()
{
	this->type = "WrongCat";
}
	
WrongCat::~WrongCat()
{
	
}

void WrongCat::makeSound(void) const
{
	std::cout << "Miaou je suis le chat" << std::endl;
}
