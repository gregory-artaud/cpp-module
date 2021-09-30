#include "Cure.hpp"  
	
Cure::Cure() : AMateria("cure")
{
	
}
	
Cure::~Cure()
{
	
}

Cure::Cure(const Cure & c) : AMateria(c.getType())
{

}

Cure & Cure::operator=(const Cure & rhs)
{
	this->type = rhs.getType();
}

Cure* Cure::clone() const
{
	return(new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
