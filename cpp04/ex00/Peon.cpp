#include "Peon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( const Peon & src ) : Victim(src.getName())
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Peon &				Peon::operator=( Peon const & rhs )
{
	Victim::operator=(rhs);
	return *this;
}

std::ostream &			Peon::operator<<( std::ostream & o ) const
{
	Victim::operator<<(o);
	return o;
}

std::ostream &	operator<<( std::ostream & o, Peon const &p )
{
	p.operator<<(o);
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Peon::getPolymorphed(void) const
{
	std::cout << this->getName()
		<< " has been turned into a pink pony!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
