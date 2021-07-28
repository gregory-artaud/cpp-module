#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_point = rhs.getRawBits();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_point = raw;
}

/* ************************************************************************** */
