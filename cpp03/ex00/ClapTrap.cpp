#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor call" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap copy constructor call" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor call" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/
ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "ClapTrap assignment operator call" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->hit_points = rhs.hit_points;
		this->energy_points = rhs.energy_points;
		this->attack_damage = rhs.attack_damage;
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack(std::string const &target)
{
	if (target.empty())
		std::cout << this->name << " attacks nothing!" << std::endl;
	else
		std::cout << this->name << " attacks " << target
			<< ", causing " << this->hit_points << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " took " << amount <<
		" points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " got repaired " << amount <<
		" points!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
