#include "AMateria.hpp"  

AMateria::AMateria(void)
{
}

AMateria::AMateria(std::string const & type) : type(type)
{
	
}

AMateria::AMateria(const AMateria & a)
{
	*this = a;
}

AMateria::~AMateria()
{
	
}

AMateria & AMateria::operator=(const AMateria & rhs)
{
	(void)rhs;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter & target)
{
	(void)target;
}