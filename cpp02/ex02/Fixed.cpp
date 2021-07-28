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

Fixed::Fixed( int const n )
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = n << Fixed::nb_fractionnals;
}

Fixed::Fixed( float const f )
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = roundf(f * (1 << Fixed::nb_fractionnals));
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

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}

bool Fixed::operator>(Fixed const &operand) const
{
	return (this->getRawBits() > operand.getRawBits());
}

bool Fixed::operator<(Fixed const &operand) const
{
	return (this->getRawBits() < operand.getRawBits());
}

bool Fixed::operator>=(Fixed const &operand) const
{
	return (this->getRawBits() >= operand.getRawBits());
}

bool Fixed::operator<=(Fixed const &operand) const
{
	return (this->getRawBits() <= operand.getRawBits());
}

bool Fixed::operator==(Fixed const &operand) const
{
	return (this->getRawBits() == operand.getRawBits());
}

bool Fixed::operator!=(Fixed const &operand) const
{
	return (this->getRawBits() != operand.getRawBits());
}

Fixed Fixed::operator+(Fixed const &operand)
{
	Fixed this_cpy(*this);

	this_cpy.setRawBits(this->getRawBits() + operand.getRawBits());
	return (this_cpy);
}

Fixed Fixed::operator-(Fixed const &operand)
{
	Fixed this_cpy(*this);

	this_cpy.setRawBits(this->getRawBits() - operand.getRawBits());
	return (this_cpy);
}

Fixed Fixed::operator*(Fixed const &operand)
{
	Fixed this_cpy(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)operand.getRawBits());
	this_cpy.setRawBits((tmp1 * tmp2) / (1 << Fixed::nb_fractionnals));
	return (this_cpy);
}

Fixed Fixed::operator/(Fixed const &operand)
{
	Fixed this_cpy(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)operand.getRawBits());
	this_cpy.setRawBits((tmp1 * (1 << Fixed::nb_fractionnals)) / tmp2);
	return (this_cpy);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);

	operator++();
	return (tmp);
}

Fixed Fixed::operator++()
{
	this->fixed_point++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	operator--();
	return (tmp);
}

Fixed Fixed::operator--()
{
	this->fixed_point--;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

float Fixed::toFloat( void ) const
{
	return ((float)this->fixed_point / (float)(1 << Fixed::nb_fractionnals));
}

int Fixed::toInt( void ) const
{
	return (this->fixed_point >> Fixed::nb_fractionnals);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return ((a <= b) ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	return ((a > b) ? a : b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return ((a <= b) ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Fixed::getRawBits( void ) const
{
	return (this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_point = raw;
}

/* ************************************************************************** */
