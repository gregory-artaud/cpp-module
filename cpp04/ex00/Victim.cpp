#include "Victim.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Victim::Victim(std::string name)
{
	this->name = name;
	std::cout << "Some random victim called " << this->name
		<< " just appeared!" << std::endl;
}

Victim::Victim( const Victim & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Victim::~Victim()
{
	std::cout << "Victim " << this->name
		<< " just died for no apparent reason!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Victim &				Victim::operator=( Victim const & rhs )
{
	this->name = rhs.name;
	return *this;
}

std::ostream &			Victim::operator<<( std::ostream & o) const
{
	o << "I'm " << this->name << " and I like otters!" << std::endl;
	return o;
}

std::ostream &	operator<<( std::ostream & o, Victim const &v )
{
	return (v.operator<<(o));
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Victim::getPolymorphed(void) const
{
	std::cout << this->name
		<< " has been turned into a cute little sheep!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Victim::getName(void) const
{
	return (this->name);
}

void Victim::setName(std::string name)
{
	this->name = name;
}

/* ************************************************************************** */
