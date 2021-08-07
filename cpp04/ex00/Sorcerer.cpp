#include "Sorcerer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Sorcerer::Sorcerer( const Sorcerer & src )
{
	*this = src;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title
		<< ", is dead. Consequences will never be the same!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Sorcerer &				Sorcerer::operator=( Sorcerer const & rhs )
{
	this->name = rhs.name;
	this->title = rhs.title;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Sorcerer const & s )
{
	o << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Sorcerer::getName(void) const
{
	return (this->name);
}

std::string Sorcerer::getTitle(void) const
{
	return (this->title);
}

/* ************************************************************************** */
